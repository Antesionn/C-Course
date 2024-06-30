#include <stdio.h>
#include <stdlib.h>

/* Fatih Ozkurt'un Veya ogrendigi sayfadir. */

int main() {
	
	int sayi;
	
	printf("*********Veya Kullanimi*********\n\n\n");
	
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&sayi);
	printf("\n");
	
	if(sayi%3==0 || sayi%5==0)
	{
		printf("Sayiniz 3 veya 5'e tam bolunur.");
	}
	else
	{
		printf("Sayiniz 3 veya 5'e tam bolunmez");
	}
	printf("\n\n\n");
	printf("*********Finn*********");
	
	return 0;
}
