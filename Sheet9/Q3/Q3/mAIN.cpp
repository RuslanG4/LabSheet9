//Ruslan Gavrilov
//C00273521
//29-11-21
//Estimated time : 20 minutes, Approx time : 20 minutes
//description: Asks for number of numbers - then asks for that many number and works out sum of all numbers and sum of all odd numbers
//Bugs: No validation on user input

#include<iostream>

void calculateNumbers(int t_number);
int main() {
	int number = 0;
	std::cout << "Please enter the number of numbers you want" << std::endl;
	std::cin >> number;

	calculateNumbers(number);
	return 0;
}
/// <summary>
/// Takes number of numbers and determines the total of them added and sum of all odd numbers added
/// </summary>
/// <param name="t_number">number of numbers</param>
void calculateNumbers(int t_number)
{
	int count = 1;
	int sum = 0;
	int sumOdd = 0;
	while (count <= t_number) {
		int number = 0;
		std::cout << "Please input a number :" << std::endl;
		std::cin >> number;
		count++;
		if ((number % 2) != 0) {
			sum += number;
			sumOdd +=number;
		}
		else {
			sum += number;
		}
		
	}
	std::cout << "Sum of all numbers = " << sum << std::endl;
	std::cout << "Sum of all odd numbers = " << sumOdd << std::endl;
}
