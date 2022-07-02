/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:15:04 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/02 22:09:35 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdio.h>
# include<stdbool.h>
# include"libft/libft.h"

int		ft_power(int num, int power);
int		ft_digits(unsigned int n);
void	ft_printspace(char *add, int *count, int s);
void	ft_printzeros(char *add, int *count, int s);
void	ft_precisionprint(char *str, int *count, char *add, char *flags);
int		ft_printf(const char *s, ...);
void	ft_printchr(int c, char *flags, int *count, char *add);
void	ft_printstr(char *s, char *flags, int *count, char *add);
void	ft_printnum(int n, char *flags, int *count, char *add);
void	ft_printunsint(unsigned int n, char *flags, int *count, char *add);
void	ft_printhexlow(unsigned int n, char *flags, int *count);
void	ft_printhexhigh(unsigned int n, char *flags, int *count);
void	ft_printptrhex(void *add, char *flags, int *count);
#endif