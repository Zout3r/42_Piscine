/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:59:32 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/18 12:53:57 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char ori;
	char dest[30] = "xxxxxxxxxxxxxxxxxx";

	ft_strcpy(dest, "Hola Mundo");
	printf("%s", dest); 
	return (0);
}*/