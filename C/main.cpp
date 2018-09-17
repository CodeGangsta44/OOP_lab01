#include "long_number.h"

using namespace std;

int main(){
  Long_num a;
  a.print();
  Long_num b;
  b.print();
  Long_num c = a + b;
  cout << "SUMM: ";
  c.print();
  Long_num d = a - b;
  cout << "DIFF: ";
  d.print();
  return 0;
}
