/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:18:31 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 17:47:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printchr(int c, char *flags, int *count, char *add)
{
	char	ch;

	ch = (char) c;
	if (flags[0] == '0')
	{
		ft_printspace(add, count, flags, 1);
		(*count)++;
	}
	write(1, &ch, 1);
	if (flags[0] == '1')
	{
		ft_printspace(add, count, flags, 1);
		(*count)++;
	}
}
