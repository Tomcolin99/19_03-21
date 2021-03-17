/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <tcolin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:22:10 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/15 12:22:10 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    unsigned int    num;
    
    num = 0;
    if (nb < 0)
    {
        write (1, "-", 1);
        num -= nb;
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
    write (1, &num, 1);
}