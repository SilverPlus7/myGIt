#include<stdio.h>
#include<math.h>

void calcc(int a ,int b){

 int i;
 int  j[200];
 double  l; 
 int  q;


for (i = 1; i <= 200; i++){
      
	q = a/b;
//	printf("%d", q);
	j[i] = q;	
        a  = a%b;
	a  = a*10;
        
	}

for (i = 0; i<=199; i++){
	
	if (i == 1){
		printf(".");}

	l += (double)j[i+1]*pow(10.0,-i);	
	printf("%d", j[i+1]);
}
	  
	printf("\n\n");
 	printf("%f", l);
}


int main()
{
 int a,b;
 scanf("%d%d",&a,&b);

 calcc(a, b);
}
