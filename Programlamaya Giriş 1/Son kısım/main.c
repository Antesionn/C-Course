#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(int argc, char *argv[]) {
	
	int f;
	
	printf("Sayi giriniz: ");
	scanf("%d",&f);
	
	switch(f)
	{
		case 1:
			printf("Anaskm");
			break;
		case 2:
			printf("Babaskm");
			break;
		case 3:
			printf("Dedeskm");
			break;
		default:
			printf("Pu baciskm");
			break;
	}
	
	return 0;
}
