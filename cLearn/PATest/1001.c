#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int n, counter = 0;

	
	printf("please input the number\n");
	scanf("%d", &n);

	if (n > 1000)
	{
		printf("number shouldn't more than 1000");
		exit(1);
	}

	while (n != 1)
	{
		if (n%2 == 0)
		{
			n = n/2;
			counter += 1;
		}
		else
		{
			n = (3*n+1)/2;
			counter += 1;
		}
	}
	printf("need %d step(s)\n", counter);
	
	//printf("need %d step(s)", n);
	
}


