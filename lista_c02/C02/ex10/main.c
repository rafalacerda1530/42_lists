#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char *src;
	char dest[12];
	unsigned int n = 4;

	src  = "123456789";
	printf("src : %s\n", src);
	ft_strlcpy(dest,src,n);
	printf("dest : %s\n", dest);

}
