#include <iostream>
using namespace std;

//入力値を受け取る
int main() {
  string name = "paiza";
  cin >> name; //cinで入力値を受け取る
  cout << "Hello " << name << endl;
  
  int number;
  cin >> number;
  cout << number*100 << endl;
}
