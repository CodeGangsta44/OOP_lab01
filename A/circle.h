#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

class Circle{
  float *x;
  float *y;
  float *R;
public:
  Circle();
  Circle(Circle &);
  Circle(float, float, float);
  void set_x(float xx);
  void set_y(float yy);
  void set_R(float RR);
  void print();
  float get_len();
};

Circle::Circle(){
  x = new float;
  y = new float;
  R = new float;
  cout << "Set x = "; cin >> (*x);
  cout << "Set y = "; cin >> (*y);
  cout << "Set R = "; cin >> (*R);
  cout << "Initialization finished" << endl;
}
Circle::Circle(Circle& original){
  x = new float;
  y = new float;
  R = new float;
  *x = *(original.x);
  *y = *(original.y);
  *R = (*(original.R))/2;
  cout << "Copying finished" << endl;
}
Circle::Circle(float xx, float yy, float RR){
  x = new float(xx);
  y = new float(yy);
  R = new float(abs(RR));
}
void Circle::set_x(float xx){
  *x = xx;
}
void Circle::set_y(float yy){
  *y = yy;
}
void Circle::set_R(float RR){
  *R = RR;
}
void Circle::print(){
  cout << endl;
  cout << "x = " << *x << endl;
  cout << "y = " << *y << endl;
  cout << "R = " << *R << endl;
}

float Circle::get_len(){
  return (2 * PI * (*R));
}
