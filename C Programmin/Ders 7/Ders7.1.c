#include <stdio.h>
#include <stdlib.h>

/* Cemberde alan ve cevre hesabi */

int main() {
	
	printf("*********Cemberde Alan-Cevre Hesabi*********\n\n\n");
	
	float alan,cevre,yaricap,pi;
	
	printf("Yaricapi Giriniz:");
	scanf("%f",&yaricap);
	
	pi=3.14;
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("Alan: %f - Cevre: %f",alan,cevre);
	
	
	
	
	
	
	return 0;
}
