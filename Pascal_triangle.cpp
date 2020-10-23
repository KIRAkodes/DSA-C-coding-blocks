// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 

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
   int n;
   cin>>n;
  
   for (int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
            int pascal_triangle= factorial(i)/(factorial(i-j)*factorial(j));
           cout<<pascal_triangle<<" ";
       }
       cout<<endl;
   }
    return 0;
}
