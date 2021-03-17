/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:48:32 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/08 17:06:24 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int size2;
	int tab2[size];

	i = 0;
	size2 = size - 1;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		tab2[size2] = tab[i];
		i++;
		size2--;
	}
	size2 = 0;
	while (size2 < size)
	{
		printf("%d\n", tab2[size2]);
		size2++;
	}
}
