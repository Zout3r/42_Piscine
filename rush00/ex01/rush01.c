/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:18:18 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/13 13:26:43 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_printast_space(int r, int c, int x, int y)
{
	if ((r == 1 && c > 1 && c < x) || ((r > 1 && c == 1) || c == x))
	{
		ft_putchar('*');
	}
	else
	{	
		if (r == y && c > 1 && c < x)
		{
			ft_putchar('*');
		}	
		else
		{	
			ft_putchar(' ');
		}
	}
}

void	ft_function(int r, int c, int x, int y)
{
	if ((r == 1 && c == 1) || (r == y && (c == x)))
	{
		ft_putchar('/');
	}
	else
	{
		if ((r == 1 && c == x) || (r == y && c == 1))
		{
			ft_putchar('\\');
		}
		else
		{	
			ft_printast_space(r, c, x, y);
		}
	}	
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	c = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			ft_function(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
		c = 1;
	}
}
