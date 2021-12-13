//Ruslan Gavrilov
//8-12-21
//description: Asks user for number of numbers then decides where the number 9 is based on the numbers inputted
//Time estimated: 30 minutes  ,time taken: 20 minutes
//bugs:

#include<iostream>
void findOccurences();
int main() {
	findOccurences();
	return 1;
}

void findOccurences()
{
	int number = 0;
	int count = 1;
	int countNum = 0;
	int firstOccur = 0;
	int lastOccur = 0;

	std::cout << "Please enter the number of numbers you want" << std::endl;
	std::cin >> number;

	while (count <= number) {
		std::cout << "Please enter a number" << std::endl;
		std::cin >> countNum;
		if (countNum == 9 && firstOccur ==0) {
			firstOccur = count;
		}
		else if (countNum == 9) {
			lastOccur = count;
		}
		count++;
	}

	std::cout << "first occurance of 9 is position " << firstOccur << std::endl;
	std::cout << "Last occurance of 9 is position " << lastOccur << std::endl;
}