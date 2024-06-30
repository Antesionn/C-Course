#include <stdio.h>
#include <stdlib.h>

/* Ideal Kiloyu hesaplamak icin yapilan odevdir */

int main() {
	
	printf("*********Ideal Kilo Hesabi*********\n\n\n");
	
	float boy,yas,ideal;
	
	printf("Boyunuz(cm): ");
	scanf("%f",&boy);
	printf("Yasiniz: ");
	scanf("%f",&yas);
	
	ideal=(boy-100+yas/10)*0.8;
	
	printf("Ideal Kilonuz: %f\n\n\n",ideal);
	printf("*********Finn*********");
	
	
	
	
	
	return 0;
}
