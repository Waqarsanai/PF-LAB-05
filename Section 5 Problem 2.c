#include <stdio.h>

	int main() {
	    int number, sum, digit;
	
	    printf("Enter a number: ");
	    scanf("%d", &number);
	
	    sum = number;
	
	    if (sum >= 10) {
	        sum = 0;
	        digit = number % 10;
	        sum += digit;
	        number /= 10;
	
	        if (number > 0) {
	            digit = number % 10;
	            sum += digit;
	            number /= 10;
	
	            if (number > 0) {
	                digit = number % 10;
	                sum += digit;
	                number /= 10;
	
	                if (number > 0) {
	                    digit = number % 10;
	                    sum += digit;
	                    number /= 10;
	
	                    if (number > 0) {
	                        digit = number % 10;
	                        sum += digit;
	                    }
	                }
	            }
	        }
	
	       
		    if (sum >= 10) {
	            number = sum;
	            sum = 0;
	            digit = number % 10;
	            sum += digit;
	            number /= 10;
	
	            if (number > 0) {
	                digit = number % 10;
	                sum += digit;
	                number /= 10;
	
	                if (number > 0) {
	                    digit = number % 10;
	                    sum += digit;
	                    number /= 10;
	
	                    if (number > 0) {
	                        digit = number % 10;
	                        sum += digit;
	                    }
	                }
	            }
	        }
	    }
	
	    printf("The single digit sum is: %d\n", sum);
	    return 0;
	}
