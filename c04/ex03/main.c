/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <tcolin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:11:21 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/15 15:11:21 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str);

int     main(void)
{
    char text[] = "   123ab3444";

    printf("%d\n", ft_atoi(text));
    printf("%d\n", atoi(text));
}
