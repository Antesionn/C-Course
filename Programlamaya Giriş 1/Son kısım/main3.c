#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b,i,sayac=0;
	
	printf("Iki sayi giriniz: ");
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		sayac=i+sayac;
	}
	printf("%d",sayac);
	return 0;
}
