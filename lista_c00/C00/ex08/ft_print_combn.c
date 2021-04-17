/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:57:01 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/08 14:03:41 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combutil(int data[], int start, int index, int n);

int		combinacao(int n)
{
	int combinacao;
	int base;
	int base2;
	int subcojunt;
	int subcojunt2;

	subcojunt = n;
	subcojunt2 = (10 - subcojunt);
	base = subcojunt - 1;
	base2 = subcojunt2 - 1;
	while (base > 0)
	{
		subcojunt = subcojunt * (base);
		base--;
	}
	while (base2 > 0)
	{
		subcojunt2 = subcojunt2 * (base2);
		base2--;
	}
	combinacao = 3628800 / (subcojunt * subcojunt2);
	return (combinacao);
}

void	ft_colon(int counter, int n)
{
	if ((counter) != (combinacao(n)))
		write(1, ", ", 2);
}

void	ft_recurse(int data[], int i, int n, int index)
{
	int	c;
	int	arr[10];

	c = 0;
	while (c <= 10)
	{
		arr[c] = c;
		c++;
	}
	while (i <= 9 && 9 - i + 1 >= n - index)
	{
		data[index] = arr[i];
		ft_combutil(data, i + 1, index + 1, n);
		i++;
	}
}

void	ft_combutil(int data[], int start, int index, int n)
{
	static int	counter;
	char		a;
	int			i;
	int			c;

	i = start;
	c = 0;
	if (index == n)
	{
		c = 0;
		while (c < n)
		{
			a = data[c] + 48;
			write(1, &a, sizeof(a));
			c++;
		}
		counter++;
		ft_colon(counter, n);
		return ;
	}
	ft_recurse(data, i, n, index);
}

void	ft_print_combn(int n)
{
	int	data[n];

	if (n > 0 && n < 10)
		ft_combutil(data, 0, 0, n);
	else
		return ;
}
