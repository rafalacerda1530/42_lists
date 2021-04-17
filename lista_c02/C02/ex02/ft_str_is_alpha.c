/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:03:43 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/08 17:47:23 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{	

		if ((str[cont] < 97 || str[cont] > 122) &&
		(str[cont] < 65 || str[cont] > 90))
		{
			return (0);
		}

		++cont;
	}
	return (1);
}