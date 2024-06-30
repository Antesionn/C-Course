#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	
	printf("a sayisini giriniz: ");
	scanf("%d",&a);
	
	printf("b sayisini giriniz: ");
	scanf("%d",&b);
	
	printf("c sayisini giriniz: ");
	scanf("%d",&c);
	
	if((c<a) && (c>b) && (c%2==1))
	{
		printf("a ve b araliginda bir tek sayi");
	}
	else if((c<a) && (c>b) && (c%2==0))
	{
		printf("a ve b araliginda bir cift sayi");
	}
	else if(((c>a) || (c<b)) && (c%2==1))
	{
		printf("a ve b arasinda olmayan bir tek sayi");
	}
	else
	{
		printf("Hicbiri");
	}
	
	return 0;
}
