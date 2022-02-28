/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:29:25 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/16 13:16:27 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		ft_putchar(str[cont]);
		cont++;
	}
}
/*
int main(void)
{
    char    str[5] = "hola";
    ft_putstr(str);
}
*/
