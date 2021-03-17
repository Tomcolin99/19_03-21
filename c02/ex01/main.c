/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:17:03 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/12 09:37:50 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *des, char *src, unsigned int n);

int main(void)
{
	char	src[] = "hello world";
	char	src1[] = "hello world";
	char	*dest;
	char	des;
	char	*dest1;
	char	des1;

	dest = &des;
	dest1 = &des1;

	printf("%s\n" , ft_strncpy(dest, src, 4));
	printf("%s\n", strncpy(dest1, src1, 4));
}
