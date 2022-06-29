/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:15:04 by jadithya          #+#    #+#             */
/*   Updated: 2022/06/29 23:17:21 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdio.h>
# include"libft/libft.h"

int		ft_power(int num, int power);
int		ft_digits(unsigned int n);
int		ft_printf(const char *s, ...);
void	ft_printchr(char c, char *flags);
void	ft_printstr(char *s, char *flags);
void	ft_printnum(int n, char *flags);
void	ft_printunsint(unsigned int n, char *flags);
void	ft_printhexlow(unsigned int n, char *flags);
void	ft_printhexhigh(unsigned int n, char *flags);
void	ft_printptrhex(void *add, char *flags);
#endif