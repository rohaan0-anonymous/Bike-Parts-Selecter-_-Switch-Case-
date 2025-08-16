#include <stdio.h>
int main(){
	
	int choice;
	
	printf("Enter your Parts: \n");
	printf("1: Air Filter \n");
	printf("2: Petrol Filter: \n");
	printf("3: Brake Shoe \n");
	printf("4: Spark plug \n");
	
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			printf("Air Filter \n");
			break;
		
		case 2:
			printf("Petrol Filter \n");
			break;
			
		case 3:
			printf("Brake Shoe \n");
			break;
			
		case 4:
			printf("Spark Pluf \n");
			break;
		
		default:printf("Invalid Choice");
	
	}
	
	return 0;
}


