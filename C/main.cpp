#include "long_number.h"

using namespace std;

int main(){
  Long_num a;
  a.print();
  Long_num b;
  b.print();

  cout << endl;

  Long_num c = a + b;
  cout << "SUMM: ";
  c.print();

  Long_num d = a - b;
  cout << "DIFF: ";
  d.print();

  Long_num f = a * b;
  cout << "MULT: ";
  f.print();

  Long_num e = a / b;
  if(e.get_correctness()){
    cout << "DIVI: ";
    e.print();
  }

  Long_num g = a ^ b;
  cout << "EXPO: ";
  g.print();

  Long_num h = a.sqrt();
  if(h.get_correctness()){
    cout << "SQRT: ";
    h.print();
  }

  cout << endl;

  cout << "INCR(pref): " << endl;
  (++a).print();
  a.print();

  cout << "INCR(post): " << endl;
  (a++).print();
  a.print();

  cout << "DECR(pref): " << endl;
  (--a).print();
  a.print();

  cout << "DECR(post): " << endl;
  (a--).print();
  a.print();

  cout << endl;

  cout << "EQUA: " << (a == b) << endl;
  cout << "NOT EQUA: " << (a != b) << endl;
  cout << "LESS: " << (a < b) << endl;
  cout << "MORE: " << (a > b) << endl;
  cout << "LESS OR EQUA: " << (a <= b) << endl;
  cout << "MORE OR EQUA: " << (a >= b) << endl;

  return 0;
}
