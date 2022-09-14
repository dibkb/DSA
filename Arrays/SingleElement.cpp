#include <iostream>
using namespace std;
int findSum(int arr[], int s, int e)
{
   int sum = 0;
   for (int i = s; i <= e; i++)
   {
      sum += arr[i];
   }
   return sum;
};
int findSingleEle(int arr[], int size)
{
   int start = 0, end = size - 1, mid;
   // for (int i = 0; i <= end; i++)
   // {
   //    cout << "Lsum till " << i << " is " << findSum(arr, 0, i) << "   ";
   //    cout << "Rsum after  " << i << " is " << findSum(arr, i + 1, end);
   //    cout << endl;
   //    cout << endl;
   //    cout << endl;
   // }
   while (start < end)
      mid = start + (end - start) / 2;
   {
      if (findSum(arr, start, mid - 1) % 2 == 0 &&)
      {
         start = mid + 1;
      }
      else
      {
         end = mid - 1;
      }
   }
   return end;
};
int main()
{
   int nums[9] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
   int nums_2[7] = {3, 3, 7, 7, 10, 7, 7};
   cout << "single ele of " << findSingleEle(nums, 9) << endl;
   // cout << "single ele of " << findSingleEle(nums_2, 7) << endl;
   // cout << "find sum " << findSum(nums, 3, 5);
   return 0;
}
