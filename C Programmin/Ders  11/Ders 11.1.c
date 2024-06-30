#include <stdio.h>
#include <stdlib.h>

/* Sayaci carpimda kullanmak */

int main() {
	
	int sayac=1;
	int i;
	
	for(i=1;i<=12;i++)
	{
		sayac=sayac*i;
	}
	printf("%d",sayac);
	
	return 0;
}
