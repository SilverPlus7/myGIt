#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* p = 0;
	int  i = 3;
	int* q = 0;
	int* r = 0;
	char e;
	int x;
	int w[3] = {1,2,6};

	p = malloc(sizeof(int));
	q = malloc(sizeof(char));
//	int u = 2;	
//	long double y = 121.33212;
	r = malloc(2 * sizeof(char));
//	w = malloc(3 * sizeof(int));


	printf("first position: %p\n", &p[0]);
	printf("second position: %p\n", &q[0]);
	printf("second position: %p\n", &r[0]);
	printf("sizeof r: %lu\n", sizeof(r));
	printf("sizeof e %lu\n", sizeof(e));
	printf("sizeof e %lu\n", sizeof(w));	

	free(p);
	free(q);
	free(r);

	return 0;
}
