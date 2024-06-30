#include <stdio.h>
#include <stdlib.h>

//int degiskeni uzerinde veri girisi yaparak cozulen ornek sayfasidir.
int main() {
	
	printf("*********SINEMA ODEVI*********\n\n\n");
	
	int kola,kolaadedi,su,suadedi,misir,misiradedi,bilet,biletadedi,fiyat;
	
	printf("Aldiginiz Kola Adedi: ");
	scanf("%d",&kolaadedi);
	printf("Aldiginiz Su Adedi: ");
	scanf("%d",&suadedi);
	printf("Aldiginiz Misir Adedi: ");
	scanf("%d",&misiradedi);
	printf("Aldiginiz Bilet Adedi: ");
	scanf("%d",&biletadedi);
	
	kola=2;
	su=1;
	bilet=8;
	misir=2;
	fiyat=(kola*kolaadedi)+(su*suadedi)+(misir*misiradedi)+(bilet*biletadedi);
	
	printf("Odeyeceginiz Tutar: %d TL...\n\n\n",fiyat);
	
	printf("*********Finn*********");

	

	
	
	
	
	
	
	return 0;
}
