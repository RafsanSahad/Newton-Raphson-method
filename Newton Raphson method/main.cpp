//
//  main.cpp
//  Newton Raphson method
//
//  Created by Rafsan Sahad on 5/19/24.
//

#include <iostream>
using namespace std;
#define EPSILION 0.001
double func(double x){
    return x*x*x - x*x +2;
}
double derive(double x){
    return 3*x*x - 2*x;
}
void raphson(double x){
    if (func(x)>0) {
        cout<<"Please put other value for x"<<endl;
        return;
    }
    double h= func(x)/derive(x);
    while (abs(h)>=EPSILION) {
        h=(func(x)/derive(x));
        x=x-h;
        cout<<"is The value of the root is :"<< x <<endl;
        
    }
    cout<<"The value of the root is :"<< x <<endl;
}
int main(){
    double a= -20;
    raphson(a);
    return 0;
}

