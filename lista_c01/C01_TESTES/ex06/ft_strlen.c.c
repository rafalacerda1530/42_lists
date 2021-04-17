/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 02:02:18 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/07 03:15:40 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

int ft_strlen(char *str)
{
	int contador;
	
	contador = 0;
	while(*str != '\0')
	{
		str++;
		contador++;
		
	}
	return(contador);
}
