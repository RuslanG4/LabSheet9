//Ruslan Gavrilov
//04/12/2021
//Description : takes a small number and a large number and adds all number inbetween to get sum
//Time : 10 min 
//known bugs : no validation on user input
#include<iostream>

int addNumbers(int t_numone, int t_numtwo);
int main()
{
	int numOne = 0;
	int numTwo = 0;

	std::cout << "Please enter the start number : " << std::endl;
	std::cin >> numOne;
	std::cout << "Please enter the end number" << std::endl;
	std::cin >> numTwo;

	std::cout << "Your sum is " << addNumbers(numOne, numTwo) << std::endl;

	return 1;

}

int addNumbers(int t_numone, int t_numtwo)
{
	int answer = 0;

	while (t_numone <= t_numtwo) {
		answer += t_numone;
		t_numone++;
	}
	return answer;
}
