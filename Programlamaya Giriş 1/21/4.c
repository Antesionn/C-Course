#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,sayac=0,i;
	
	printf("Iki sayi giriniz: ");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=b;i++)
	{
		sayac=sayac+a;
	}
	printf("Sonuc: %d",sayac);
	
	return 0;
}
