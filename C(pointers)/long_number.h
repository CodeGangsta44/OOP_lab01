#include <vector>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

class Long_num{
  bool positive = true;
  bool correct = true;
  int len_of_number = 0;
  int *number;
  //vector<int> number;
public:
  Long_num();
  // Long_num(vector<int> &);
  // Long_num(Long_num &);
  //
  void print();
  // void set_positivity(bool);
  // void set_correctness(bool);
  // bool get_correctness();
  // Long_num& summ(Long_num &);
  // Long_num& diff(Long_num &);
  // Long_num& mult(Long_num &);
  // Long_num& mult_int(int);
  // Long_num& divi(Long_num &);
  // Long_num& sqrt();
  // Long_num& exp_int(int n);
  // Long_num& exp(Long_num &);
  //
  // Long_num& operator+(Long_num &);
  // Long_num& operator-(Long_num &);
  // Long_num& operator*(Long_num &);
  // Long_num& operator/(Long_num &);
  // Long_num& operator^(Long_num &);

  // ~Long_num();
};

Long_num::Long_num(){
  int curr_index = 0;
  int count = 0;
  int curr_digit;
  int limit = 0;
  string input = "";
  cout << "Input your number: ";
  getline(cin, input);
  if(input.length() != 0){
    curr_index = input.length() - 1;
    if(input[0] == '-'){
      positive = false;
      curr_index--;
      //limit++;
    } else positive = true;
    len_of_number = curr_index + 1;
    cout << curr_index << endl;
    number = new int[len_of_number];
    for (curr_index; curr_index >= 0; curr_index--){
      curr_digit=(int)input[curr_index] - '0';
      if(curr_digit >= 0 && curr_digit <= 9 && !(curr_digit == 0 && count==0)){
        cout << "CURR DIGIT" << curr_digit << endl;
        cout << "I=" << len_of_number - curr_index - 1 <<  endl;
        number[len_of_number - curr_index - 1] = curr_digit;
        count++;
        //number.insert(number.begin(), (int)input[curr_index] - '0');
      }
    }
  }
  if(len_of_number == 0){
    number[0] = 0;
    len_of_number++;
  }
}

// Long_num::Long_num(vector<int> & v){
//   for(int i = 0; i < v.size(); i++){
//     number.push_back(v[i]);
//   }
// }
//
// Long_num::Long_num(Long_num & original){
//   for(int i = 0; i < original.number.size(); i++){
//     number.push_back(original.number[i]);
//   }
//   positive = original.positive;
//   correct = original.correct;
//   // if (!(original.number[0] == 0 && original.number.size() == 1)){
//   //   positive = !(original.positive);
//   // }
// }
//
void Long_num::print(){
  cout << "Value of this number: ";
  if (!positive) cout << '-';
  for (int i = len_of_number - 1; i >= 0; i--){
    cout << number[i];
  }
  cout << endl;
 }
