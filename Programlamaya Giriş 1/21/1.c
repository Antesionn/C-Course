#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s1,s2,i,toplam=0;
	
	printf("Baslangic degerini giriniz: ");
	scanf("%d",&s1);
	printf("Bitis degerini giriniz: ");
	scanf("%d",&s2);
	
	for(i=s1;i<=s2;i++)
	{
		if(i%2==0)
		{
			toplam=toplam+i;
		}
	}
	
	printf("Sonuc= %d",toplam);
	
	return 0;
}
