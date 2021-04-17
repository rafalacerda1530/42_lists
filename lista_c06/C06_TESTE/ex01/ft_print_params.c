/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:21:44 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 18:07:45 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	(void) argc;

	argv++;
	while(*argv != '\0')
	{
		str = *argv;
		while(*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);	
		++argv;
	}
}
