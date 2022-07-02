/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precisionprint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:02:20 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 21:25:07 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_precisionprint(char *str, int *count, char *add, char *flags)
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
	if (str[0] == '-')
	{
		write(1, "-", 1);
		(*count)++;
		str++;
	}
	digits -= ft_strlen(str);
	while (digits-- > 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
	flags[2] = '0';
	ft_printstr(str, flags, count, add);
}
