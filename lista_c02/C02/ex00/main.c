#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char dest[30];

	src = "012345678911111111111";
	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);


	return (0);
}
