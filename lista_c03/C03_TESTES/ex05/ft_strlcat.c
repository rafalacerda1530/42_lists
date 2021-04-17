/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:55:45 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/13 12:53:38 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int l_cont(char *src);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int cont;
	unsigned int index_s;
	unsigned int len_src;

	len_src = l_cont(src);
	cont = 0;
	while (dest[cont] != '\0')
	{
		++cont;
	}
	index_s = 0;
	if (cont < size)
	{
		while (src[index_s] != '\0')
		{
			dest[cont + index_s] = src[index_s];
			index_s++;
		}
	}
	dest[cont + index_s] = '\0';
	printf("%s", dest);
	
	return(len_src + cont);
}

unsigned int l_cont(char *src)
{
	int cont;
	cont = 0;
	while (src[cont] != '\0')
	{
		cont++;
	}
	return(cont);
}

int main()
{
	char a[] = "deu1234";
	char b[] = "certo";

	ft_strlcat(a, b, 30);
	return(0);
}
