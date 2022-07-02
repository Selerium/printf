/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:31:53 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 20:47:02 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printunsint(unsigned int n, char *flags, int *count, char *add)
{
	char	ch;
	int		i;
	int		size;

	i = ft_digits(n) - 1;
	size = i + 1;
	if (flags[2] == '1' || (flags[1] == '1' && flags[0] == '0'))
		ft_printzeros(add, count, flags, size);
	else if (flags[0] == '0')
		ft_printspace(add, count, flags, size);
	while (i >= 0)
	{
		ch = (n / (ft_power(10, i))) + 48;
		write(1, &ch, 1);
		(*count)++;
		n %= ft_power(10, i);
		i--;
	}
	if (flags[0] == '1')
		ft_printspace(add, count, flags, size);
}
