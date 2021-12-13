//Ruslan Gavrilov
//13-12-2021
//description: Displays first 20 numbers of the fibonachi series
//time estimate = 30 minutes, time taken = 10 minutes
//bugs:

#include <iostream>

void fibonacciSeries();
int main() {
	fibonacciSeries();
	return 1;
}
/// <summary>
/// Calculates and displays first 20 digits of fibonacci
/// </summary>
void fibonacciSeries()
{
	int numberOne = 1;
	int numberTwo = 1;
	int count = 1;

	while (count <= 20) {
		std::cout << numberOne << ", " << numberTwo << std::endl;
		numberOne = numberOne + numberTwo;
		numberTwo = numberTwo + numberOne;
		count++;
	}

}
