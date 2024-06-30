#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,sayac=1,i;
	
	printf("Faktoriyelini almak istediginiz sayiyi giriniz: ");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		sayac=sayac*i;
	}
	printf("Sonuc: %d",sayac);
	
	
	
	return 0;
}
