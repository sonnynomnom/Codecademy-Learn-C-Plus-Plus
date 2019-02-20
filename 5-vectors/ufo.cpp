#include <iostream>
#include <stdlib.h>
#include <vector>

void display(int turn);

int main() {

  bool guess = false;

  int turn = 0;

  std::cout << "=============\n";
  std::cout << "UFO: The Game\n";
  std::cout << "=============\n";
  
  std::cout << "Instructions: save us from alien abduction by guessing letters in the codeword.\n";

  std::cout << "                 .                            \n";
  std::cout << "                 |                            \n";
  std::cout << "              .-\"^\"-.                       \n";
  std::cout << "             /_....._\\                       \n";
  std::cout << "         .-\"`         `\"-.                  \n";
  std::cout << "        (  ooo  ooo  ooo  )                   \n";
  std::cout << "         '-.,_________,.-'    ,-----------.   \n";
  std::cout << "              /     \\        (  Send help! ) \n";
  std::cout << "             /       \\      / `-----------'  \n";
  std::cout << "            /    O    \\    /                 \n";
  std::cout << "           /   --|--   \\                     \n";
  std::cout << "          /      |      \\                    \n";
  std::cout << "         /      / \\      \\                  \n";

  std::cout << "\nIncorrect Guesses:\n";
  std::cout << "None\n\n";

  std::cout << "Codword:\n";

  std::vector<char> incorrect;

  std::vector<std::string> dictionary;

  dictionary.push_back("PINEAPPLE");
  dictionary.push_back("JUICE");
  dictionary.push_back("TESLA");
  dictionary.push_back("TRAIN");
  dictionary.push_back("TEST");

  srand(time(NULL));
  int num = rand() % 5 + 1;

  //std::cout << num << "\n";
  std::string safe_word;

  std::string answer;

  switch (num) {

    case 1:
      safe_word = dictionary[0];
      break;
    case 2:
      safe_word = dictionary[1];
      break;
    case 3:
      safe_word = dictionary[2];
      break;
    case 4:
      safe_word = dictionary[3];
      break;
    case 5:
      safe_word = dictionary[4];
      break;
    default:
      std::cout << "Error.\n";
      break;

  }

  answer = safe_word;

  for (int i = 0; i < safe_word.length(); i++) {

    answer[i] = '_';
    std::cout << answer[i] << " ";

  }

  // std::cout << safety_word << "\n";



  char letter;
  std::cout << "\n\nPlease enter your guess: ";
  std::cin >> letter;

  for (int i = 0; i < safe_word.length(); i++) {

    if (letter == safe_word[0]) {

       answer[i] = letter;
       guess = true;

    }

  }

  if (guess) {

    std::cout << "\nCorrect! You're closer to cracking the codeword.\n";

  }

  else {

    std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";

    incorrect.push_back(letter);

  }

  while (answer != safe_word && turn < 7) {

    display(turn);

    std::cout << "\nIncorrect Guesses:\n";

    for(int i = 0; i < incorrect.size(); i++)
      std::cout << incorrect[i] << " ";

    turn++;

    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;



  }

  if (answer == safe_word) {

    std::cout << "Correct! You saved the person and earned a medal of honor!\n";

    std::cout << "Goodbye!\n";

  }
  else {

    std::cout << "Oh no! The UFO just flew away!\n";

  }


  return 0;

}

void display(int turn) {

  if (turn == 1) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (turn == 2) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (turn == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (turn == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (turn == 4) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (turn == 5) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (turn == 6) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }


}
