#include <iostream>
#include <climits>
int getMax(int array[],int size);
int getMin(int array[],int size);
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
   cout<< "MAXIMUM VALUE" <<getMax(numArray,size);
   cout<< "MINIMUM VALUE" <<getMin(numArray,size);
	return 0;
}
int getMax(int array[],int size){
   int max = INT_MIN;
   for (int i = 0; i< size; i++){
      if (array[i]>= max){
         max = array[i];
      };
   }
   return max;
}
int getMin(int array[],int size){
   int min = INT_MAX;
   for (int i = 0; i< size; i++){
      if (array[i]<= min){
         min = array[i];
      };
   }
   return min;
}
