/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:46:08 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/14 14:35:34 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int res;
	int sign;
	int cont;

	res = 0;
	sign = 1;
	cont = 0;
	while (str[cont] == ' ' || str[cont] <= 32)
	{
		cont++;
	}
	while (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
		{
			sign = sign * -1;
		}
		cont++;
	}
	while (str[cont] >= 48 && str[cont] <= 57)
	{
		res = str[cont] - '0' + (res * 10);
		cont++;
	}
	return (res * sign);
}
