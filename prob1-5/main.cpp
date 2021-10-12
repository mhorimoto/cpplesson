#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  cout << "1つ目の数:" ;
  cin >> a;
  cout << "2つ目の数:" ;
  cin >> b;
  c = a+b;
  cout << a << "+" << b << "=" << c << endl;
  c = a-b;
  cout << a << "-" << b << "=" << c << endl;
  return 0;
}