//
// void Long_num::set_positivity(bool pos){
//   positive = pos;
// }
//
// void Long_num::set_correctness(bool cr){
//   correct = cr;
// }
//
// bool Long_num::get_correctness(){
//   return correct;
// }
//
// Long_num& Long_num::summ(Long_num & b){
//   vector<int> result;
//   bool res_pos = true;
//   result.push_back(0);
//   int max_len = max(this->number.size(), b.number.size());
//
//   int a_dig, b_dig;
//
//   for(int i = 0; i < max_len; i++){
//     if(i < this->number.size()) a_dig = this->number[i];
//     else a_dig = 0;
//     if(i < b.number.size()) b_dig = b.number[i];
//     else b_dig = 0;
//     result[i] += (a_dig + b_dig);
//     result.push_back(result[i] / 10);
//     result[i] %= 10;
//   }
//   if(result[result.size() - 1] == 0) result.pop_back();
//   Long_num* c = new Long_num(result);
//   //c->set_positivity(!res_pos);
//   c->set_positivity(res_pos);
//   return *c;
// }
//
// Long_num& Long_num::diff(Long_num & b){
//   bool res_pos = true;
//   vector<int> result;
//   for(int i = 0; i < this->number.size(); i++){
//     result.push_back(this->number[i]);
//   }
//   for (int i = 0; i < b.number.size(); i++){
//     if(i == result.size()) result.push_back(0);
//     result[i] -= b.number[i];
//   }
//   while(result[result.size() - 1] == 0 && result.size() > 1){
//     result.pop_back();
//   }
//   if(result[result.size() - 1] < 0){
//     for(int i = 0; i < result.size(); i++){
//       result[i] *= (-1);
//     }
//     res_pos = false;
//   }
//   for(int i = result.size() - 1; i >= 0; i--){
//     if(result[i] < 0){
//       result[i] += 10;
//       result[i + 1] -= 1;
//       i+=2;
//     }
//   }
//   while(result[result.size() - 1] == 0 && result.size() > 1){
//     result.pop_back();
//   }
//
//   Long_num* c = new Long_num(result);
//   //c->set_positivity(!res_pos);
//   c->set_positivity(res_pos);
//   return *c;
// }
//
// Long_num& Long_num::mult(Long_num & b){
//   vector<int> result;
//   int len_a = this->number.size();
//   int len_b = b.number.size();
//   for(int i = 0; i < len_b; i++){
//     for(int j = 0; j < len_a; j++){
//       if(i + j == result.size()) result.push_back(0);
//       result[i + j] += b.number[i] * this->number[j];
//     }
//   }
//   for(int i = 0; i < result.size(); i++){
//     if(result[i] > 10){
//       if(i == result.size() - 1){
//         result.push_back(0);
//       }
//       result[i + 1] += result[i] / 10;
//       result[i] %= 10;
//     }
//   }
//   while(result[result.size() - 1] == 0 && result.size() > 1){
//     result.pop_back();
//   }
//   Long_num* c = new Long_num(result);
//   //c->set_positivity(!((this->positive && b.positive)||(!(this->positive) && !(b.positive))));
//   c->set_positivity((this->positive && b.positive)||(!(this->positive) && !(b.positive)));
//   return *c;
// }
//
// Long_num& Long_num::mult_int(int b){
//   vector<int> result;
//   int len_a = this->number.size();
//   for(int i = 0; i < len_a; i++){
//     result.push_back(this->number[i] * b);
//   }
//   for(int i = 0; i < result.size(); i++){
//     if(result[i] > 10){
//       if(i == result.size() - 1){
//         result.push_back(0);
//       }
//       result[i + 1] += result[i] / 10;
//       result[i] %= 10;
//     }
//   }
//   while(result[result.size() - 1] == 0 && result.size() > 1){
//     result.pop_back();
//   }
//   Long_num* c = new Long_num(result);
//   return *c;
// }
//
// Long_num& Long_num::divi(Long_num & b){
//   if(b.number.size() == 1 && b.number[0] == 0){
//     cout << "Division by ZERO!" << endl;
//     vector<int> result;
//     result.push_back(0);
//     Long_num *c = new Long_num(result);
//     c -> set_correctness(false);
//     return *c;
//   } else {
//     vector<int> result;
//     vector<int> s;
//     Long_num currVal(s);
//     currVal.set_positivity(true);
//     int len_a = this->number.size();
//     int len_b = b.number.size();
//     int l, h, x;
//     for(int i = len_a - 1; i >= 0; i--){
//       currVal.number.insert(currVal.number.begin(), 0);
//       currVal.number[0] = this->number[i];
//       l = 0; h = 10; x = 0;
//       while(l <= h){
//         int m = (l + h) / 2;
//         Long_num curr = b.mult_int(m);
//         curr.set_positivity(true);
//         curr = curr - currVal;
//         if((curr.number.size() == 1 && curr.number[0] == 0) || !(curr.positive)){
//           x = m;
//           l = m + 1;
//         } else {
//           h = m - 1;
//         }
//       }
//       result.insert(result.begin(), x);
//       //result[i] = x;
//       currVal = currVal - b.mult_int(x);
//       // while(result[result.size() - 1] == 0 && result.size() > 1){
//       //   result.pop_back();
//       // }
//     }
//     while(result[result.size() - 1] == 0 && result.size() > 1){
//       result.pop_back();
//     }
//     Long_num* c = new Long_num(result);
//     //c->set_positivity(!((this->positive && b.positive)||(!(this->positive) && !(b.positive))));
//     c->set_positivity((this->positive && b.positive)||(!(this->positive) && !(b.positive)));
//     if(c->number.size() == 1 && c->number[0] == 0) c->set_positivity(true);
//     return *c;
//   }
// }
//
// Long_num& Long_num::sqrt(){
//   if (!(this -> positive)){
//     cout << "The root of a NEGATIVE number!" << endl;
//     vector<int> result;
//     result.push_back(0);
//     Long_num *c = new Long_num(result);
//     c -> set_correctness(false);
//     return *c;
//   } else {
//     int count = this -> number.size();
//     vector<int> result;
//     for(int i = 0; i < count; i++) result.push_back(0);
//     count--;
//     Long_num *curr = new Long_num(result);
//     while(count >= 0){
//       int l = 0; int h = 10; int x = 0;
//       while(l <= h){
//         int m = (l + h) / 2;
//         curr->number[count] = m;
//         Long_num temp = ((*curr) * (*curr)) - *this;
//         if((temp.number.size() == 1 && temp.number[0] == 0) || !(temp.positive)){
//           x = m;
//           l = m + 1;
//         } else {
//           h = m - 1;
//         }
//       }
//       curr->number[count--] = x;
//     }
//     while(curr->number[curr->number.size() - 1] == 0 && curr->number.size() > 1){
//       curr->number.pop_back();
//     }
//     // while(result[result.size() - 1] == 0 && result.size() > 1){
//     //   result.pop_back();
//     // }
//     return *curr;
//   }
// }
//
// Long_num& Long_num::exp(Long_num & b){
//   Long_num temp = b;
//   vector<int> one;
//   one.push_back(1);
//   Long_num *decr = new Long_num(one);
//   Long_num *res = new Long_num(*this);
//   res -> set_positivity(this->positive);
//   while(!(temp.number[temp.number.size() - 1] == 1 && temp.number.size() == 1)){
//     *res = mult(*res);
//     temp = temp - *decr;
//   }
//   return *res;
// }
//
// Long_num& Long_num::exp_int(int n){
//   Long_num *res = new Long_num(*this);
//   res -> set_positivity(this->positive);
//   for (int i = 1; i < n; i++){
//     *res = mult(*res);
//   }
//   if(n % 2 == 0) res -> set_positivity(true);
//   else res -> set_positivity(this->positive);
//   return *res;
// }
//
// Long_num& Long_num::operator+(Long_num & b){
//   if(this->positive && b.positive) return summ(b);
//   if(this->positive && !(b.positive)) return diff(b);
//   if(!(this->positive) && b.positive) return b.diff(*this);
//   if(!(this->positive) && !(b.positive)){
//     Long_num *res = new Long_num(summ(b));
//     res -> set_positivity(false);
//     return *res;
//   }
// }
//
// Long_num& Long_num::operator-(Long_num & b){
//   if(this->positive && b.positive) return diff(b);
//   if(this->positive && !(b.positive)) return summ(b);
//   if(!(this->positive) && b.positive){
//     Long_num *res = new Long_num(b.summ(*this));
//     res -> set_positivity(false);
//     return *res;
//   }
//   if(!(this->positive) && !(b.positive)) return b.diff(*this);
// }
//
// Long_num& Long_num::operator*(Long_num & b){
//   return mult(b);
// }
//
// Long_num& Long_num::operator/(Long_num & b){
//   return divi(b);
// }
//
// Long_num& Long_num::operator^(Long_num & b){
//   return exp(b);
// }
//
// Long_num::~Long_num(){
//   number.clear();
// }
