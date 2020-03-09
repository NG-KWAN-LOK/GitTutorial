#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
<<<<<<< HEAD

	if (number == target) {
		std::cout << "Correct !!";
		target = -1;
		return true;
	}
	else if (number > target) std::cout << "Smaller" << std::endl;
	else if (number < target) std::cout << "Bigger" << std::endl;
	return false;
=======
	 if (number > target) {
          std::cout << "Smaller" << std::endl;
          return false;
     }
     else if (number < target) {
          std::cout << "Bigger" << std::endl;
          return false;
     }
    return true;
>>>>>>> 3216f10c1830859c184322874628c10263171cf4
}
int main(array<System::String ^> ^args)
{
	int guess;
	do {
		std::cout << "Choose a number between 1 - 100 :";
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}