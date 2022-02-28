/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:14:09 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/18 13:26:28 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			str[cont] = str[cont] - 32;
		}
		cont ++;
	}
	return (str);
}
/*#include	<stdio.h>
int main(void)
{
	
	char destino[]= "aaaa ";
	char *x;
	ft_strupcase(destino);
	printf("%s", destino);
	return (0);
}*/