/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:40:56 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/28 13:36:42 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cont;
	unsigned int	cont2;

	cont = 0;
	cont2 = 0;
	while (dest[cont2] != '\0')
	{
		cont2++;
	}
	while (src[cont] != '\0' && cont < nb)
	{
		dest[cont2] = src[cont];
		cont++;
		cont2++;
	}
	dest[cont2] = '\0';
	return (dest);
}
/*#include<stdio.h>
int	main(void)
{
	char a[] = "hola ";
	char b[] = "amics";
	char *res;
	res = ft_strncat(a, b, 2);
	printf("%s", res);
	return (0);
}*/
