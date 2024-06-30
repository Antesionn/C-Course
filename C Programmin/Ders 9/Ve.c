#include <stdio.h>
#include <stdlib.h>

/* Ve yi ogreniyoruz... */

int main() {
	
	int sayi;
	
	printf("*********Ve Kullanimi*********\n\n\n");
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0)
	{
		printf("Sayiniz 3 ve 5 ile tam bolunuyor.");
	}
	else
	{
		printf("Sayiniz 3 ve 5 ile tam bolunmuyor.");
	}
	printf("\n\n\n");
	printf("*********Finn*********");
	
	return 0;
}
