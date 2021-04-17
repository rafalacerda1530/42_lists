/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:09:52 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/07 19:16:28 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *tab, int *size);

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;

	cont = 0;
	while (cont < --size)
	{
		ft_swap(&tab[cont], &tab[size]);
		cont++;
	}
}

void	ft_swap(int *tab, int *size)
{
	int temp;

	temp = *tab;
	*tab = *size;
	*size = temp;
}
