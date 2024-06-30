#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			if(i%3==0 || i%5==0)
			{
				printf("* ");
			}
			else
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	
	return 0;
}
