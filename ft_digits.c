/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:10:52 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/04 22:24:12 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_digits(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
