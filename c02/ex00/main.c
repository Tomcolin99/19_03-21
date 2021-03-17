/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:11:22 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/11 13:16:25 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char	src[] = "hello world";
	char	*dest;
	char	desti;

	dest = &desti;

	printf("%s\n", ft_strcpy(dest, src));
}
