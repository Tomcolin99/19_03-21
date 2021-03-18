/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:44:20 by tom               #+#    #+#             */
/*   Updated: 2021/03/18 14:55:02 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab_int;
	int	i;

	i = 0;
	tab_int = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab_int[i] = min;
		i++;
		min++;
	}
	return (tab_int);
}
