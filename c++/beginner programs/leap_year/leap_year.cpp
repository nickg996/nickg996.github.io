#include <iostream>

int main() {
  int year;

// User inputs a year 
  std::cout << "Enter a year: ";
  std::cin >> year;

// Year validity checker
  if (year < 1000 || year > 9999)
  {
    std::cout << "This is not a valid year. Please enter a valid year: ";
    std::cin >> year;
  }

  // Checks to see if the year is a leap year and returns IF it is, ELSE it is notd

  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
  {
    std::cout << "The year " << year << " is a leap year. \n";
  }

  else {
    std::cout << "The year " << year << " is not a leap year. \n";
  }
}
  
  
