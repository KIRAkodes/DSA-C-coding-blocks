#include<iostream>
using namespace std;
int main() {
	int fmin;  // min value of farenheit
	cin>>fmin;
    int fmax; // max val of  farenheit
	cin>>fmax;
	int step; // step /jump
	cin>>step;
	int c;
	int f=fmin;

	while (f<=fmax && f>=fmin){
		c= (5*(f-32))/9;
		cout<<f<<"\t"<<c<<endl;
		f=f+step;
	}
	return 0;
}
