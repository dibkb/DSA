#include <iostream>
using namespace std;
bool searchArray(int array[],int size, int ele);
int main(){
   int myArray[99] = {1,2,3,4,5,98,44,55,22,19,69};
   int key;
   cout<< "Enter element to search " <<endl;
   cin>>key;
   if(searchArray(myArray,11,key)){
      cout << key <<" FOUND" <<endl;
   }else{
      cout << key << " NOT FOUND" <<endl;
   };
   searchArray(myArray,11,key);
   return 0;
}
bool searchArray(int array[],int size, int ele){
   for (int i = 0; i< size; i++){
      if (array[i] == ele){
         return 1;
      }
   }
   return 0;
};
