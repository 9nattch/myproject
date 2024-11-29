#include<iostream>
#include <cmath>
using namespace std;


double complexFormula(double x) {
    return sin(2 * M_PI / (3*pow(x, 4) + 1))+ pow(2, 2 * x + 1) * sqrt(pow(x,2) + 1);

} 


int main(){
   int x = 5.6;
   cout << "result = "<< complexFormula(x);

}