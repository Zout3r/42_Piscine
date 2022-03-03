/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:00:37 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/28 13:33:06 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((s1[cont] != '\0' || s2[cont] != '\0') && cont < n)
	{
		if (s1[cont] > s2[cont])
		{
			return (1);
		}
		if (s1[cont] < s2[cont])
		{
			return (-1);
		}
		cont++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    int x;
    x = ft_strncmp("hxla", "hola", 3);
    printf("%d", x);
    x = strncmp("hxla", "hola", 3);
    printf("%d", x);
}*/
