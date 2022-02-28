/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:46:06 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/18 12:56:45 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char destino[] = "xxxxxxxxxxxxxxxxxxxxxx ";
	unsigned int n;

	n = 3;
	ft_strncpy(destino, "Hola mUNDO", 3);
	printf("%s", destino);
	return (0);
}*/
