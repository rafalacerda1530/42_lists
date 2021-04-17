#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{	
	int *a;
	int *b;
	int pamonha;
	int biscoito;

	pamonha = 29;
	biscoito = 10;
	a = &pamonha;
	b = &biscoito;
	ft_ultimate_div_mod(a, b);

	printf("eu sou result: %d, eu sou resto: %d", *a, *b);
}
