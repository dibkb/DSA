#include <iostream>
#include <climits>
int getMax(int array[],int size);
int getMin(int array[],int size);
int sumOfArray(int arr[],int size);
using namespace std;
int main() {
   int size;
   int numArray[900];
   cout<<"ENTER YOUR ARRAY SIZE" <<endl;
   cin>>size;
   for(int i=0;i< size;i++){
      cout<<"Enter nums to array" <<endl;
      cin>>numArray[i];
   }
   cout<< "MAXIMUM VALUE " <<getMax(numArray,size) <<endl;
   cout<< "MINIMUM VALUE " <<getMin(numArray,size) <<endl;
   cout<< "SUM OF ARRAY " <<sumOfArray(numArray,size) <<endl;
	return 0;
}
// get max element
int getMax(int array[],int size){
   int max = INT_MIN;
   for (int i = 0; i< size; i++){
      if (array[i]>= max){
         max = array[i];
      };
   }
   return max;
}
// get min element
int getMin(int array[],int size){
   int min = INT_MAX;
   for (int i = 0; i< size; i++){
      if (array[i]<= min){
         min = array[i];
      };
   }
   return min;
}
// get sum
int sumOfArray(int arr[],int size){
   int sum = 0;
   for (int i = 0; i< size;i++){
      sum+=arr[i];
   };
   return sum;
};

