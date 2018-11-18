#include "long_number.h"
#include "math_error.h"
#include "input_error.h"

using namespace std;

int main(){

  while(true){
    try{
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


      try{
        Long_num e = a / b;
        cout << "DIVI: ";
        e.print();
      } catch (Math_error* error){
        error -> report();
      }

      // Long_num g = a ^ b;
      // cout << "EXPO: ";
      // g.print();

      try{
        Long_num h = a.sqrt();
        cout << "SQRT: ";
        h.print();
      } catch (Math_error* error){
        error -> report();
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
      break;
    } catch (Input_error* error) {
      error -> report();
      cout << "Please, try again" << endl;
    }
  }

  return 0;
}
