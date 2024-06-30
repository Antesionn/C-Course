#include <stdio.h>
#include <stdlib.h>

/* 1 ile 100 arasinda 5'e tam bolunen sayilar... */

int main() {

	int i,ustsinir,bolunen;
	
	printf("********Start********\n\n");
	
	printf("Ust Siniri Giriniz: ");
	scanf("%d",&ustsinir);
	
	printf("Bolunmesini Istediginiz Sayiyi Giriniz: ");
	scanf("%d",&bolunen);
	printf("\n");
	for(i=1;i<=ustsinir;i++)
	{
		if(i%bolunen==0)
		{
			printf("%d\n",i);
		}
	}
	
	printf("\n\n********Finn********");
	return 0;
}
