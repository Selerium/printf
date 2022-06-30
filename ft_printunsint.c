/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:31:53 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/30 21:42:47 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printunsint(unsigned int n, char *flags, int *count)
{
	char	ch;
	int		i;

	i = ft_digits(n);
	while (i)
	{
		ch = (n % (ft_power(10, i))) + 48;
		write(1, &ch, 1);
		*count++;
		i--;
		n /= 10;
	}
}
