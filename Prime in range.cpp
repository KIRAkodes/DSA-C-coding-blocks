#include <iostream>
#include <cmath>
using namespace std;

bool Prime_check(int num){
    for (int i =2;i<=sqrt(num);i++){
    if (num%i==0){
        return false;
    }
}
return true;
}

int main() {
    int start , end;
    cin>>start>>end;
    for (int i=start;i<=end;i++){
        if(Prime_check(i))
        {
            cout<<i<<" ";
            }
    }
    return 0;

}
