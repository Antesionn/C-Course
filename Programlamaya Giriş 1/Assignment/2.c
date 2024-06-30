#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fibonacci dizisini recursive fonksiyon kullanarak yapmak.*/

int a=1,b=1,i=1,c;

void fibonacci(int);

int main()
{
	int veri;
	
	printf("Fibonacci dizisinin kac terimini gormek istediginizi yaziniz: ");
	scanf("%d",&veri);
	
	printf("%d\n%d\n",a,b);
	fibonacci(veri);
}

void fibonacci(terim)
{	
	if(i<=terim-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		fibonacci(terim-1);
	}
}
