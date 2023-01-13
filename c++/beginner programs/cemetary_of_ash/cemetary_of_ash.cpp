/* Recreation of Cemetery of Ash from Dark Souls 3 in a text-based setting
Created by Nick Guevara */

#include <iostream>
#include <stdlib.h>
#include <time.h> 

int main()
{
   // Player-related stats

  int health = 100;
  int estus = 3;
  int playerChoice;
  int directionChoice;

  // Mob related stats 

  int bossHealth = 100;
  int mobHealth1 = 25;
  int mobHealth2 = 40;

  // Attacks will roll randomly 
  srand(time(NULL));
  int playerAttack = rand() % 20 + 1;
  int mobAttack = rand() % 10 + 1;
  int bossAttack = rand() % 30 + 1;

  if (health == 0)
  {
    std::cout << "You died. \n";
  }

  std::cout << "Ashen one, roused from the shackles of death. \n";
  std::cout << "Rise, for that is your curse. \n\n";
  std::cout << "You awaken from a dusty grave in a bleak forest, in only a loincloth and armed with a dull knife. \n";
  std::cout << "Upon examining your surroundings, you notice a shambling corpse making it's way towards you. What do you do? \n";

  std::cout << "1) Attempt to run.\n";
  std::cout << "2) Stand and fight.\n";
  std::cin >> playerChoice;

  // First route
  // Need to come back to this and figure out how to create a new random amount for each attack but moving forward to not spend too much time on this lesson 
  if (playerChoice == 1)
  {
    std::cout << "You make it past the corpse, but they claw at you for " << mobAttack << " damage as you squeeze by. \n";
    health = health - mobAttack;
    std::cout << "You continue on into the graveyard. You see two branching paths, which direction do you go? \n";
    std::cout << "1) Straight\n";
    std::cout << "2) Right\n";
    std::cin >> directionChoice;

    if (directionChoice == 1)
    {
      std::cout << "You walk straight and notice a broken fountain and shards of glass at the base of it. You proceed past the fountain. \n";
      std::cout << "You emerge from the graveyard and find yourself on a cliffside with the god rays in the distance illuminating the land. For a reason unbeknownst the phrase \"If only I could be so grossly incandescent!\" echoes in your mind as you look at the sun.\n";
      std::cout << "Further along the path you see an extinguished bonfire with what looks like a sword protruding from the base. You take a moment to rest by the bonfire and as you do, it reignites with a familiar warmth.\n";
      std::cout << "\n-------------------------------\n";
      std::cout << "         BONFIRE LIT           \n";
      std::cout << "-------------------------------\n";
      
      // End of first path for now

      
    }

    if (directionChoice == 2)
      {
        std::cout << "You walk straight and notice a broken fountain and shards of glass at the base of it. You proceed past the fountain. \n";
      std::cout << "You emerge from the graveyard and find yourself on a cliffside with the god rays in the distance illuminating the land. For a reason unbeknownst the phrase \"If only I could be so grossly incandescent!\" echoes in your mind as you look at the sun.\n";
      std::cout << "Further along the path you see an extinguished bonfire with what looks like a sword protruding from the base. You take a moment to rest by the bonfire and as you do, it reignites with a familiar warmth.\n";
      std::cout << "\n-------------------------------\n";
      std::cout << "         BONFIRE LIT           \n";
      std::cout << "-------------------------------\n"; 

      std::cout << "You make your way across the cliffside and you notice a structure in the distance. There is an archway with a path towards what looks like a man kneeled down. You make your way towards the man. \n";
      std::cout << "As you get closer, you notice a coiled sword pierced through the man who kneels motionless. There is a black, tar-like substance on his back that appears to be pulsating.. moving. \n ";
      std::cout << "The coiled sword would make for a fine replacement over the dull knife you've been using. \n";
      std::cout << "Do you take the sword? \n";
      std::cout << "1) Yes\n";
      std::cout << "2) No\n";

      // Leaving this unfinished for now to move forward with the lessons, but will finish and flesh this out in the future 
    
      }
  }

  // Second route 
  else if (playerChoice == 2)
  {
    std::cout << "You ready your knife and combat begins. \n";

    while (mobHealth1 > 0)
    {
    std::cout << "You strike the corpse for " << playerAttack << " damage. \n";
    mobHealth1 = mobHealth1 - playerAttack;
    std::cout << "The corpse strikes you back for " << mobAttack << " damage. \n\n";
    health = health - mobAttack;
    }
    std::cout << "The already dishelved corpse falls apart in front of you and combat ends. \n\n";
    std::cout << "You continue on into the graveyard. You see two branching paths, which direction do you go? \n";
    std::cout << "1) Straight\n";
    std::cout << "2) Right\n";
    std::cin >> directionChoice;

    if (directionChoice == 1) 
    {
      std::cout << "You walk straight and notice a broken fountain and shards of glass at the base of it. You proceed past the fountain. \n";
      std::cout << "You emerge from the graveyard and find yourself on a cliffside with the god rays in the distance illuminating the land. For a reason unbeknownst the phrase \"If only I could be so grossly incandescent!\" echoes in your mind as you look at the sun.\n";
      std::cout << "Further along the path you see an extinguished bonfire with what looks like a sword protruding from the base. You take a moment to rest by the bonfire and as you do, it reignites with a familiar warmth.\n";
      std::cout << "\n-------------------------------\n";
      std::cout << "         BONFIRE LIT           \n";
      std::cout << "-------------------------------\n"; 

      // End of second path for now 
    }

    else if (directionChoice == 2)
    {
      std::cout << "You proceed to the right and notice a sign that says \"Turn back\". You're compelled to continue forward. \n";
      std::cout << "You clear the corner and emerge in another smaller graveyard.\n";
      std::cout << "You notice a large, blue crystal lizard resting in the graveyard. There are hundreds of sharp, blue crystals that adorn its back. \n";
      std::cout << "The lizard takes notice of you and without warning, pounces towards you killing you instantly. \n";
      std::cout << "\n-------------------------------\n";
      std::cout << "         YOU DIED              \n";
      std::cout << "-------------------------------\n"; 
    }


  }


  
}

