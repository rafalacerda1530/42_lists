//void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod);

#include <stdio.h>

int main()
{
	int *div;
	int *mod;
	int pamonha;
	int biscoito;

	div = &pamonha;
	mod = &biscoito;
	ft_div_mod(29, 10, div, mod);
}