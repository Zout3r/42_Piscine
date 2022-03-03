/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:27:09 by jperez-p          #+#    #+#             */
/*   Updated: 2022/03/02 20:03:31 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	mult;
	int	res;
	int	cont;

	mult = 1;
	cont = 0;
	res = 0;
	while (str[cont] == ' ')
	{
		cont++;
	}
	while (str[cont] != '\0' && (str[cont] == '-' || str[cont] == '+'))
	{
		if (str[cont] == '-')
			mult = mult * -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		res = (res * 10 + str[cont]) - '0';
		cont++;
	}
	res = res * mult;
	return (res);
}
/*#include    <stdio.h>
int main (void)
{
    printf("%d", ft_atoi("    ---+-22687"));
}*/
