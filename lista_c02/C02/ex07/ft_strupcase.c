/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:40:25 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/09 00:40:26 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int cont;


	cont = 0;
	while(str[cont] != '\0')
	{	
		if (str[cont] >= 97 && str[cont] <= 122)
		{
			str[cont] = str[cont] - 32;
			++cont;
		}
		else
		{	
			str[cont] = str[cont];
			++cont;
		}
	}
	printf("%s", str);
	return(str);
}