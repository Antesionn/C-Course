#include <stdio.h>
#include <stdlib.h>

// Mesaj 

int main() {
	
	printf("******Karar Yapilari******\n\n\n");
	
	float s1,s2,s3,p,ort;
	
	printf("1.Sinav: ");
	scanf("%f",&s1);
	
	printf("2.Sinav: ");
	scanf("%f",&s2);
	
	printf("3.Sinav: ");
	scanf("%f",&s3);
	
	printf("Proje: ");
	scanf("%f",&p);
	printf("\n-----------------\n\n");
	ort=(s1+s2+s3+p)/4;
	
	printf("Ortalama: %f",ort);
	printf("\n\n");
		
	if (50>=ort)
	{
		printf("Kaldi");
	}
	else
	{
		printf("Gecti");
	}
	printf("\n");
	return 0;
}
