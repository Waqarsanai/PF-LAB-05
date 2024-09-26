#include <stdio.h>

	int main(void) {
		
		     int temp;
		     
		     printf("Write temperature(in celcius): \n");
		     scanf("%d", &temp);
			 
			 if (temp >= 30) {
			 
			 	if (temp >= 40) {
			 		
			 	  printf("It is very Hot outside!\n");			 		
				 
				 } else {
				 	
				 	printf("It is HOT outside\n");
				 	
				 } 
				 
			 } else if (temp >= 20) {
			 	
			 	printf("It is warm outside\n");
			 	
			 	
			} else if (temp >= 10) {
			 	
			 	printf("It is cool outside\n");
			 	
			 }

   			 else {
   			 	
   			 	 printf("It is cold outside\n");
   			 	
				}
			 	
			 	     
		
		return 0;
	}