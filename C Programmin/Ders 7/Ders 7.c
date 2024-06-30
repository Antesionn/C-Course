#include <stdio.h>
#include <stdlib.h>

/* Aylik 2500 TL maas alan kisiye %12 zam yapilirsa... */

int main() {
	
	float maas,zam,yeni;
	
	printf("Maasinizi Giriniz: ");
	scanf("%f",&maas);
	printf("Zam Yuzdesi: ");
	scanf("%f",&zam);
	
	yeni=((maas*zam)/100)+maas;
	
	printf("Yeni maas: %f",yeni);
}
