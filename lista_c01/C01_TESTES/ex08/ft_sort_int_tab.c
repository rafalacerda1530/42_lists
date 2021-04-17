/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:57:38 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/09 01:41:53 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_swap(int *tab, int *size);

void ft_rev_int_tab(int *tab, int size)
{
	int cont;

		 
 	cont = 0;  
	while(cont < size) 
	{	
		if (tab[cont] > tab[cont + 1] && (cont + 1) < size )
		{	
			ft_swap(&tab[cont], &tab[cont + 1]);
			cont = 0;
			--cont;
		}
		++cont;
	}
}

void ft_swap(int *tab, int *size)
{
	int temp;
	
	temp = *tab;
	*tab = *size;
	*size = temp;
}
