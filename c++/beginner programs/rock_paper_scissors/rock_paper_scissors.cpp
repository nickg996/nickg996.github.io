/* Rock, Paper, Spock program
Written by me */

#include <iostream>
#include <stdlib.h>

int main()
{
  srand(time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "Rock! Paper! Scissors! \n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌\n";
  
  std::cout << "Shoot! ";
  std::cin >> user;

  if (user == 1)
  {
    std::cout << "You chose Rock!\n";
  }

  else if (user == 2)
  {
    std::cout << "You chose Paper!\n";
  }

  else if (user == 3)
  {
    std::cout << "You chose Scissors!\n";
  }

  if (computer == 1 && user == 1)
  {
    std::cout << "Your opponent also chose Rock! It's a tie.\n";
  }

  else if (computer == 2 && user == 1)
  {
    std::cout << "Your opponent chose Paper. You lose! \n";
  }

  else if (computer == 3 && user == 1)
  {
    std::cout << "Your opponent chose Scissors. You win! \n";
  }

  else if (computer == 1 && user == 2)
  {
    std::cout << "Your opponent chose Rock. You win! \n";
  }

  else if (computer == 2 && user == 2)
  {
    std::cout << "Your opponent also chose Paper. It's a tie! \n";
  }

  else if (computer == 3 && user == 2)
  {
    std::cout << "Your opponent chose Scissors. You lose! \n";
  }

  else if (computer == 1 && user == 3)
  {
    std::cout << "Your opponent chose Rock. You lose! \n";
  }

  else if (computer == 2 && user == 3)
  {
    std::cout << "Your opponent chose Paper. You win! \n";
  }

  else if (computer == 3 && user == 3)
  {
    std::cout << "Your opponent also chose Scissors. It's a tie!\n";
  }
  
}