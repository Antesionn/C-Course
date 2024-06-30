#include <stdio.h>
#include <stdlib.h>

/*Uslu sayinin sonucunu recursive fonksiyon kullanarak bulmak.*/

int uslu(int,int);

int main()
{
	int taban,us,sonuc;
	
	printf("Taban giriniz: ");
	scanf("%d",&taban);
	
	printf("Us giriniz: ");
	scanf("%d",&us);
	
	
	sonuc = uslu(taban,us);
	
	printf("Cevap: %d",sonuc);
	
	return 0;
}

int uslu(t,u)
{	
	if(u==0)
	{
		return 1;
	}
	
	return t*uslu(t,u-1);
	
}
