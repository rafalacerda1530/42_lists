/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:54:55 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 21:55:06 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int value;
	int cont;

	cont = 0;
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
		value = nb;
		while (value > 1)
		{
			if (nb % value == 0)
				cont++;
			if (cont > 1)
				return (0);
			value--;
		}
	}
	return (1);
}
