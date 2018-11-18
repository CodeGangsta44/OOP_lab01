#include "input_error.h"
#include <string>

void Input_error::report(){
  cout << endl << "\033[1;31m" << "Error: " << "\033[0m";
  cout << "\033[1;34m" << "this is an input error" << "\033[0m" << endl;
  cout << "Your input: \033[1;36m" << this->input << "\033[0m"<< endl;
  cout << "\033[1;34m" << "Specification: " << "\033[0m";
}

void Float_input::report(){
  Input_error::report();
  cout << "entered float number" << endl << endl;
}

void Incorrect_symb::report(){
  Input_error::report();
  cout << "entered string with invalid characters [" << mark << "]" << endl << endl;
}

void Empty_string::report(){
  Input_error::report();
  cout << "entered empty string" << endl << endl;
}
