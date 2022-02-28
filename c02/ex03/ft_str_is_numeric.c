/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:45:04 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/21 19:34:44 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
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
		if (str[cont] >= '0' && str[cont] <= '9')
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

	x = ft_str_is_numeric("012");
	printf("%d", x);
	return (0);
}*/
