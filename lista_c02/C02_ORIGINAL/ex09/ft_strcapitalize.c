/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:22:42 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/11 17:40:07 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 65 && str[cont] <= 90)
		{
			str[cont] = str[cont] + 32;
		}
		if ((str[cont] >= 97 && str[cont] <= 122) &&
		(str[cont - 1] < 65 || str[cont - 1] > 90) &&
		(str[cont - 1] < 97 || str[cont - 1] > 122) &&
		(str[cont - 1] < 48 || str[cont - 1] > 57))
		{
			str[cont] = str[cont] - 32;
		}
		cont++;
	}
	return (str);
}
