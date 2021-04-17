/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:57:31 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/13 18:27:01 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int cont;
	int cont2;

	cont = 0;
	cont2 = 0;
	while(dest[cont] != 0)
	{
		cont++;
	}
	while (src[cont2] && cont2 < nb)
	{
		dest[cont + cont2] = src[cont2];
		cont2++;
	}
	dest[cont + cont2] = '\0';
	printf("%s\n", dest);
	return(dest);
}

int main()
{
	char a[] = "deu";
	char b[] = "certo\n";
	
	ft_strncat(a, b, 2);
	return(0);
}
