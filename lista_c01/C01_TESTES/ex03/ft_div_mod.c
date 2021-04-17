/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:54:31 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/09 01:27:07 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b == 0)
	{
		return;
	}
	int result;
	int rest;

	result = a / b;
	rest = a % b;
	*div = result;
	*mod = rest;
	printf("este é o div:%d, este é o modu:%d\n", result, rest);

}
