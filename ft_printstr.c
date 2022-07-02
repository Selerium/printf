/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:28:40 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 22:10:35 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static void	ft_initdigits(int *digits, int *power, char *s, char *add)
{
	while (ft_isdigit(*(--add)))
		{
			(*digits) += ((*add) - 48) * (*power);
			(*power) *= 10;
		}
	if ((*digits) > (int) ft_strlen(s))
		(*digits) = (int) ft_strlen(s);
}

void	ft_printstr(char *s, char *flags, int *count, char *add)
{
	int	digits;
	int	power;

	digits = 0;
	power = 1;
	if (flags[2] == '1')
		ft_initdigits(&digits, &power, s, add);
	else
	{
		if (flags[1] == '1' && flags[0] == '0')
			ft_printzeros(add, count, (int) ft_strlen(s));
		else if (flags[0] == '0')
			ft_printspace(add, count, (int) ft_strlen(s));
		digits = ft_strlen(s);
	}
	write(1, s, digits);
	(*count) += digits;
	if (flags[0] == '1')
		ft_printspace(add, count, (int) ft_strlen(s));
}
