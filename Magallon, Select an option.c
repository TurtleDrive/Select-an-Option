#include <stdio.h>
#include <stdlib.h>

int main(){
	int iChoice;
	
	do {
		printf("\nPlease Select an option:\n");
		printf("1 - Edit User Profile\n");
		printf("2 - Password Change\n");	
		printf("3 - View History\n");
		printf("4 - Exit\n");	
		scanf("%i", &iChoice);
		
		switch (iChoice){
			case 1:
				printf("You have selected Edit User Profile\n");
				break;
			case 2:
				printf("You have selected Password Change\n");	
				break;
			case 3:
				printf("You have selected View History \n");
				break;
		}
	}	
	while (iChoice != 4);
	
	return 0;
}
