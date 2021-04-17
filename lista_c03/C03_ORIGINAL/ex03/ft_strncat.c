/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:57:31 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/17 00:00:17 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int cont;
	unsigned int cont2;

	cont = 0;
	cont2 = 0; 
	while (dest[cont] != 0)
	{
		cont++;
	}
	while (src[cont2] != '\0' && cont2 < nb)
	{
		dest[cont + cont2] = src[cont2];
		cont2++;
	}
	dest[cont + cont2] = '\0';
	return (dest);
}
