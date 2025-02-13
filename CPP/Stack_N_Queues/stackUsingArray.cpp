#include <bits\stdc++.h>
using namespace std;

class stackUsingArray
{
	int *data;
	int capacity;
	int nextIndex;

public:
	stackUsingArray(){

		data = new int[4];
		capacity = 4;
		nextIndex = 0;

	}	


	bool isEmpty(){
		return nextIndex == 0;
	}

	void push(int element){

		if(nextIndex == capacity){
			int *newData = new int[ 2*capacity ];
			for (int i = 0; i < capacity; i++)
			{
				newData[i] = data[i];

			}
			capacity *= 2;
			delete [] data;
			data = newData;
		}

		data[nextIndex] = element;
		nextIndex++;
	}

	int pop(){
		if(isEmpty()){

			cout<<"\nStack is is Empty !";
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex]; 
	}

	int top(){
		if(isEmpty()){

			cout<<"\nStack is is Empty !";
			return INT_MIN;
		}
		return data[nextIndex-1];

	}

	int size(){
		return nextIndex;
	}
};