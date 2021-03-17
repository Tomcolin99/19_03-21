/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:33:29 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/08 13:26:44 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_write(char c);

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		ft_write(a / 10 + '0');
		ft_write(a % 10 + '0');
		ft_write(' ');
		ft_write(b / 10 + '0');
		ft_write(b % 10 + '0');
		if (a < 98)
		{
			write(1, ", ", sizeof(", "));
		}
		if (++b > 99)
		{
			b = ++a + 1;
		}
	}
}
