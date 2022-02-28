/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:30:38 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/14 13:01:47 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <unistd.h>

void	ft_print_num(int n1, int n2, int n3)
{
	if (n1 == '7' && n2 == '8' && n3 == '9')
	{
		write(1, "789", 3);
	}
	else
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, &n3, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			n3 = '0';
			while (n3 <= '9')
			{
				if (n1 < n2 && n2 < n3)
				{
					ft_print_num(n1, n2, n3);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
