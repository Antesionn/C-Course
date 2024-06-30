#include <stdio.h>
#include <stdlib.h>

//Fatih Özkurt'un scanf öðrenmesi

int main() {
	
	char Ad[10],Soyad[10],Yas[2],Meslek[25];
	
	printf("*********OGRETMEN BILGILERI*********\n\n\n");
	printf("Adiniz: ");
	scanf("%s",Ad);
	printf("Soyadiniz:");
	scanf("%s",Soyad);
	printf("Yasiniz: ");
	scanf("%s",Yas);
	printf("Mesleginiz: ");
	scanf("%s",Meslek);
	printf("\n");
	printf("Girdiginiz Adiniz: %s - Soyadiniz: %s\n",Ad,Soyad);
	printf("Girdiginiz Yasiniz: %s\n",Yas);
	printf("Guncel Mesleginiz: %s",Meslek);
	
	
	return 0;
}
