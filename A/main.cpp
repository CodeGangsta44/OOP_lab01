#include <iostream>
#include "circle.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

  Circle a;
  Circle b(a);
  b.set_x(0);
  a.print();
  b.print();

  cout << "Length of circle b: " << b.get_len() << endl;

  Circle* arr[5];

  srand (time(NULL));

  float x, y, R;
  for(int i = 0; i < 5; i++){
    x = rand()%5 - 10;
    y = rand()%5 - 10;
    R = rand()%10 - 20;
    arr[i] = new Circle(x, y, R);
  }

  cout << "ARRAY" << endl;
  for(int i = 0; i < 5; i++){
    cout << "Circle #" << i << endl;
    arr[i] -> print();
    cout << "Length of circle #" << i << ':' << arr[i] -> get_len() << endl;
  }
  return 0;
}
