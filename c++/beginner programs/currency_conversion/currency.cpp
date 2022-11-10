#include <iostream>

int main() {
  double pesos, reais, soles, dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  /* Conversion rates for these currencies to USD
  Pesos: 0.051 
  Reais: 0.19
  Soles: 0.26
  */

  dollars = (0.051 * pesos) + (0.19 * reais) + (0.26 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
}