//Ruslan Gavrilov
//8-12-21
//Description : takes in number of number then asks user to input more numbers and sorts them into highest and lowest aswell as counting how many times they appear
//Time estimated ; 20 minutes, time taken : 30 minutes
//bugs : 

#include<iostream>

void countOccurences();
int main() {
	countOccurences();
	return 1;
}

void countOccurences()
{
	int numEntered = 0;
	int count = 1;
	int countNum = 0;
	int high = 0;
	int low = 0;
	int countHigh = 0;
	int countLow = 0;

	std::cout << "Please enter the number of numbers you want" << std::endl;
	std::cin >> numEntered;

	while (count <= numEntered) {
		std::cout << "Please enter a number 1-10" << std::endl;
		std::cin >> countNum;
		if (countNum > 10 || countNum <= 0) {
			std::cout << "Error Please enter another number" << std::endl;
		}
		else
			if (high < countNum) {
				high = countNum;
				countHigh++;
			}
			else if (high == countNum) {
				countHigh++;
			}
		if (count == 1) {
			low = countNum;
		}
		else if (countNum < low) {
			low = countNum;
		}
		else if (low == countNum) {
			countLow++;
		}
		count++;
	}
	std::cout << "The highest number is " << high << " it appears " << countHigh << " times." << std::endl;
	std::cout << "The lowest number is " << low << " it appears " << countLow << " times." << std::endl;
	
}
