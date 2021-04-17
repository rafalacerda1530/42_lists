/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:11:30 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/15 17:20:22 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *value;
	(void) argc;
	
	value = argv[0];
	while (*value != '\0')
	{
		write(1, value, 1);
		value++;
	}
	write(1, "\n", 2);
}
