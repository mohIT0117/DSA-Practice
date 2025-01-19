#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Queue {

	T *data;
	int nextIndex;
	int frontIndex;
	int size;
	int capacity;

public:

	Queue(int s){
		data = new T[s];
		nextIndex = 0;
		frontIndex = -1;
		size = 0;
		capacity = s;		
	}

	int getSize(){
		return size;
	}

	bool isEmpty(){
		return size==0;
	}

	T front(){
		return data[frontIndex];
	}

	T dequeue(){
		if(isEmpty()){
			cout<<"Queue is Empty !"<<endl;
			return 0;
		}

		T ans = data[frontIndex];
		size -= 1;
		frontIndex = (frontIndex + 1) % capacity;

		if(size == 0){
			frontIndex = -1;
			nextIndex = 0;
		}
		

		return ans;

	}

	void enqueue( T element ){
		if(size == capacity){
			T *newData = new T[2 * capacity];
			int j=0;
			for (int i = frontIndex; i < capacity; i++,j++)
			{
				newData[j] = data[i];				
			}
			for (int i = 0; i < frontIndex; i++)
			{
				newData[j] = data[i];
			}
			
			delete [] data;
			data = newData;
			frontIndex = 0;
			nextIndex = capacity;
			capacity *= 2;
			// cout<<"Queue is Full !"<<endl;
			// return;
		}



		data[nextIndex] = element;
		if (isEmpty())
		{
			frontIndex = 0;
		}
		size += 1;
		nextIndex = (nextIndex + 1) % capacity;
	}

};