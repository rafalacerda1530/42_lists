/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:08:51 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/12 15:13:34 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int teste;
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	teste = *s1 - *s2;
	printf("%d\n", teste);
	return (*s1 - *s2);
}

int main() 
{
	char a[] = "cab";
	char b[] = "a";
	int value;

	value = strcmp(a, b);
	ft_strcmp(a, b);
	printf("o valor original e:%d", value);
	
	return(0);
}
