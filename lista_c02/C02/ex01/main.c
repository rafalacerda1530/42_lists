#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{	
	char *src;
	char dest[6];
	unsigned int n = 3;

	src  = "12345";
	printf("src : %s\n", src);
	ft_strncpy(dest,src,n);
	printf("dest : %s\n", dest);

}
