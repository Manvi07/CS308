/* This program computes the square root of a
positive number. */

/* New comment added. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: ./sqrt.o input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input >=0 )
	printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	else
	printf("Sqrt of %d is %fi\n",input,sqrt(-input));
	printf("End of program. Bye!.\n");
	return(0);

} // end main
