//Q. find the pairs of integers from the array whose
//sum is equal to the sum given/asked by user
#include <iostream>

using namespace std;

int main()
{
    //you can take input from user and then sort the
    //array first using any sorting method or else
    //just give the array yourself

    int a[] = {1, 3, 5, 7, 10, 11, 12, 13};
    // you can also ask the user for what sum  pairs he is looking for
    int asked_sum = 16;
    // we will traverse from both ends of the array to keep complexity O(N).
    int i = 0;                           //from starting element of array
    int j = sizeof(a) / sizeof(int) - 1; // for starting from the end of array
    while (i < j)
    {
        int current_sum = a[i] + a[j];
        // we have assumed that the sorted array is in ascending order
        // therefore we use j-- when current_sum > asked_sum
        //and i++ when current_sum < asked_sum

        if (current_sum > asked_sum)
        {
            j--;
        }
        else if (current_sum < asked_sum)
        {
            i++;
        }
        else if (current_sum = asked_sum)
        {
            cout << a[i] << " and " << a[j] << endl;
            i++;
            j--;
        }
    }
    return 0;
}
