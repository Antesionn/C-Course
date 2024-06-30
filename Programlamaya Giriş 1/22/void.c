#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void yazdir(int,int);  //Bu bir prototype int yukarida isteniyor ise kullanilir.

int main(int argc, char *argv[]) 
{	
	yazdir(5,7);   //yazdir() fonksiyonunu cagirdik.
}

void yazdir(int a,int b)  //yazdir() fonksiyonunu olusturduk.
{
	int i,j;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}

