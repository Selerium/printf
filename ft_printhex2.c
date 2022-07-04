/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:47:20 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/04 21:48:21 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static void	ft_highhex(int n, int *count)
{
	char	ch;

	if (n < 10)
		ch = n + 48;
	else
		ch = n + 55;
	write(1, &ch, 1);
	(*count)++;
}

static void	ft_rechigh(unsigned int n, int *count)
{
	if (n > 15)
		ft_rechigh((n / 16), count);
	ft_highhex((n % 16), count);
}

void	ft_printhexhigh(unsigned int n, char *flags, int *count, char *add)
{
	if (flags[3] == '1' && n != 0)
	{
		write(1, "0X", 2);
		(*count) += 2;
		flags[3] = '0';
	}
	ft_rechigh(n, count);
	if (flags[0] == '1')
		ft_printspace(add, count, *count);
}
