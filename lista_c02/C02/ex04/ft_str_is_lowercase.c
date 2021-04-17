/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:54:02 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/08 22:00:07 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 97 || str[cont] > 122)
		{
			return(0);
		}
		++cont;
	}
	return(1);
}
