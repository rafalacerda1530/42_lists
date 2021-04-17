/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:12:53 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/09 00:16:55 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] <= 31)
		{
			return(0);
		}
		++cont;
	}
	return(1);
}
