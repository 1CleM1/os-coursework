#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	float dec = 4.5;
	double dec2 = 4.5;

	char name[] = "anonymous";

	if(argc >= 2)
	{
		printf("Hello(%f), %d %s, \n",dec, (int)dec, argv[1]);
		exit(0);
	}
	else
	{
		printf("Hello, %s,%p, \n", name, &name);
		exit(1);
	}
}

