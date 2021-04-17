/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:10:41 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 21:05:32 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{	
	char *str;
	int cont;
	
	cont = argc - 1;
	while(argc >= 1 && cont >= 1)
	{	
		str = argv[cont];
	
		cont2 = 0;
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		cont--;
	}
}
