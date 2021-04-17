/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:16:36 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/13 21:13:34 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int size;

	size = 0;
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0') && (size < n - 1))
		{
			s1++;
			s2++;
			size++;
		}
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
