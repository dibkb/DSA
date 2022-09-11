#include <iostream>
using namespace std;
void reverseArray(int array[], int size){
   // for (int i = 0; i < size; i++){
   //    array[i] = array[size-(i+1)];
   // }
   int start = 0;
   int end = size-1;
   int temp;
   while(start<=end){
      temp = array[start];
      array[start] = array[end];
      array[end] = temp;
      start++;
      end--;
   }
};
void printArray(int array[],int size){
   for (int i = 0; i < size;i++){
      cout << array[i] <<" ";
   };
}
int main(){
   // reversing an array;
   int myArrayOne[6] = {1,2,3,4,5,6};
   int myArrayTwo[5] = {48,23,1,23,-4};
   // ----- reverse function-------------
   reverseArray(myArrayOne,6);
   reverseArray(myArrayTwo,5);
   cout <<"PRINTING REVERSED ARRAY " <<endl;
   printArray(myArrayOne,6);
   cout<<endl;
   printArray(myArrayTwo,5);
   return 0;
}

