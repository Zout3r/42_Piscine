/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:14:08 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/14 13:33:39 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_num(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_num(n1 / 10);
			ft_print_num(n1 % 10);
			write (1, " ", 1);
			ft_print_num(n2 / 10);
			ft_print_num(n2 % 10);
			if ((n1 != 98) || (n2 != 99))
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
