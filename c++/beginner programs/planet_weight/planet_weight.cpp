#include <iostream>

int main() {
  
  int weight, planet;

  std::cout << "Enter your weight: ";
  std::cin >> weight;
  std::cout << "\n";

  std::cout << "Which planet would you like to fight on? \n";
  std::cout << "1 - Mercury\n2 - Venus\n3 - Mars\n4 - Jupiter\n5 - Saturn\n6 - Uranus\n7 - Neptune\n\n";
  
  std::cout <<"Enter your choice here: ";
  std::cin >> planet;

  switch (planet)
  {
    case 1: 
      std::cout << "\nYour weight on Mercury is: " << weight * 0.38 << "\n";
      break;
    case 2:
      std::cout << "\nYour weight on Venus is: " << weight * 0.91 << "\n";
      break;
    case 3:
      std::cout << "\nYour weight on Mars is: " << weight * 0.38 << "\n";
      break;  
    case 4:
      std::cout << "\nYour weight on Jupiter is: " << weight * 2.34 << "\n";
      break;
    case 5:
      std::cout << "\nYour weight on Saturn is: " << weight * 1.06 << "\n";
      break;
    case 6:
      std::cout << "\nYour weight on Uranus is: " << weight * 0.92 << "\n";
      break;
    case 7:
      std::cout << "\nYour weight on Neptune is: " << weight * 1.19 << "\n";
      break;
  }

  return 0;
  
}