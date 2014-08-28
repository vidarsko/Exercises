//Exercise 2.2.2
/* Program evaluates the differences between 
summing the reciprocals of n from 1 to N and from N to 1
using float and double number formats.
*/

#include <iostream>
#include <math.h>
#include <fstream> //streams from and to a file. 
using namespace std;

template <class T> T sumfunc(int N,char u){
  /*
    This function takes three arguments:
    The number to which summation of reciprocals is going to happen (N)
    A character indicating if the summation is from 1 to N ('u')
    or from N to 1 ('d'). 
    And the type used in the summation (double or float)
   */
  T sum = 0;
  for (int i=1;i<=N;i++){
    if (u == 'u'){
      sum += 1./i;}
    else if (u == 'd'){
      sum += 1./(N-i+1);}
    else{cout << "Something went wrong. Please review code.";}
  }
  return sum;
}

int main(){
  ofstream myfile;
  myfile.open("ex2_2.out");
  for (int n=1;n<=9;n++){ //for n =1,2,3,...
    double N = pow(10,n); 
    //The float part
    float fsup = sumfunc<float>(N,'u');   //float summation up
    float fsdown = sumfunc<float>(N,'d'); //float summation down
    //The double part
    double dsup = sumfunc<double>(N,'u');
    double dsdown = sumfunc<double>(N,'d');
    /*//Printing:
    //Float part:
    cout << "Float, n = " << n << '\n';
    cout << "Sum up: " << fsup << '\n';
    cout << "Sum down: " << fsdown << "\n\n";
    
    //Double part:
    cout << "Double, n = " << n << '\n';
    cout << "Sum up " <<dsup << '\n';
    cout << "Sum down: " << dsdown << "\n\n";
    */
    
    double freldiff = (fsup-fsdown)/fsdown; //Float relative difference
    double dreldiff = (dsup-dsdown)/dsdown; // Double relative difference
    myfile << N << ',' << freldiff << ',' << dreldiff  << '\n';
  }
  myfile.close();
  return 0;
}
