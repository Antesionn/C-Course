#include <stdio.h>
#include <stdlib.h>

/* Fatih Ozkurt'un Ortalama Hesaplayan Programi Yapmasi */

int main() {
	
	printf("*********Ortalama Hesabi*********\n\n\n");
	
	int s1,s2,s3,proje,ortalama;
	
	printf("1.sinav: ");
	scanf("%d",&s1);
	printf("2.sinav: ");
	scanf("%d",&s2);
	printf("3.sinav: ");
	scanf("%d",&s3);
	printf("Proje: ");
	scanf("%d",&proje);
	
	ortalama=(s1+s2+s3+proje)/4;
	
	printf("Ortalama: %d\n\n\n",ortalama);
	printf("*********Finn*********");
	
	
	
	
	
	
	return 0;
}
