#include <iostream>

class Blin_Maker
{
public:

	const int minEgg = 1;
	const int minMilk = 200;
	const int minFlour = 100;

	int eggsAmount = 0, milkAmount = 0, flourAmount = 0;
	int eggsPortion = 0;
	int milkPortion = 0;
	int flourPortion = 0;

	
	
	int getEggs() {
		std::cout << "How many eggs do you have?\n";
		std::cin >> eggsAmount;
		return eggsAmount;
	}

	int getMilk() {
		std::cout << "How much milk do you have?\n";
		std::cin >> milkAmount;
		return milkAmount;
	}

	int getFlour() {
		std::cout << "How much flour do you have?\n";
		std::cin >> flourAmount;
		return flourAmount;
	}

	bool amountChecker(int eggsAmount, int milkAmount, int flourAmount) {
		if (eggsAmount < minEgg || milkAmount < minMilk || flourAmount < minFlour) {
			return 0;
		}
		else {
			return 1;
		}
	}
};


int main()
{
    std::cout << "Hello, Boris\n";
    std::cout << "Blin Maker is Starting Up..\n";

	Blin_Maker Babushka;

	Babushka.getEggs();
	Babushka.getMilk();
	Babushka.getFlour();

	Babushka.eggsPortion = Babushka.eggsAmount / Babushka.minEgg;
	Babushka.milkPortion = Babushka.milkAmount / Babushka.minMilk;
	Babushka.flourPortion = Babushka.flourAmount / Babushka.minFlour;

	int portion_compare[3] = { Babushka.eggsPortion,Babushka.milkPortion,Babushka.flourPortion };
	int min = Babushka.eggsPortion;

	for (int i = 0; i < 3; i++) {
		if (portion_compare[i] < min) {
			min = portion_compare[i];
		}
	}

	if (Babushka.amountChecker(Babushka.eggsAmount, Babushka.milkAmount, Babushka.flourAmount) != 0) {
		std::cout << "You can make " << 4 * min << " blins\n";
		std::cout << "To make this, you need: \n";
		std::cout << min << " eggs\n";
		std::cout << min * 200 << "mL of milk\n";
		std::cout << min * 100 << "g of flour\n";
	}
	else {
		std::cout << "No Blin Today!\n";
		return 0;
	}
}

