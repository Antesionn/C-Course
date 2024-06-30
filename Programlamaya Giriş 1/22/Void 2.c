#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void add(int,int);

int main(int argc, char *argv[]) 
{
	int x,y;  				//Bir fonksiyondaki parametreler lokaldir.
	scanf("%d %d",&x,&y);
	add(x,y);
}

void add(int a,int b)
{
	int c;
	c= a+ b;
	printf("a+b = %d",c);
}
