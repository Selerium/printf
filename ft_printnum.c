/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:30:39 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 16:01:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printnum(int n, char *flags, int *count)
{
	char	*str;

	if (flags[4] == '1' && n > -1)
	{
		flags[4] = '0';
		write(1, " ", 1);
		(*count)++;
	}
	if (flags[5] == '1')
	{
		if (n >= 0)
		{
			flags[5] = '0';
			write(1, "+", 1);
			(*count)++;
		}
	}
	str = ft_itoa(n);
	write(1, str, ft_strlen(str));
	(*count) += ft_strlen(str);
}
