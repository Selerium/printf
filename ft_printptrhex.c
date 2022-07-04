/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptrhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:33:01 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/04 18:29:10 by jadithya         ###   ########.fr       */
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

static void	ft_printhelow(unsigned long n, char *flags, int *count)
{
	if (n > 15)
		ft_printhelow((n / 16), flags, count);
	ft_lowhex((n % 16), count);
}

void	ft_printptrhex(void *add, char *flags, int *count, char *add2)
{
	write(1, "0x", 2);
	(*count) += 2;
	ft_printhelow((unsigned long) add, flags, count);
	ft_printspace(add2, count, (*count));
}
