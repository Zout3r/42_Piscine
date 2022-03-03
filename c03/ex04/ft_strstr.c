/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:47:41 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/28 13:41:44 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	cont;
	int	check;

	cont = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			cont = 0;
			check = 0;
			while (to_find[cont] != '\0')
			{
				if (str[cont] != to_find[cont])
					check = 1;
				cont++;
			}
			if (check == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	char *a = "hola esto es una prueba";
	char *b = "esto";
	printf("%s", ft_strstr(a, b));
	return (0);
}*/
