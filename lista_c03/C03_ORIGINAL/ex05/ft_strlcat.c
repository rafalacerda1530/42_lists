/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:55:45 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/13 20:49:58 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	len_dest(char *dest, unsigned int size)
{
	unsigned int	cont;

	cont = 0;
	while (dest[cont] != '\0' && cont < size)
		cont++;
	return (cont);
}

unsigned int	len_src(char *src)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	v_dest;
	unsigned int	v_src;
	unsigned int	cont1;

	v_dest = len_dest(dest, size);
	v_src = len_src(src);
	cont1 = 0;
	if (v_dest < size)
	{
		while (v_dest + cont1 < size - 1 && src[cont1] != '\0')
		{
			dest[v_dest + cont1] = src[cont1];
			cont1++;
		}
		dest[v_dest + cont1] = '\0';
	}
	return (v_dest + v_src);
}
