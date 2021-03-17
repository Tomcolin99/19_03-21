/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:34:20 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/08 13:27:23 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	unsigned int		num;

	if (nb < 0)
	{
		write(1, "-", sizeof("-"));
		num = -nb;
	}
	else
	{
		num = nb;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	num = num + '0';
	write(1, &num, 1);
}
