#include <stdio.h>

	int main() {
	
	    int attendance;
	    float assignmentScore, examScore, finalGrade;
	
	    printf("Enter attendance percentage (0-100): ");
	    scanf("%d", &attendance);
	
	    printf("Enter assignment score (0-100): ");
	    scanf("%f", &assignmentScore);
	
	    printf("Enter exam score (0-100): ");
	    scanf("%f", &examScore);
	
	
	    if (attendance >= 75) {
	       
		    if (assignmentScore >= 50) {
	       
		        if (examScore >= 50) {
	       
		            finalGrade = (assignmentScore + examScore) / 2;
	       
		            printf("Final Grade: %.2f\n", finalGrade);
	       
		            if (finalGrade >= 60) {
	       
		                printf("You passed!\n");
	       
		            } else {
	       
		                printf("You failed.\n");
	       
		            }
	       
		        } else {
	       
		            printf("You failed due to exam score.\n");
	       
		        }
	       
		    } else {
	       
		        printf("You failed due to assignment score.\n");
	       
		    }
	   
	    } else {
	   
	        printf("You failed due to attendance.\n");
	   
	    }
	
	
	    return 0;
	}
