#include <stdio.h>
#include <stdlib.h>

/*Fibonacci dizisini recursive fonksiyon kullanmadan yapmak.*/

int main() {
	
	int i,j,veri,a,b,c;
	
	printf("Fibonacci dizisinin kac basamagini gormek istediginizi yazin: ");
	scanf("%d",&veri);
	
	a=1;
	b=1;
	
	printf("%d\n%d\n",a,b);
	
	for(i=1;i<=veri-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	return 0;
}
