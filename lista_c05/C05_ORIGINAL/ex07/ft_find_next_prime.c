/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:16:26 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 21:55:51 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime2(int nb)
{
	int a;
	int test;

	test = 0;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	else
	{
		a = nb;
		while (a > 1)
		{
			if (nb % a == 0)
				test++;
			if (test > 1)
				return (0);
			a--;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int n;

	n = nb;
	if (nb >= 2147483630)
		return (2147483647);
	if (nb < 3)
		return (2);
	while (ft_is_prime2(n) != 1)
		n++;
	return (n);
}
