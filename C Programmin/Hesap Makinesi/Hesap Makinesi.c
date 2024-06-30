#include <stdio.h>
#include <stdlib.h>

/* Let's make some Hesap Makinesi */

int main() {
	
	int sayi1,sayi2,toplam,fark,bolum,carpim;
	printf("*********Hesap Makinesi*********\n\n\n");
	printf("Islem Yapmak Istediginiz Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	printf("Sayi: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	bolum=sayi1/sayi2;
	carpim=sayi1*sayi2;
	
	printf("Toplam: %d\n",toplam);
	printf("Fark: %d\n",fark);
	printf("Bolum: %d\n",bolum);
	printf("Carpim: %d\n",carpim);
	
	
	printf("*********Finn*********");
	
	
	
	
	return 0;
}
