/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:33:57 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/07 12:34:23 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	while (l++ < y)
	{
		c = 0;
		while (c++ < x)
		{
			if ((l == 1 || l == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if ((c == 1) || (c == x))
				ft_putchar('|');
			else if ((l == 1) || (l == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
