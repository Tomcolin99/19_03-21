/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:50:46 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/17 10:49:07 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char text1[100] = "Hello orld ";
	char text2[] = "tom tom tom mot mot";

	printf("%s\n", ft_strcat(text1, text2));
}
