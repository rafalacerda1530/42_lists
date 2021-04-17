/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:55:19 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 15:31:35 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_SQRT 46341

int	ft_sqrt(int nb)
{
	int value;
	int div;

	value = 0;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	div = nb / 2;
	while (value <= div && value <= MAX_SQRT)
	{
		if ((value * value) == nb)
		{
			return (value);
		}
		value++;
	}
	return (0);
}
