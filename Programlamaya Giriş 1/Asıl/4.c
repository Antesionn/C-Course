#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char k ;
  
	printf("Karakter girisi: ");
	scanf("%c",&k);
	switch(k)
  	{
  		case 'a':
  		printf("A");
  		break;
  	
  		case 'b':
  		printf("B");
  		break;
  	
  		case 'c':
    	printf("C");
    	break;
    
    	default:
    	printf("Hicbiri");
	}
	
		return 0;
}
