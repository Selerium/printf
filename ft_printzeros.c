/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printzeros.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:14:36 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 22:09:36 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printzeros(char *add, int *count, int s)
{
	int	digits;
	int	power;

	digits = 0;
	power = 1;
	while (ft_isdigit(*(--add)))
	{
		digits += ((*add) - 48) * power;
		power *= 10;
	}
	digits -= s;
	while (digits-- > 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
}
