#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,k,a=7;
	
	for(i=1;i<=a;i++)
	{
		for(k=1;k<=i;k++)
		{
			if(k%2==1)
			{
				printf("%d ",k);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
