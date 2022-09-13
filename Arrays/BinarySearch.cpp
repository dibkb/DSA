#include <iostream>
#include <vector>
using namespace std;
void printIntArray(int array[], int size);
void firstAndLastOccurance(int array[], int size, int key)
{
	vector<int> ocur;
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	while (start <= end)
	{
		if (mid == key)
		{
			ocur.push_back(mid);
		}
		else if (mid > key)
		{
			end = mid - 1;
		}
		else if (mid < key)
		{
			start = mid + 1;
		}
		mid = start + (end - start) / 2;
	}
	cout << "POSITIONS " << ocur[0] << " " << ocur[1];
};
void peakIndex(int array[], int size)
{
	int s = 0;
	int e = size - 1;
	int mid = s + (e - s) / 2;
	while (s < e)
	{
		if ((array[mid - 1] < array[mid]) && (array[mid] > array[mid + 1]))
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
		mid = s + (e - s) / 2;
	}
	cout << "index " << s;
}
int sumArraySum(int array[], int s, int e)
{
	int sum = 0;
	for (int i = s; i <= e; i++)
	{
		sum += array[i];
	}
	return sum;
};
void findPivot(int array[], int size)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	for (int i = 0; i < size; i++)
	{
		// cout << "INDEX " << i << endl;
		// cout << "SUM on left " << sumArraySum(array, start, i - 1);
		// cout << " SUM on right " << sumArraySum(array, i + 1, end) << endl;
		if (sumArraySum(array, start, i - 1) == sumArraySum(array, i + 1, end))
		{
			cout << "PIVOT " << i;
		}
	}
};
int main()
{
	//  Question 1:
	// First and Last Position of an Element In Sorted Array
	int arrayOne[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// -----------------------------------Question 2-------------------------------------
	// Find Pivot element;
	int nums[6] = {1, 7, 3, 6, 5, 6};
	findPivot(nums, 6);

	return 0;
}

void printIntArray(int array[], int size)
{
	cout << "PRINTING ARRAY" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
};