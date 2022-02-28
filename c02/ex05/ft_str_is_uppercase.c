/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:56:34 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/21 19:35:29 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
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
		if (str[cont] >= 'A' && str[cont] <= 'Z')
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
	x = ft_str_is_uppercase("HOLAPENITA");
	printf("%d", x);
	return (0);
}*/
