#include <stdio.h>
#include <stdlib.h>

/* Madness... */

int main() {
	
	int a,b,i,c,s;
	
	printf("********Fibonacci Dizisi Yapmak?********\n\n\n");
	
	a=1;
	b=1;
	
	printf("Fibonacci Dizisinin Kac Terimini Gormek Istediginizi Yaziniz: ");
	scanf("%d",&s);
	
	printf("\n%d\n%d\n",a,b);
	
	for(i=1;i<=s-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	printf("\n\n\n********Finn********");
	return 0;
}
