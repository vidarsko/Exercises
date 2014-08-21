#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
  int N = atof(argv[1]);
  cout << "The value of N you have entered is "<< N << '\n';
  float sum=0, sumr=0;
  for (int n=1; n <= N; n++){
    sum += 1./n; //The sum from 1 to N
    sumr += 1./(N-n+1); // The sum from N to 1
  }
  cout << "The reciprocal summation from 1 to N is " << sum << '\n';
  cout << "The reciprocal summation from N to 1 is " << sumr << '\n';
  
}
