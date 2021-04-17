/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:41:43 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 00:32:54 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int result;
	int div;
	int cont;
	
	if (nb == 0 || nb == 1 || nb == -1)
	{
		return(0);
	}
	div = nb / 2;
	cont = 2;
	{
		
		while (cont <= div)
		{
			if ((nb % cont) == 0)
				return(0);
			cont++;
		}
	}

	return(1);
}

int main()
{
	printf("%d", ft_is_prime(20));
}
