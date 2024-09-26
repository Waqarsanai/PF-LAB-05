#include <stdio.h>
	
	int main() {
	
		 int num;
		 
		 printf("Enter Integer: ");
		 scanf("%d", &num);
		 
			 if (num > 0) {
			 	
			 	if (num % 2 == 0) {
			 		
			 		printf("Number is positive and Even too!");
			 		
				 } else {
				 	
				 	 printf("Number is positive but odd.");
				 	
				 } 
			 	
			 } else if (num == 0) {
			 	
			 	 printf("Number is ZERO!");
			 	
			 } else if (num < 0) {
			 	
			 	 printf("Number is negative");
			 	
			 }
	     
		  return 0;
	    } 
	    