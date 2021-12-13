//Ruslan Gavrilov
//04-12-21
//Description : User inputs as many numbers as they want unless they input 0 which then adds all previously inputted numbers
//Time: 10 minutes
//Known Bugs: None

#include<iostream>

void sumtotal();

int main() {
	sumtotal();
	return 1;
}

void sumtotal()
{
	int answer = 0;
	int entered = 1;
	

	while (entered > 0) {
		std::cout << "Please input a number" << std::endl;
		std::cin >> entered;
	
		answer += entered;
	}
	std::cout << "Your total is " << answer << std::endl;
}