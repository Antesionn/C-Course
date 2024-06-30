#include <stdio.h>
#include <stdlib.h>

/* Vucut kitle indeksi, vucut kutlesinin, uzunlugunun metre cinsinden karesine bolunmesiyle hesaplanir. */

int main() {
	
	float kilo,boy,indeks,yas,ideal;
	
	printf("*********Vucut Kitle Indeksi Hesaplama*********\n\n\n");
	
	printf("Kilonuz(kg): ");
	scanf("%f",&kilo);
	printf("Boyunuz(m): ");
	scanf("%f",&boy);
	
	printf("\n");
	
	indeks=kilo/(boy*boy);
	
    printf("Vucut Kitle Indeksiniz: %f\n\n\n",indeks);
	
	printf("*********Finn*********");
	
	
	
	return 0;
}
