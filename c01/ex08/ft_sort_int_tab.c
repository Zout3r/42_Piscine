/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:45:39 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/17 10:34:30 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	aux;

	while (size >= 0)
	{
		cont = 0;
		while (cont < size - 1)
		{
			if (tab[cont] > tab [cont + 1])
			{
				aux = tab[cont];
				tab[cont] = tab[cont + 1];
				tab[cont + 1] = aux;
			}
			cont++;
		}
		size--;
	}
}
