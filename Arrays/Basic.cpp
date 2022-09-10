#include <iostream>
using namespace std;
void printIntArray(int array[],int size);
int main() {
	int arrayOne[4] ={4,7,34,53};
	// printIntArray(arrayOne,4);
	char charOne[5]={'a','b','c','^','-'};
	for(int i =0;i< 5;i++){
		cout<<charOne[i] <<endl;
	}
	return 0;
}

void printIntArray(int array[],int size){
	cout<< "PRINTING ARRAY"<<endl;
	for(int i = 0;i< size;i++){
		cout<< array[i] << " ";
	}
};

