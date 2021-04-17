/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:11:13 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/09 14:33:13 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c, int d);
void	ft_print_space(int e);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_print(a, b, c, ',');
				if ((a != '7') || (b != '8') || (c != '9'))
				{
					ft_print_space(' ');
				}
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}

void	ft_print(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if ((a != '7') || (b != '8') || (c != '9'))
	{
		write(1, &d, 1);
	}
}

void	ft_print_space(int e)
{
	write(1, &e, 1);
}

