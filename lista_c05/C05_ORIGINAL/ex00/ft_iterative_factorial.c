/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:13:29 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 13:14:03 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0)
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	while (nb > 1)
	{
		result = result * nb;
		--nb;
	}
	return (result);
}
