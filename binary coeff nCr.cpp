#include <iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for (int i=2;i<=num;i++){
         fact*=i;
    }
    return fact;
   
}

int main() {
    int N,R;
    cin>>N>>R;
int Binary_coeff_combinational=(factorial(N))/((factorial(N-R))*factorial(R));
cout<<Binary_coeff_combinational;
    return 0;
}
