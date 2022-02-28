/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:54:41 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/21 19:35:15 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	cont;
	int	exit;

	cont = 0;
	exit = 1;
	if (str[cont] == '\0')
	{
		return (exit);
	}
	while (str[cont] != '\0' && exit == 1)
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			exit = 1;
		}
		else
		{
			exit = 0;
		}
		cont++;
	}
	return (exit);
}
/*#include	<stdio.h>
int main(void)
{
	int x;

	x = ft_str_is_lowercase("z");
	printf("%d", x);
	return (0);
}*/
