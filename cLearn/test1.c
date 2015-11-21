#include<stdio.h>

int main()
{
	int a[] = {1,2,3,4,5};
	int *const b = a;
	int *c = a;


	printf("%p\n", a);
	printf("%p\n", b);
	printf("b=%lu\n", sizeof(b));
	printf("a[]=%lu\n", sizeof(a));
	printf("%p\n",&a);
	printf("%p\n",&b);
	printf("%d",b[1]);
	printf("%d\n",c[1]);
	

	c = &a[2];
	printf("%d", c+1);

}

