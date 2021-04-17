#include <stdio.h>

int fct(int);  //chamada da outra função

int main(void) //corpo do main
{	
	int i;

	i = fct(42);
	printf("%d\n", i);
	return(0); //retorno do int
}