/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:42:12 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/08 19:38:42 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a);

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(32);
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		++;x
	}
}

void	ft_putchar(int a)
{
	write(1, &a, 1);
}
