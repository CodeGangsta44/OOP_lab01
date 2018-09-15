#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Long_num{
  bool positive = true;
  vector<int> number;
public:
  Long_num();
  Long_num(vector<int> &);
  Long_num(Long_num &);
  void print();
  void set_positivity(bool);
  Long_num& operator+(Long_num &);
};

Long_num::Long_num(){
  int curr_index = 0;
  int curr_digit;
  string input = "";
  cout << "Input your number: ";
  getline(cin, input);
  if(input.length() != 0){
    if(input[0] == '-'){
      positive = false;
      curr_index++;
    } else positive = true;
    for (curr_index; curr_index < input.length(); curr_index++){
      curr_digit=(int)input[curr_index] - '0';
      if(curr_digit >= 0 && curr_digit <= 9 && !(curr_digit == 0 && number.size()==0)){
        //number.push_front((int)input[curr_index] - '0');
        number.insert(number.begin(), (int)input[curr_index] - '0');
      }
    }
  }
  if(number.size() == 0) number.push_back(0);
}

Long_num::Long_num(vector<int> & v){
  for(int i = 0; i < v.size(); i++){
    number.push_back(v[i]);
  }
}

Long_num::Long_num(Long_num & original){
  int i = 0;
  for(i; i < original.number.size(); i++){
    number.push_back(original.number[i]);
  }
  if (original.number[0] != 0) positive = !(original.positive);
}

void Long_num::print(){
  cout << "Value of this number: ";
  if (!positive) cout << '-';
  for (int i = number.size() - 1; i >= 0; i--){
    cout << number[i];
  }
  cout << endl;
 }

void Long_num::set_positivity(bool pos){
  positive = pos;
}

Long_num& Long_num::operator+(Long_num & b){
  vector<int> result;
  result.push_back(0);
  int max_len = max(this->number.size(), b.number.size());

  int a_dig, b_dig;

  for(int i = 0; i < max_len; i++){
    if(i < this->number.size()) a_dig = this->number[i];
    else a_dig = 0;
    if(i < b.number.size()) b_dig = b.number[i];
    else b_dig = 0;
    result[i] += (a_dig + b_dig);
    result.push_back(result[i] / 10);
    result[i] %= 10;
  }
  if(result[result.size() - 1] == 0) result.pop_back();
  Long_num* c = new Long_num(result);
  c->print();
  return *c;
}
