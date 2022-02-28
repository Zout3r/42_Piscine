/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:17:00 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/18 13:27:33 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			str[cont] = str[cont] + 32;
		}
		cont ++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char destino[]= "AAAAA ";
	char *x;
	ft_strlowcase(destino);
	printf("%s", destino);
	return (0);
}*/
