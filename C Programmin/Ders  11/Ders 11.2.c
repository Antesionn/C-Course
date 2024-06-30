#include <stdio.h>
#include <stdlib.h>

/* 11.2 iste... */

int main() {
	
	int faktoriyel=1;
	int i,s;
	
	printf("Faktoriyeli Alinacak Sayiyi Giriniz: ");
	scanf("%d",&s);
	
	for(i=1;i<=s;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("%d! = %d",s,faktoriyel);
	
	
	return 0;
}
