#include <iostream>
using namespace std;
void printIntArray(int array[],int size);
int main() {
	int arrayOne[4] ={4,7,34,53};
	printIntArray(arrayOne,4);
	return 0;
}
void printIntArray(int array[],int size){
	cout<< "PRINTING ARRAY"<<endl;
	for(int i = 0;i< size;i++){
		cout<< array[i] << " ";
	}
};

