#include <iostream>

using namespace std;

class Long_num;

class Math_error{
  protected:
    Long_num& number;
  public:
    Math_error(Long_num& _number) : number(_number) {};
    virtual void report();
};

class Division_by_zero : public Math_error{
  protected:
    Long_num& divider;
  public:
    Division_by_zero(Long_num& _number, Long_num& _divider) : Math_error(_number), divider(_divider){};
    void report();
};

class Root_of_neg_num : public Math_error{
  public:
    Root_of_neg_num(Long_num& _number) : Math_error(_number){};
    void report();
};
