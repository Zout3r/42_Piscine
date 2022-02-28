/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:17:41 by jfrontel          #+#    #+#             */
/*   Updated: 2022/02/27 14:14:03 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_my_atoi (char *str)
{
	int res;
	int count_atoi;

	count_atoi = 0;
	res = 0;

	while (str[count_atoi] != '\0' && str[count_atoi] != ':')
	{
		if (str[count_atoi] == ' ')
			count_atoi++;
		else
		res = (res*10 + str[count_atoi] - '0');
		++count_atoi;
	}
	return res;

}
