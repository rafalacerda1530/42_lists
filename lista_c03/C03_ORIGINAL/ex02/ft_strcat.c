/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:35:51 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/16 23:59:09 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int cont;
	int cont2;

	cont = 0;
	cont2 = 0;
	while (dest[cont] != '\0')
	{
		cont++;
	}
	while (src[cont2] != '\0')
	{          6       1
		dest[cont + cont2] = src[cont2];
		cont2++;
	}
	dest[cont + cont2] = '\0';
	return (dest);
}
