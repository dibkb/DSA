#include <iostream>
using namespace std;
int findPivot(int nums[], int size)
{
   int start = 0;
   int end = size - 1;
   int mid = start + (end - start) / 2;
   while (start < end)
   {
      if (nums[mid] >= nums[0])
      {
         start = mid + 1;
      }
      else
      {
         end = mid;
      }
      mid = start + (end - start) / 2;
   }
   return end;
};
int binarySearch(int nums[], int start, int end, int target)
{
   int mid = start + (end - start) / 2;
   while (start <= end)
   {
      if (nums[mid] == target)
      {
         return mid;
      }
      else if (nums[mid] > target)
      {
         end = mid - 1;
      }
      else
      {
         start = mid + 1;
      }
      mid = start + (end - start) / 2;
   }
   return -1;
};
int findTarget(int nums[], int size, int target)
{
   int index = findPivot(nums, size);
   if (target >= nums[index] && target <= nums[size - 1])
   {
      return binarySearch(nums, index, size - 1, target);
   }
   else
   {
      return binarySearch(nums, 0, index - 1, target);
   }
};
bool sumOfSquaresExist(int target)
{
   int start = 0, end = sqrt(target), square;
   while (start < end)
   {
      square = start * start + end * end;

      if (square == target)
      {
         return true;
      }
      else if (square < target)
      {
         start++;
      }
      else
      {
         end--;
      }
   }
   return false;
};
int main()
{
   // ------------------------- Left and Right Occurance ------------------------------------

   // ------------------------- Find Pivot ----------------------
   //             [4,5,6,7,0,1,2] -------------> index 3
   int arr[7] = {4, 5, 6, 7, 0, 1, 2};
   int brr[7] = {1, 3, 5, 6, 77, 55};
   // cout << " find Pivot of" << findPivot(arr, 7);
   // cout << " bineary search 69:  " << binarySearch(brr, 0, 5, 69);
   // cout << "search 1:  " << findTarget(arr, 7, 1);

   // ====================== Sum of Squares ============================

   // -------------------------633. Sum of Square Numbers------------------------

   cout << sumOfSquaresExist(3);
   // cout << "Hello";
   return 0;
}