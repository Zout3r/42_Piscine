/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:19:27 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/21 17:46:26 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_low(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			str[cont] = str[cont] + 32;
		}
		cont++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	cont;
	int	check;

	cont = 0;
	check = 0;
	ft_low(str);
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			if (check == 0)
				str[cont] = str[cont] - 32;
			check = -1;
		}
		else if (str[cont] >= '0' && str[cont] <= '9')
		{
			check = -1;
		}
		else
		{
			check = 0;
		}
		cont++;
	}
	return (str);
}
/*#include    <stdio.h>
int main(void)
{
    char string[] = "aywj, dfgf 0 a2a(d_";
    printf("%s", ft_strcapitalize(string));
    return (0);
}*/