/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:17:10 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/11 15:36:41 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;

	cont = 0;
	while (cont < n && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		++cont;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		++cont;
	}
	return (dest);
}
