#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;

     while(n--)
     {
          long k;
          cin>>k;

          int odd=0,even=0;

          while(k>0)
          {
               int digit = k%10;
               if(digit%2==0)
                    even+=digit;
               else
                    odd+=digit;
               k/=10;
          }
     if(even%4==0)
          cout<<"Yes\n";
     else if(odd%3==0)
          cout<<"Yes\n";
     else
          cout<<"No\n";
     }

	return 0;
}
