#include <iostream>
#include <string>
#include "greeting_utils.h"

int main() {
   std::cout << "Enter your name: " << std::endl;
   std::string name;
   std::getline(std::cin, name);

   std::string message = GreetingUtils::create_message(name);
   char* c_string = GreetingUtils::format_as_c_string(message);
   std::cout << c_string << std::endl;

   delete[] c_string;
   return 0;
}
