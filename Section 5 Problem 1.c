#include <stdio.h>

	int main() {
		
		int leap;
		
		printf("Enter a year: ");
		scanf("%d", &leap);
		
		if (leap % 400 == 0 || leap % 4 == 0) {
			
			 printf("It is a leap year!!");
			
		} else if (leap % 100 == 0) {
			
			printf("It is not a leap year.");
			
		} else {
			
			printf("It is not a leap year.");
			
		}
		
		return 0;
	}