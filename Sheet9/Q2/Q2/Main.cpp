//Ruslan Gavrilov
//C00273521
//29-11-21
//Estimated time : 20 minutes, Approx time : 20 minutes
//description: loops a random even number 10 times in range 10 - 50 and displays them and sum
//Bugs: No user input

#include<iostream>
#include<random>
#include<time.h>

void generateRandomEven(int t_min, int t_max);
int main() {
	generateRandomEven(10, 50);
}
/// <summary>
/// Generates only even numbers withing the range 10 times, displays the sum
/// </summary>
/// <param name="t_min">min of range</param>
/// <param name="t_max">max of range</param>
void generateRandomEven(int t_min, int t_max)
{
	std::srand(static_cast<unsigned>(time(nullptr)));
	int range = t_max - t_min;
	int count = 1;
	int sum = 0;

	while (count <= 10) {
		int number = rand();
		if ((number % 2) == 0) {
			std::cout << number % range << std::endl;
			count++;
			sum += number % range;
		}

	}
	std::cout << "Your sum is " << sum << std::endl;
}
