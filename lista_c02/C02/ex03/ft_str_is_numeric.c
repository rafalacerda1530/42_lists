/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:19:04 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/08 21:50:10 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 48 || str[cont] > 57 || str[cont] == 0 )
		{	
			printf("não contem só numero\n");
			return (0);
		}
		++cont;
	}
	printf("só contém numero\n");
	return (1);
}
