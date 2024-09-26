#include <stdio.h>

	int main() {
		    
			int age;
		       float income;
		    int creditScore;
		        int isEligible;
		
		    printf("Enter your age: ");
		    scanf("%d", &age);
		    
		    printf("Enter your income: ");
		    scanf("%f", &income);
		    
		    printf("Enter your credit score: ");
		    scanf("%d", &creditScore);
		
		    isEligible = (age >= 18 && income >= 30000 && creditScore >= 600);
		
		    if (isEligible) {
		    
			    printf("You are eligible for a loan.\n");
		    
			} else {
		    
			    printf("You are not eligible for a loan.\n");
		    
			}
		
	    return 0;
	}
