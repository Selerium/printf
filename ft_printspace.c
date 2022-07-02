/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:14:36 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 18:52:53 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printspace(char *add, int *count, char *flags, int s)
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
		write(1, " ", 1);
		(*count)++;
	}
}
