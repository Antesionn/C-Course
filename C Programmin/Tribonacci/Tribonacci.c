#include <stdio.h>
#include <stdlib.h>

/* This Headache Almost Killing Me.. */

int main() {
	
	int i,s,d;
	int a=1;
	int b=1;
	int c=1;
	
	printf("********Tribonacci Yapmak??********\n\n\n");
	
	printf("Dizinin Gormek Istediginiz Terim Numarasini Giriniz: ");
	scanf("%d",&s);
	
	printf("\n");
	
	printf("%d\n%d\n%d\n",a,b,c);
	
	for(i=1;i<=(s-3);i++)
	{
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		printf("%d\n",d);
	}
	printf("\n********Finn********");
	
	
	return 0;
}
