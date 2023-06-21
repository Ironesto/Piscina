#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int c = 0;
	while(argc - 1 > 0)
	{
		while(argv[argc - 1][c])
		{
			argv[0] = argv[argc - 1];
			write(1,&argv[0][c],1);
			c++;
		}
		c = 0;
		write(1," ",1);
		argc--;
	}
	return (0);
}