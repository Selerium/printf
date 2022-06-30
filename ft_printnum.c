/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:30:39 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/30 21:43:05 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_printnum(int n, char *flags, int *count)
{
	char	*str;

	str = ft_itoa(n);
	write(1, str, ft_strlen(str));
	*count++;
}
