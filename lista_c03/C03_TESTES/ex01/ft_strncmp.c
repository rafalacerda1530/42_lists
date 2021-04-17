/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:16:36 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/13 20:49:26 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int size;
	int teste;

	size = 0;
	if (n == 0)
	{
		return(0);
	}
	while ((*s1 == *s2) && (*s1 !='\0') && (++size < n))
	{
		s1++;
		s2++;
		size++;
	}
	teste = *s1 - *s2;
	printf("este é o fake: %d\n", teste);
	return(*s1 - *s2);
}

int main()
{
	char a[] = "afbc";
	char b[] = "abc";
	int size;
	int str;
	
	size = 2;
	str = strncmp(a, b, size);

	ft_strncmp(a,b,size);

	printf("este é o original :%d\n", str);
	return(0);
}