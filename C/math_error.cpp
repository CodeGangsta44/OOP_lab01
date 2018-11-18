#include "math_error.h"
#include "long_number.h"

void Math_error::report(){
  cout << endl << "\033[1;31m" << "Error: " << "\033[0m";
  cout << "\033[1;34m" << "this is mathematical error" << "\033[0m" << endl;
  cout << "\033[1;34m" << "Specification: " << "\033[0m";
}

void Division_by_zero::report(){
  Math_error::report();
  cout << "division by zero:" << endl;
  cout << "Divided: \033[1;36m"; number.print_dig(); cout << "\033[0m" << endl;
  cout << "Divider: \033[1;36m"; divider.print_dig(); cout << "\033[0m" << endl << endl;
}

void Root_of_neg_num::report(){
  Math_error::report();
  cout << "the root of a negative number: " << endl;
  cout << "Number: \033[1;36m"; number.print_dig(); cout << "\033[0m" << endl << endl;
}
