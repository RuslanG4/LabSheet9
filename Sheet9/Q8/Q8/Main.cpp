//Ruslan Gavrilov
//04-12-21
//Description: asks the user for a number of numbers- then takes the numbers inputted by the user and categorises them into highest, lowest, sum and average
//time: 20 minutes
//bugs: No input on user validation

#include<iostream>
void processNumbers(int t_number);
int main() {
	int number = 0;
	std::cout << "Please enter number of numbers" << std::endl;
	std::cin >> number;
	if (number <= 0) {
		std::cout << "ERROR - enter a positive value" << std::endl;
	}
	else
		processNumbers(number);
	return 1;
}

void processNumbers(int t_number)
{
	int count = 1;
	int high = 0;
	int low = 0;
	int sum = 0;
	double average = 0;
	int number = 0;

	while (count <= t_number) {
		std::cout << "Please enter a number (1-10)" << std::endl;
		std::cin >> number;
		if (number <= 0 || number > 10) {
			std::cout << "ERROR - Please enter a number (1-10)" << std::endl;
		}
		else
			count++;
		if (high < number) {
			high = number;
		}
		else
			low = number;
		if (low < number) {
			low = number;
		}
		sum += number;
		average = sum / t_number;
	}

	std::cout << "Highest : " << high << std::endl;
	std::cout << "Lowest : " << low << std::endl;
	std::cout << "Sum : " << sum << std::endl;
	std::cout << "Average : " << average << std::endl;
}