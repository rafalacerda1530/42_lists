
#include <stdio.h>
#include <stdlib.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[] = {89, 10, -15, -12, 5, 2};
	int size = 6;
	int cont = 0;

	printf("antes: \n");
	while (cont < size)
	{
		printf("%d\n", tab[cont]);
		cont++;
	}

	ft_rev_int_tab(tab, size);

	cont = 0;
	printf("após: \n");
	while (cont < size)
	{
		printf("%d\n", tab[cont]);
		cont++;
	}

	return(0);

}