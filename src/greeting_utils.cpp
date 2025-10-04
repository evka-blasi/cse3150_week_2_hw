#include "greeting_utils.h"

namespace GreetingUtils {

   std::string create_message(const std::string& name) {
      return "Hello, " + name + "!";
   }

   char* format_as_c_string(const std::string& msg) {
      size_t length = msg.size() + 1;
      char* cstring = new char[length];
      for (size_t i = 0; i < msg.size(); ++i) {
         cstring[i] = msg[i];
      }
      cstring[msg.size()] = '\0';

      return cstring;
   }
}


