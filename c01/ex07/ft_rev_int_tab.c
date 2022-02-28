/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:00:02 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/17 10:34:46 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	con;

	con = 0;
	while (con < (size / 2))
	{
		aux = tab[con];
		tab[con] = tab[size - 1 - con];
		tab[size - 1 - con] = aux;
		con++;
	}
}
/*#include	<unistd.h>
int main (void)
{
	int tab[] = {13, 5, 7, 9};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(*tab, size);
	write(1, *tab, sizeof(size));
	return (0);
}*/