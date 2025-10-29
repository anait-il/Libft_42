#include "libft.h"

int a = 32;

int main()
{
	int a =-2147483647;
	char *z = ft_itoa(a);
	if (!z)
	{
		printf("failed allocation");	
		return 0;
	}
	//printf("it's work -->%s", z);
	return (1);

}

//	#include <fcntl.h>
/*int main()
{
	int a = open("test.txt", O_WRONLY, 0644);
	ft_putstr_fd("hello bro ", a);
}*/
