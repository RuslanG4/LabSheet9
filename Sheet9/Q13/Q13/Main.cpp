//Ruslan Gavrilov
//13-12-21
//description:
//time estimate: 30 minutes, time taken:
//bugs :

#include<iostream>

int main() {
	int step = 1;
	int checkEven = 0;
	int sum = 0; 

	srand(time(nullptr)); // set the random number seed

	while (step <= 10) {
		int numberGuess = (rand() % 100) + 1; // Generates a random no
		checkEven = numberGuess % 2; // check for an even number 
		if (checkEven = 0) // if even 
		{
			std::cout << " " << numberGuess;
			sum = sum + numberGuess;
			step++;
		}// END IF
	}
	std::cout << std::endl;
	std::cout << "The sum of even numbers is " << sum << std::endl; 
	system("Pause"); 
	return 0;
}