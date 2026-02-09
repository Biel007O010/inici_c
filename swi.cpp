#include <iostream>


int main() {
  int choice = 2;

  // 1 = Coffee
  // 2 = Tea

  switch (choice) {
    case1:
      std::cout << "You ordered Coffee" << std::endl;
      break;

    case2:
      std::cout << "You ordered Tea" << std::endl;
      break;

      std::cout << "Invalid choice" << std::endl;
  }

  return 0;
}