/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomcolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:45:40 by tomcolin          #+#    #+#             */
/*   Updated: 2021/03/08 13:26:15 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_write(char c);

void	ft_print_char(int a, int b, int c);

void	ft_write(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_print_char(int a, int b, int c)
{
	ft_write(a);
	ft_write(b);
	ft_write(c);
	if (a < '7')
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_char(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
