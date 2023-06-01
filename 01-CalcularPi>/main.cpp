
#include <math.h>
#include <iostream>

using namespace std;

int main() {
  
double pot, pi = 0.0;  

  for (int i=0; i<=7000000; i++){
  pot= pow(-1,i)/((2*i) + 1); 
  pi+= pot*4; 
  }

  cout.precision(8);
  cout<<"PI: "<<pi; 
  return 0;
  
}
