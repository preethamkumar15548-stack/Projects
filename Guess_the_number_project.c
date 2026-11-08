
#include <stdio.h>

int main()
{
	int n;
	int X=63;
	int guesses = 0;



	for(n=0; n<=100; n++) {
		printf("Enter your number");
		scanf("%d",&n);
		guesses++;


		if(X == n)
		{	printf("You have guessed it right\n");
			printf("number of guesses is %d\n", guesses);
			break;
		}

		else if(n <X) {
			printf("Enter a higher number:\n");
		}
		else {
			printf("Enter a lower number:\n");
		}
	}

	return 0;
}
