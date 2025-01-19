#include <bits/stdc++.h>
#include "queueUsingLL.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	Queue q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);

	cout<<q.front()<<endl;
	
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;

	cout<<q.getSize()<<endl;
	cout<<q.isEmpty()<<endl;
	
	return 0;
}