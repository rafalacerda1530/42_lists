/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:16:50 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/08 22:24:14 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int cont;

	cont = 0;
	while(str[cont] != '\0')
	{
		if (str[cont] < 65 || str[cont] > 90 || str == 0)
		{
			return(0);
		}
		++cont;
	}
	return(1);
}