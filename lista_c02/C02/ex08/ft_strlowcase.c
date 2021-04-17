/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:52:49 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/09 02:04:44 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int cont;

	cont = 0;
	while(str[cont] != '\0')
	{
		if(str[cont] >= 65 && str[cont] <= 90) 
		{
			str[cont] = str[cont] + 32;
			++cont;
		}
		else
		{
			++cont;
		}
	}
	return(str);
}