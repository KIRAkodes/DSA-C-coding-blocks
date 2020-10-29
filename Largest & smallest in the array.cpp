#include<iostream>
// climits hasINT_MAX and INT_MIN as the max range of values in int.
#include<climits>  
using namespace std;
//find largest & smallest no. in an array

int main( )  {
    
 int n ;
cin>>n;

// array input	

	int a[1000];
	for(int i= 0; i<n ;i++)  {
	cin>>a[i];
        
            		}

int largest=INT_MIN;
int smallest =INT_MAX;

//smallest
	for (int i=0; i<n; i++)  {
	if (a[i] <smallest)   {
	smallest =a[i] ;
		}
//largest
	if (a[i] > largest)    {
	largest= a[i] ;
		}
	}
   
	cout<<"smallest is:"<<smallest<<endl;
	cout<<" largest is :"<<largest<<endl;

	return 0;
		}

// ANOTHER METHOD TO PRINT THE LARGEST
 AND SMALLEST WOULD BE  WITHOUT USING
IF CONDITION STATEMENT TO UPDATE THE
VALUE USING THIS CONDITION.

LARGEST = MAX( LARGEST,A[I] );
SMALLEST = MIN(SMALLEST,A[I]);
