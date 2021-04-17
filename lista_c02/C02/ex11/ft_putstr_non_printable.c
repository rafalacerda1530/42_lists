/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:07:54 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/10 04:17:24 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(int n);
void ft_int_to_hexa(int n);

void ft_putstr_non_printable(char *str)

{
	int cont;

	cont = 0;
	while(str[cont] != '\0')
	{
		if (str[cont] < 31)
		{	
			write(1, "\\0", 3);
			ft_int_to_hexa(str[cont]);
			cont++;
		}
		write(1, &str[cont], 1);
		cont++;
		
	}
}

void ft_int_to_hexa(int n)
{
	int digit;
	int rest;

	digit = (n % 16);
	n = n / 16;
	if (n > 0)
	{
		ft_int_to_hexa(n);
	}
	if (digit > 9)
	{
		rest = digit - 10;
		digit = 'a';
		digit += rest;
		ft_putchar(digit);
	}
	else
		ft_putchar(digit + '0');
}

void ft_putchar(int n)
{
	write(1, &n, 1);
}
