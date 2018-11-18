#include <vector>
#include <string>
#include <cmath>
#include <iostream>


using namespace std;

class Math_error;

class Long_num{
  bool positive = true;
  bool correct = true;
  vector<int> number;
public:
  Long_num();
  Long_num(vector<int> &);
  Long_num(Long_num &);

  void print();
  void print_dig();
  void set_positivity(bool);
  void set_correctness(bool);
  bool get_positivity();
  bool get_correctness();
  Long_num& summ(Long_num &);
  Long_num& diff(Long_num &);
  Long_num& mult(Long_num &);
  Long_num& mult_int(int);
  Long_num& divi(Long_num &);
  Long_num& sqrt();
  Long_num& exp_int(int n);
  Long_num& exp(Long_num &);

  Long_num& operator+(Long_num &);
  Long_num& operator-(Long_num &);
  Long_num& operator*(Long_num &);
  Long_num& operator/(Long_num &);
  Long_num& operator^(Long_num &);

  void operator+=(Long_num &);
  void operator-=(Long_num &);
  void operator*=(Long_num &);
  void operator/=(Long_num &);

  Long_num& operator-();

  Long_num& operator++();
  Long_num& operator++(int);
  Long_num& operator--();
  Long_num& operator--(int);

  bool operator==(Long_num &);
  bool operator!=(Long_num &);
  bool operator<(Long_num &);
  bool operator>(Long_num &);
  bool operator<=(Long_num &);
  bool operator>=(Long_num &);

  ~Long_num();
};
