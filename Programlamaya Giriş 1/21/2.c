#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,sayac=0,i;
	
	printf("1.Sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("2.Sayiyi giriniz: ");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		
		if(i%2==0)
		{
			sayac=sayac+i;
		}
	}
	printf("%d",sayac);
	
	return 0;
}
