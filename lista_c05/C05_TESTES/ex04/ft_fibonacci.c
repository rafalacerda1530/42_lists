/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:36:37 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/14 22:40:45 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return(-1);
	}
	if (index == 0)
	{
		return(0);
	}
	if (index == 1)
	{
		return(1);
	}
	return(ft_fibonacci(index - 1) + ft_fibonacci(index  - 2));
}

int	main(void)
{
	int res;
	int index;

	index = 0;
	while (index < 12)
	{
		res = ft_fibonacci(index);
		printf ("%d, ", res);
		index++;
	}
	res = ft_fibonacci(index);
	printf ("%d\n", res);
	return (0);
}