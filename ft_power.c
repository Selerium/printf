/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:12:13 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/29 23:14:55 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_power(int num, int power)
{
	int	result;

	result = 1;
	while (power--)
		result *= num;
	return (result);
}
