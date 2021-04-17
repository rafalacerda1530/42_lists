/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:14:24 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/05 00:12:50 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print(int x, int y, int x_max, int y_max);

void	rush(int x_max, int y_max)
{
	int x;
	int y;

	x = x_max;
	y = y_max;
	while (y > 0)
	{
		while (x > 0)
		{
			ft_print(x, y, x_max, y_max);
			x--;
		}
		ft_putchar('\n');
		x = x_max;
		y--;
	}
}

void	ft_print(int x, int y, int x_max, int y_max)
{
	if ((y_max != 1) && (x_max != 1))
	{
		if ((y == y_max && x == x_max) || (y == 1 && x == 1))
			ft_putchar('/');
		else if ((y == y_max && x == 1) || (y == 1 && x == x_max))
			ft_putchar('\\');
		else if (((y == y_max || y == 1) && (1 < x < x_max)) ||
		((1 < y < y_max) && (x == x_max || x == 1)))
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
	else
	{
		if (y == y_max && x == x_max)
			ft_putchar('/');
		else if (y == 1 && x == 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
}
