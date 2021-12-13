//Ruslan Gavrilov
//C00273521
//29-11-21
//Estimated time : 20 minutes, Approx time : 20 minutes
//description: loops a random number 10 times and displays them and sum
//Bugs: No user input

#include<iostream>
#include<random>
#include<time.h>

void generateRandom(int t_min, int t_max);
int main() {
	std::srand(static_cast<unsigned>(time(nullptr)));
	generateRandom(1, 40);
}
/// <summary>
/// Loops and generates 10 random number withing a range and displays them along with the sum
/// </summary>
/// <param name="t_min">min range</param>
/// <param name="t_max">max range</param>
void generateRandom(int t_min, int t_max)
{
	int range = t_max - t_min + 1;
	int count = 1;
	int sum = 0;

	while (count <= 10) {
		int number = std::rand();
		std::cout << number % range << std::endl;
		count ++;
		sum += number % range;
	}
	std::cout << "Your sum is " << sum << std::endl;
}
