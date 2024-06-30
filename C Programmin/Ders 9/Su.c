#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int su;
	
	printf("*****Suyun Formu*****\n\n\n");
		
	printf("Suyun Sicakligini Giriniz: ");
	scanf("%d",&su);
	
	printf("\n");

	
	if(su<=0)
	{
		printf("Su buz formunda");
	}
	else if(su>0 && su<100)
	{
		printf("Su sivi formunda");
	}
	else if(su>100)
	{
		printf("Su buhar formunda");
	}
	
	printf("\n\n\n");
	
	printf("*****Finn*****");
	
	
	return 0;
}
