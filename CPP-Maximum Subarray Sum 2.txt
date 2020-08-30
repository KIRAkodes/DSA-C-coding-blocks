/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()	{
  int n;
  cin >> n;
  int a[1000];
//array for cummulative sum
int cum_sum={0};
int max_sum=0;
int current_sum=0;

int left=-1;    //for leftmost element of subarray
int right=-1; // for rightmost element of subarray


//INPUT ARRAY
cin>>a[0];
cum_sum[0]=a[0];
  for (int i = 1; i < n; i++)
    {
      cin >> a[i];
cum_sum[i]=cum_sum[i-1]+a[i]  ;
    }
//to generate all subarrays

//TRAVERSES ARRAY
  for (int i = 0; i < n; i++)	{

//TRAVERSES SUBARRAY
      for (int j = i; j < n; j++)	{

//OUTPUTS SUBARRAY (elements of subarray(i,j))
                   current_sum=0;
                   current_sum=cum_sum[j]- cum_sum[i-1];

	 
	    //update max_sum
	   if(current_sum>max_sum) {
	max_sum=current_sum;
	left=i;
	right=j;	
	   }
	}
             }
	//print the max sum
	cout<<max_sum;	
//print the subarray
	for(int k=left;k<=right;<<k++) {
	cout<<a[k]<<",";
	}
  return 0;
}
//thisn program runs with 2 loops
so it is better optimised than the one 
where we used 3 loops
