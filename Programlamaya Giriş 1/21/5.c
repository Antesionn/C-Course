#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,sayac=0,i,j;
		
	printf("Tabani giriniz: ");
	scanf("%d",&a);
	
	printf("Kuvveti giriniz: ");
	scanf("%d",&b);
	
	for(i=1;i<=a;i++)		//2^3		2*2*2	2+2
	{
		for(j=1;j<=b;j++)
		{
			sayac=sayac+j;
		}
	}
	printf("Sonuc: %d",sayac);
	
	return 0;
}
