/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:43:26 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/17 14:53:26 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int a;

	i = argc - 1;
	a = 0;
	while (i > 0)
	{
		while (argv[i][a] != '\0')
		{
			write(1, &argv[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		a = 0;
		i--;
	}
	(void)argc;
	return (0);
}