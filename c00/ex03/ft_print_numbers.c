/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:21:44 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/12 16:24:41 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include	<unistd.h>

	void	ft_print_numbers(void){
		int n;
		n = 0;

		while(n <= 9){
			write(1, &n, 1);
			n++;
		}
	}
	int	main(){
		ft_print_numbers();
	}
