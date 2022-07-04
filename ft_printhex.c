/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:47:20 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/04 22:30:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static void	ft_lowhex(int n, int *count)
{
	char	ch;

	if (n < 10)
		ch = n + 48;
	else
		ch = n + 87;
	write(1, &ch, 1);
	(*count)++;
}

static void	ft_reclow(unsigned int n, int *count)
{
	if (n > 15)
		ft_reclow((n / 16), count);
	ft_lowhex((n % 16), count);
}

void	ft_printhexlow(unsigned int n, char *flags, int *count, char *add)
{
	if (flags[3] == '1' && n != 0)
	{
		write(1, "0x", 2);
		(*count) += 2;
		flags[3] = '0';
	}
	if (flags[2] == '1')
		ft_printzeros(add, count, *count + 1);
	ft_reclow(n, count);
	if (flags[0] == '1')
		ft_printspace(add, count, *count);
}
