//Ruslan Gavrilov
//C00273521
//29-11-21
//Estimated time : 20 minutes, Approx time : 20 minutes
//description: takes number of numbers from user and displays sum, low, high and average in the main
//Bugs: No validation on user input

#include<iostream>

double calculationNums(double t_number);
int main() {
	int number = 0;
	int average = 0;
	std::cout << "Please enter the number of numbers you want" << std::endl;
	std::cin >> number;

	std::cout << "Average of numbers is " << calculationNums(number) << std::endl;

	return 0;
}

double calculationNums(double t_number)
{
	int count = 1;
	int large = 0;
	int small = 0;
	double sum = 0;
	double average = 0;

	while (count <= t_number) {
		int number = 0;
		std::cout << "Please input a number :" << std::endl;
		std::cin >> number;
		
		if (large < number) {
			large = number;
		}
		else
			small = number;
		if (small < number) {
			small = number;
		}
		sum += number;
		average = sum / t_number;
		count++;
	
	}
	std::cout << "Largest number is " << large << std::endl;
	std::cout << "Smallest number is " << small << std::endl;
	std::cout << "Sum of numbers is " << sum << std::endl;
	return average;
}
