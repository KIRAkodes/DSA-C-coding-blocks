// it's like arranging cards while playing 


#include <iostream>

using namespace std;

void insertion_sort (int arr[], int n)
{
  for (int i = 1; i < n; i++)
    {
      int temp = arr[i];
//place the current element at the right place in the sorted part

      int j = i - 1;
      while (j >= 0 && arr[j] > temp)
	{
	  arr[j + 1] = arr[j];
	  j = j - 1;
	}
      arr[j + 1] = temp;
    }
}

int main ()
{
  int n, key;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++){
      cin>>a[i];
  }
  insertion_sort(a,n);
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << ",";
    }
  return 0;
}
