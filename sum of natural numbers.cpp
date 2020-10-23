#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;

// Direct approach
int output =(n*(n+1))/2;
cout<<"output is:"<<output<<endl;

//For  loop approach
int sum=0;
for(int i=0;i<=n;i++){
sum=sum+i;
}
cout<<sum;
}
