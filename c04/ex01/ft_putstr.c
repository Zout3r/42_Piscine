/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:26:03 by jperez-p          #+#    #+#             */
/*   Updated: 2022/03/02 18:16:10 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}
/*int main (void)
{
    char    str[5] = "hola";
    ft_putstr(str);
}*/
