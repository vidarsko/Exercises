//Exercise 2.1
/*
Program takes a user defined n and returns 
the sum of 1 + 2 + 3 + ... + n as well as 
1/1 + 1/2 + 1/3 + ... + !/n.
*/

#include <iostream>
#include <sstream>
using namespace std;

int main(){
  string mystring;
  int N;
  cout << "This program lets you enter a value of N and returns two sums: \
the sum from 1 to N of n and n reciprocal.\n";
  cout << "Please enter a value for N: ";
  cin >> mystring;
  stringstream(mystring) >> N;
  int sum = 0;
  double sumreci = 0;
  for (int n=1; n<=N;n++){
    sum += n;
    sumreci += 1./n;}
  cout << "The sum from 1 to N of n is " << sum << endl;
  cout << "The sum from 1 to N of n reciprocal is " << sumreci << endl;
}
