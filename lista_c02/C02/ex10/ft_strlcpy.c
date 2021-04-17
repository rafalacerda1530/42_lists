/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:48:00 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/10 01:38:06 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int cont;
	unsigned int source_size;

	source_size = 0;
	while (src[source_size] != '\0')
	{
		++source_size;
	}
	if(size > 0)
	{
		cont = 0;
		while (cont < size)
		{
		dest[cont] = src[cont];
		++cont;
		}
		dest[cont] = '\0';
	}
	return(source_size);
}
