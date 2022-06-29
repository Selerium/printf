/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:47:20 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/29 23:42:06 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static char	*ft_converthexlow(unsigned int n)
{
	int	rem;
	int	result;
	int	power;

	power = 1;
	result = 0;
	while (n > 15)
	{
		rem = n % 16;
		result += (rem * ft_power(16, power++));
		n /= 16;
	}
	return (result);
}

void	ft_printhexlow(unsigned int n, char *flags)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_converthexlow(n);
}
