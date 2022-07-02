/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:18:31 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/30 21:52:13 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printchr(int c, char *flags, int *count)
{
	char	ch;

	ch = (char) c;
	(*count)++;
	write(1, &ch, 1);
}
