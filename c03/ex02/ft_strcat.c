/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:10:30 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/28 13:35:19 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	cont;
	int	cont2;

	cont = 0;
	cont2 = 0;
	while (dest[cont2] != '\0')
	{
		cont2++;
	}
	while (src[cont] != '\0')
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
	res = ft_strcat(a, b);
	printf("%s", res);
	return (0);
}*/
