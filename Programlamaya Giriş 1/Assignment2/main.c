#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int i,k;

	int a=4;
	
	for(k=1;k<=a;k++)
	{
		for(i=4;i>=k;i--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
