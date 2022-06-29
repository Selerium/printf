/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:14:47 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/29 23:18:03 by jadithya         ###   ########.fr       */
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

static int	ft_flagcheck(char *s, int *i)
{
	char	*flags;

	flags = ft_strdup("000000");
	while (ft_flag(s[*i]))
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

static void	ft_actualprint(char *s, int *i, char *flags, va_list ap)
{
	flags = ft_flagcheck((s + *i), &i);
	if (s[*i] == 'c')
		ft_printchr((char) va_arg(ap, char), flags);
	else if (s[*i] == 's')
		ft_printstr((char *) va_arg(ap, char *), flags);
	else if (s[*i] == 'p')
		ft_printptrhex(va_arg(ap, void *), flags);
	else if (s[*i] == 'd' || s[*i] == 'i')
		ft_printnum((int) va_arg(ap, int), flags);
	else if (s[*i] == 'x')
		ft_printhexlow((unsigned int) va_arg(ap, unsigned int), flags);
	else if (s[*i] == 'X')
		ft_printhexhigh((unsigned int) va_arg(ap, unsigned int), flags);
	else if (s[*i] == 'u')
		ft_printunsint((unsigned int) va_arg(ap, unsigned int), flags);
	else if (s[*i] == '%')
		write(1, "%", 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	char	*flags;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			ft_actualprint(s, &i, flags, ap);
		else
			write(1, &s[i], 1);
		i++;
	}
	//free (flags);
	va_end(ap);
	return ((int) ft_strlen(s));
}
