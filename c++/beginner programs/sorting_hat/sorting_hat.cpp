#include <iostream>

int main()
{
  // Variable declaration
  int gryffindor, hufflepuff, ravenclaw, slytherin = 0;
  int answer1, answer2, answer3, answer4;
  int max = 0;
  std::string house;

  std::cout << "The Sorting Hat Quiz! \n";
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise \n";
  std::cout << "4) The Bold\n";

  std::cout << "Enter your choice here: ";
  std::cin >> answer1;

  // Switch for the various answers
  switch (answer1)
  {
    case 1: 
    ++hufflepuff;
    break;
    case 2:
    ++slytherin;
    break;
    case 3:
    ++ravenclaw;
    break;
    case 4:
    ++gryffindor;
    break;
    default:
    std::cout << "Invalid input. \n";
    break;
  }

  std::cout << "\nQ2) Dawn or Dusk? \n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";

  std::cout << "Enter your choice here: ";
  std::cin >> answer2;

  if (answer2 == 1)
  {
    ++gryffindor;
    ++ravenclaw;
  }

  else if (answer2 == 2)
  {
    ++hufflepuff;
    ++slytherin;
  }

  else 
  {
    std::cout << "Invalid input. \n";
  }

  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";

  std::cout << "Enter your choice here: ";
  std::cin >> answer3;

  switch (answer3)
  {
    case 1:
    ++slytherin;
    break;
    case 2:
    ++hufflepuff;
    break;
    case 3:
    ++ravenclaw;
    break;
    case 4:
    ++gryffindor;
    break;
    default:
    std::cout << "Invalid input. \n";
    break;
  }

  std::cout << "\nQ4) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through the woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";

  std::cout << "Enter your choice here: ";
  std::cin >> answer4;

  switch (answer4)
  {
    case 1:
    hufflepuff++;
    break;
    case 2:
    slytherin++;
    break;
    case 3:
    gryffindor++;
    break;
    case 4:
    ravenclaw++;
    break;
    default:
    std::cout << "Invalid input. \n";
    break;
  }

  // Figuring out which house has the highest answer
  if (gryffindor > max) 
  {
  max = gryffindor;
  house = "\nGryffindor";
  }
 
if (hufflepuff > max) 
{
  max = hufflepuff;
  house = "\nHufflepuff";
}
 
if (ravenclaw > max) 
{
  max = ravenclaw;
  house = "\nRavenclaw";
}
 
if (slytherin > max) 
{
  max = slytherin;
  house = "\nSlytherin";
}
 
std::cout << house << "!\n";

}
