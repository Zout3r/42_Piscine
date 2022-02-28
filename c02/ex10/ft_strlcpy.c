/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:51:05 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/21 19:37:12 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	cont2;

	cont = 0;
	cont2 = 0;
	while (src[cont2] != '\0')
	{
		cont2++;
	}
	if (size < 1)
	{
		return (cont2);
	}
	while (cont < size -1 && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (cont2);
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char	x[] = "xxxxxxxxxxxxxxx";
	unsigned int j;

	j = ft_strlcpy(x, "Hola Mun", 1);
	printf("%d ", j);
	j = strlcpy(x, "Hola Mun", 1);
	printf("%d", j);
	return (0);
}*/
