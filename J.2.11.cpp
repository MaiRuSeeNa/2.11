#include <stdio.h>

int main()
{   long int a,i,t=9;
	int sum =0;
	printf("number : ");
	scanf("%ld",&a);
	for (i=1;i<=a;i++)
	{ sum +=t;
	  printf("%ld ",t);
	  t=t*10+9;
	}
	printf("\nsum = %d \n",sum);
} 