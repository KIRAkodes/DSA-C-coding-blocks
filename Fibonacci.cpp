#include <iostream>
using namespace std;
void Fibonacci(int num){
    int TERM1=0;
    int TERM2=1;
    int NEXTterm;
    for(int i=0;i<num;i++){
        cout<<TERM1<<endl;
        NEXTterm=TERM2+TERM1;
        TERM1=TERM2;
        TERM2=NEXTterm;
    }
    return;
    }
int main() {
    int n;
    cin>>n;
    Fibonacci(n);

    return 0;
}
