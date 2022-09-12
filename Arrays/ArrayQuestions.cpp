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
void swapAlternates(int array[],int size){
   for (int i= 0; i< size -1;i++){
      if(i %2 == 0){
         swap(array[i],array[i+1]);
      }
   }
}
int main(){
   // reversing an array;
   int myArrayOne[6] = {1,2,3,4,5,6};
   int myArrayTwo[5] = {48,23,1,23,-4};
   // ----- reverse function-------------
   // reverseArray(myArrayOne,6);
   // reverseArray(myArrayTwo,5);
   // cout <<"PRINTING REVERSED ARRAY " <<endl;
   // printArray(myArrayOne,6);
   // cout<<endl;
   // printArray(myArrayTwo,5);
   // --------------SWAP ALTERNATES-------------
   swapAlternates(myArrayOne,6);
   swapAlternates(myArrayTwo,5);
      printArray(myArrayOne,6);
   cout<<endl;
   printArray(myArrayTwo,5);
   return 0;
}

