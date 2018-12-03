// Learn C++
// Dog Years

#include <iostream>
using namespace std;

int main()
{

  string dog_name;
  int dog_age = 3;

  int early_years, later_years, human_years;

  early_years = 21;

  later_years = (dog_age - 2) * 4;

  human_years = early_years + later_years;

  cout << "Enter your dog's name: ";
  cin >> dog_name;

  cout << "My name is " << dog_name << "! Ruff Ruff, I am " << human_years << " years old in human years.\n";

}
