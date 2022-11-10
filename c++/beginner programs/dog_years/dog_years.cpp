#include <iostream>

int main() {

// Declarations
int early_years;
int later_years;
int human_years;

std::string dog_name;

// My dog's age 
int dog_age = 10;

// First two years of a dog's life count as 21 human years
early_years =  21;

// Each following year counts as 4 human years
later_years = (dog_age - 2) * 4;

// First two years of a dog's life + the remaining years is equal to it's age in human years
human_years = early_years + later_years;

std::cout << "What is your name? ";
std::cin >> dog_name;


std::cout << "My name is " << dog_name << "! Ruff ruff, I am "  << human_years << " years old in human years. \n";

return 0;
  
}