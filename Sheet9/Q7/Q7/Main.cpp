//Ruslan Gavrilov
//04-12-21
//Description: User selects which equation they would like - it then does that equation and displays
//Time: 20 minutes
//Bugs: no input on user validation 

#include<iostream>
double fahtoCel(int t_fah);
float celToFah(int t_cel);
double inchToCenti(double t_inch);
int main()
{
	int inputOption = 0;
	do {
		std::cout << "Option 1 - Fahrenheit to Celcius" << std::endl;
		std::cout << "Option 2 - Celcius to Fahrenheit" << std::endl;
		std::cout << "Option 3 - Inches to Centimetres" << std::endl;
		std::cout << "Option 4 - Exit" << std::endl;
		std::cin >> inputOption;

		if (inputOption == 1) {
			int fahrenheit = 0;
			std::cout << "Please input fahrenheit" << std::endl;
			std::cin >> fahrenheit;
			std::cout << fahtoCel(fahrenheit) << "Celcius" << std::endl;
		}
		if (inputOption == 2) {
			int Celcius = 0;
			std::cout << "Please input Celcius" << std::endl;
			std::cin >> Celcius;
			std::cout << celToFah(Celcius) << "Fahrenheit" << std::endl;
		}
		if (inputOption == 3) {
			double inches = 0;
			std::cout << "Please input Inches" << std::endl;
			std::cin >> inches;
			std::cout << inchToCenti(inches) << "Centimeters" << std::endl;
		}
	} while (inputOption != 4);
	  return 1;
}

double fahtoCel(int t_fah)
{
	double answer = 0;
	answer = (t_fah - 32) * 5 / 9;
	return answer;
}

float celToFah(int t_cel)
{
	float answer = 0;
	answer = (t_cel * 9 / 5) + 32;
	return answer;
}

double inchToCenti(double t_inch)
{
	double answer = 0;
	answer = t_inch * 2.54;
	return answer;
}