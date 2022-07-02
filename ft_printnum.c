/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:30:39 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 20:42:31 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printnum(int n, char *flags, int *count, char *add)
{
	char	*str;
	if (flags[4] == '1' && n > -1)
	{
		flags[4] = '0';
		write(1, " ", 1);
		(*count)++;
	}
	if (flags[5] == '1' && n >= 0)
	{
		flags[5] = '0';
		write(1, "+", 1);
		(*count)++;
	}
	str = ft_itoa(n);
	if (flags[2] == '0')
		ft_printstr(str, flags, count, add);
	else
		ft_precisionprint(str, count, add, flags);
}
