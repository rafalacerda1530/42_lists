/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:08:05 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/14 18:43:17 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return(0);
	}
	else if (nb == 0 || nb == 1)
	{
		return(1);
	}
	return(nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int nb;
	int res;

	nb = 5;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
