/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:14:47 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 15:38:47 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static int	ft_flag(char c)
{
	if (c == '-' || c == '0' || c == '.')
		return (1);
	if (c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

static char	*ft_flagcheck(const char *s, int *i)
{
	char	*flags;

	flags = ft_strdup("000000");
	while (ft_flag((char) s[*i]))
	{
		if (s[*i] == '-')
			flags[0] = '1';
		else if (s[*i] == '0')
			flags[1] = '1';
		else if (s[*i] == '.')
			flags[2] = '1';
		else if (s[*i] == '#')
			flags[3] = '1';
		else if (s[*i] == ' ')
			flags[4] = '1';
		else if (s[*i] == '+')
			flags[5] = '1';
		(*i)++;
	}
	return (flags);
}

static int	ft_actualprint(const char *s, int *i, char *flags, va_list ap)
{
	int	count;

	count = 0;
	flags = ft_flagcheck(s, i);
	if (s[*i] == 'c')
		ft_printchr(va_arg(ap, int), flags, &count);
	else if (s[*i] == 's')
		ft_printstr(va_arg(ap, char *), flags, &count);
	else if (s[*i] == 'p')
		ft_printptrhex(va_arg(ap, void *), flags, &count);
	else if (s[*i] == 'd' || s[*i] == 'i')
		ft_printnum(va_arg(ap, int), flags, &count);
	else if (s[*i] == 'x')
		ft_printhexlow(va_arg(ap, unsigned int), flags, &count);
	else if (s[*i] == 'X')
		ft_printhexhigh(va_arg(ap, unsigned int), flags, &count);
	else if (s[*i] == 'u')
		ft_printunsint(va_arg(ap, unsigned int), flags, &count);
	else if (s[*i] == '%')
	{
		write(1, "%", 1);
		count++;
	}
	free (flags);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	char	*flags;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			count += ft_actualprint(s, &i, flags, ap);
		}
		else
		{
			write(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
