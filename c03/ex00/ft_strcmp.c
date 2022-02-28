/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:04:19 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/20 17:25:18 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] != '\0')
	{
		if (s1[cont] > s2[cont])
			return (1);
		if (s1[cont] < s2[cont])
			return (-1);
		cont++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    int x;
    x = ft_strcmp("hola", "hxla");
    printf("%d", x);
	x = strcmp("hola", "hxla");
    printf("%d", x);
}*/