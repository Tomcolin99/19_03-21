/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomcolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:44:17 by tomcolin          #+#    #+#             */
/*   Updated: 2021/03/08 13:25:08 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, sizeof(i));
		i++;
	}
}
