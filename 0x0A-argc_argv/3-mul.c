#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	(void)argc;
	if (argv[1] && argv[2])
	printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
	printf("Error\n");
	return 0;
}
