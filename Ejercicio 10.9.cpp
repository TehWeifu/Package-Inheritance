#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"


int main()
{
	Package testNormalPackage("Waifu", "Av.SanOnofre", "Valencia", "Spain", 69696, "Pai", "Cummy-land", "Saarland", "Germany", 420420, 420.69, 1.5);
	TwoDayPackage testTwoDayPackage("Waifu", "Av.SanOnofre", "Valencia", "Spain", 69696, "Pai", "Cummy-land", "Saarland", "Germany", 420420, 420.69, 1.5, 50.49);
	OvernightPackage testOvernightPackage("Waifu", "Av.SanOnofre", "Valencia", "Spain", 69696, "Pai", "Cummy-land", "Saarland", "Germany", 420420, 420.69, 1.5, 0.5);
	
	std::cout << testNormalPackage.calculateCost() << std::endl;
	std::cout << testTwoDayPackage.calculateCost() << std::endl;
	std::cout << testOvernightPackage.calculateCost() << std::endl;
	return 0;
}