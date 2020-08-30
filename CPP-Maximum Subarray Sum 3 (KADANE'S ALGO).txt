#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int a[1000];
  int current_sum =0;  //or max_ending_here as in KADANE's mentioned
  int max_so_far =0;
  
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  //KADANE'S ALGORITHM FOR MAX_SUBARRAY_SUM
  
  //  Kadane's algorithm is used to look for all
  //  positive contiguous segments of the array (max_ending_here is used for this).
  // And keep track of maximum sum contiguous segment among all positive segments 
  //    (max_so_far is used for this).
  //   Each time we get a positive sum compare it with max_so_far and update
//       max_so_far if it is greater than max_so_far return 0;
    for(int i =0;i <n;i++){
        
        current_sum=current_sum+a[i];
        if (current_sum<0){
            current_sum=0;
        }
        //max_so_far using max function to print max out of current_sumand max_so_far
        max_so_far=max (current_sum,max_so_far)
    }
    cout<<max_so_far<<endl;
    return 0;
}
