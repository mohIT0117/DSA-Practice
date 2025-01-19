#include <bits/stdc++.h>
#include "queueUsingArray.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	Queue<string> q(5);

	q.enqueue("Ankit");
	q.enqueue("Boman");
	q.enqueue("Chetan");
	q.enqueue("Deepak");
	q.enqueue("Ekta");
	q.enqueue("Farah");

	cout<<q.front()<<endl;
	
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;

	cout<<q.getSize()<<endl;
	cout<<q.isEmpty()<<endl;



	return 0;

}

