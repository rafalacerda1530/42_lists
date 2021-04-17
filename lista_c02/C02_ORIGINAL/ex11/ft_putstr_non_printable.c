/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:07:54 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/16 22:51:10 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

const char g_hex_map[16] = "0123456789abcdef";

void	ft_putchar(int n);
void	ft_int_to_hexa(unsigned char str);

void	ft_putstr_non_printable(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	  
		if (str[cont] < 31)
		{
			ft_int_to_hexa(str[cont]);
			cont++;
		}
		write(1, &str[cont], 1);
		cont++;
	}
}

void	ft_int_to_hexa(unsigned char str)
{
	unsigned char hex[3];

	hex[0] = '\\';
	hex[1] = g_hex_map[str / 16];
	hex[2] = g_hex_map[str % 16];
	write(1, hex, 3);
}

void	ft_putchar(int n)
{
	write(1, &n, 1);
}
