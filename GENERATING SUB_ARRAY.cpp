//GEBERATING SUBARRAYS


#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int a[1000];
//INPUT ARRAY
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }


//TRAVERSES ARRAY
  for (int i = 0; i < n; i++)
    {
//TRAVERSES SUBARRAY
      for (int j = i; j < n; j++)
	{
//OUTPUTS SUBARRAY
	  for (int k = i; k <=j; k++)
	    {
	      cout << a[k]<<",";
	    }
	    cout<<endl;
	}
    }
  return 0;
}
