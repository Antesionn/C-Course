#include <stdio.h>
#include <stdlib.h>

/*3 Basamakli girilen sayinin tersini bulmak.*/

int main()
{
	
	int sayi,left,reverse=0;
	
	printf("Sayiyi girin: "); 					//253%10=3    0*10+3=3   253/10=25,3
	scanf("%d",&sayi);							//25,3%10=5   3*10+5=35  25,3/10=2,53
												//2,53%10=2   35*10+2=352 2,53/10=0,253
	while(sayi>0)								//0,253%10=0
	{
	left=sayi%10;
	reverse=reverse*10+left;
	sayi=sayi/10;
	}
	
	printf("Tersi: %d",reverse);
	
	return 0;
}
