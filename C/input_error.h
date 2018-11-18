#include <iostream>
#include <string>

using namespace std;

class Input_error{
  protected:
    string input;
  public:
    Input_error(string _input) : input(_input) {};
    virtual void report();
};

class Float_input : public Input_error{
  public:
    Float_input(string _input) : Input_error(_input) {};
    void report();
};

class Incorrect_symb : public Input_error{
  protected:
    int mark;
  public:
    Incorrect_symb(string _input, int _mark) : Input_error(_input), mark(_mark) {};
    void report();
};

class Empty_string : public Input_error{
  public:
    Empty_string(string _input) : Input_error(_input) {};
    void report();
};
