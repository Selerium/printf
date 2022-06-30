/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:47:20 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/30 21:42:54 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_highhex(int n, int *count)
{
	char	ch;

	if (n < 10)
		ch = n + 48;
	else
		ch = n + 55;
	write(1, &ch, 1);
	*count++;
}

void	ft_lowhex(int n, int *count)
{
	char	ch;

	if (n < 10)
		ch = n + 48;
	else
		ch = n + 97;
	write(1, &ch, 1);
	*count++;
}

void	ft_printhexlow(unsigned int n, char *flags, int *count)
{
	if (n > 15)
		ft_printhexlow((n / 16), flags, count);
	else
		ft_lowhex((n % 16), count);
}

void	ft_printhexhigh(unsigned int n, char *flags, int *count)
{
	if (n > 15)
		ft_printhexhigh((n / 16), flags, count);
	else
		ft_highhex((n % 16), count);
}
