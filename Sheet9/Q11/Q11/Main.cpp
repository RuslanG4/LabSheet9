//Ruslan Gavrilov
//8-12-21
//Description: asks user for a number then displays every 3rd number going backwards
//time estimated 20 minutes, time taken : 10 minutes
//bugs: no validation on user input
#include<iostream>

void reverseDisplay(int t_number);
int main() {
	int number = 0;

	std::cout << "Please enter a number" << std::endl;
	std::cin >> number;

	reverseDisplay(number);
}

void reverseDisplay(int t_number)
{
	int count = t_number;
	double sum = 0;
	int timesCount = 1;
	double average = 0;
	while (count > 0) {
		if (count == t_number) {
			std::cout << count << std::endl;
		}
		std::cout << count - 3 << std::endl;
		sum = sum + count;
		timesCount++;
		count = count - 3;
	}
	average = sum / timesCount;
	std::cout << "Sum is " << sum << std::endl;
	std::cout << "Average is " << average << std::endl;
}
