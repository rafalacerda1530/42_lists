
#include <stdio.h>
#include <stdlib.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[] = {89, 2, 4, 6, 7, 8};
	int size = 6;
	int cont = 0;

	printf("antes: ");
	while (cont < size)
	{
		printf("%d\n", tab[cont]);
		cont++;
	}

	ft_rev_int_tab(tab, size);

	cont = 0;
	printf("após:");
	while (cont < size)
	{
		printf("%d\n", tab[cont]);
		cont++;
	}

	return(0);

}