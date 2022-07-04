/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:30:58 by jadithya          #+#    #+#             */
/*   Updated: 2022/07/04 22:02:18 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static void	ft_check(bool condition)
{
	if (condition)
		ft_printf("\033[1;34mye :D\033[0;37m\n");
	else
		ft_printf("\033[1;31mnu :(\033[0;37m\n");
}

int	main()
{
	printf("\nTest 1: INT_MIN\n");
	int a = ft_printf("u \n%d \thea\n", INT_MIN);
	int b = printf("u \n%d \thea\n", INT_MIN);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 2: INT_MAX\n");
	a = ft_printf("u \n%d \thea\n", INT_MAX);
	b = printf("u \n%d \thea\n", INT_MAX);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 3: characters\n");
	a = ft_printf("%c\t%c\t%c\t%c\n", 'a', '\'', '2', '~');
	b = printf("%c\t%c\t%c\t%c\n", 'a', '\'', '2', '~');
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 4: strings\n");
	a = ft_printf("%s\t%s\t%s\t%s\n", "urmom", "ahhhhhh", "234uhegw;-=", "");
	b = printf("%s\t%s\t%s\t%s\n", "urmom", "ahhhhhh", "234uhegw;-=", "");
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	a = ft_printf(" NULL %s NULL\n", NULL);
	b = printf(" NULL %s NULL\n", NULL);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 5: decimals and integers\n");
	a = ft_printf("%d\t%d\t%i\t%i\n", -125, 1245651, -87437, 31563);
	b = printf("%d\t%d\t%i\t%i\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 6: hexadecimals\n");
	a = ft_printf("%x\t%x\t%X\t%X\n", -125, 1245261445, -87437, 31563);
	b = printf("%x\t%x\t%X\t%X\n", -125, 1245261445, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 7: unsigned ints\n");
	a = ft_printf("%u\t%u\t%u\t%u\n", -125, 1245651, -87437, 31563);
	b = printf("%u\t%u\t%u\t%u\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 8: %%%%%%%%%%%%%%\n");
	a = ft_printf("%% %% %% %%\n");
	b = printf("%% %% %% %%\n");
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 9: ptr addresses\n");
	char c = 'a', d = 'b';
	a = ft_printf("%p %p\n", &c, &d);
	b = printf("%p %p\n", &c, &d);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 9.2: ptr addresses\n");
	a = ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	b = printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 9.3: ptr addresses\n");
	a = ft_printf("%-9p|%-10p\n", LONG_MIN, LONG_MAX);
	b = printf("%-9p|%-10p\n", LONG_MIN, LONG_MAX);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 9.4: ptr addresses\n");
	a = ft_printf("%-11p|%-12p\n", INT_MIN, INT_MAX);
	b = printf("%-11p|%-12p\n", INT_MIN, INT_MAX);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 10: # flag\n");
	a = ft_printf("%###x\t%#x\t%###X\t%#X\n", -125, 1245651, -87437, 31563);
	b = printf("%###x\t%#x\t%###X\t%#X\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 11: ' ' flag\n");
	a = ft_printf("% d\t\n%  d\t\n% d\t\n%   d\n", -125, 1245651, -87437, 31563);
	b = printf("% d\t\n%  d\t\n% d\t\n%   d\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 12: + flag\n");
	a = ft_printf("%+d\t\n%+d\t\n%++d\t\n%++++d\n", -125, 1245651, -87437, 31563);
	b = printf("%+d\t\n%+d\t\n%++d\t\n%++++d\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 13: right flag wrong type\n");
	a = ft_printf("%+s\t%#s\t% s\t%+# # +#  ++ # +   # + + #s\n", "-125", "1245651", "-87437", "31563");
	b = printf("%+s\t%#s\t% s\t%+# # +#  ++ # +   # + + #s\n", "-125", "1245651", "-87437", "31563");
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 14: number flag for char and - flag\n");
	a = ft_printf("%5c\t|%-10c\t|%20c\t|%-10c\n", 'c','h', '-', '2');
	b = printf("%5c\t|%-10c\t|%20c\t|%-10c\n", 'c', 'h', '-', '2');
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 15: number flag for str and - flag\n");
	a = ft_printf("%015s|%-10s|%20s|%-10s\n", "urmom", "ahhhhhh", "234uhegw;-=", "");
	b = printf("%015s|%-10s|%20s|%-10s\n", "urmom", "ahhhhhh", "234uhegw;-=", "");
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 16: number flag for ints and - flag\n");
	a = ft_printf("%5i|%-10i|%20d|%-10d\n", -125, 1245651, -87437, 31563);
	b = printf("%5i|%-10i|%20d|%-10d\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 17: number flag for uns ints and - flag\n");
	a = ft_printf("%5u|%-10u|%20u|%-10u\n", -125, 1245651, -87437, 31563);
	b = printf("%5u|%-10u|%20u|%-10u\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 18: number flag for ints and 0 flag\n");
	a = ft_printf("%0-5d|%010i|%00d|%0-10i\n", -125, 1245651, -87437, 31563);
	b = printf("%0-5d|%010i|%00d|%0-10i\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 19: number flag for uns ints and 0 flag\n");
	a = ft_printf("%05u|%010u|%00u|%010u\n", -125, 1245651, -87437, 31563);
	b = printf("%05u|%010u|%00u|%010u\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 20: number flag for ints and . flag\n");
	a = ft_printf("%.5d|%.10i|%.i|%.10d\n", -125, 1245651, -87437, 31563);
	b = printf("%.5d|%.10i|%.i|%.10d\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 21: number flag for unsints and . flag\n");
	a = ft_printf("%.5u|%.10u|%.u|%.10u\n", -125, 1245651, -87437, 31563);
	b = printf("%.5u|%.10u|%.u|%.10u\n", -125, 1245651, -87437, 31563);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 22: number flag for strings and . flag\n");
	a = ft_printf("%.5s|%.10s|%.s|%.10s\n", "-125", "1245651", "-87437", "31563");
	b = printf("%.5s|%.10s|%.s|%.10s\n", "-125", "1245651", "-87437", "31563");
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	printf("\nTest 23: whatever the FRICk i want\n");
	a = ft_printf(" %.1u|\n", 0);
	b = printf(" %.1u|\n", 0);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	a = ft_printf(" %.11u|\n", LONG_MIN);
	b = printf(" %.11u|\n", LONG_MIN);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	a = ft_printf(" %.8u %.9u %.10u %.11u %.12u %.13u %.14u|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	b = printf(" %.8u %.9u %.10u %.11u %.12u %.13u %.14u|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	a = ft_printf(" %.2x|\n", 1);
	b = printf(" %.2x|\n", 1);
	printf("%d vs %d\n", a, b);
	ft_check(a == b);
	return (0);
}