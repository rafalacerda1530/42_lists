/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:21:43 by aprotoce          #+#    #+#             */
/*   Updated: 2021/04/13 23:28:03 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_atoi(char *str)
{
	int index;
	int sign;
	int res;

	index = 0;
	sign = 1;
	res = 0;
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = (str[index] - '0') + (res * 10);
		index++;
	}
	return (res * sign);
}

int main()
{
	char a[] = "---+--+1234ab567";
	char b[] = "345";
	
	printf("%d\n", atoi(a));
	printf("%d\n",ft_atoi(a));
	
}
