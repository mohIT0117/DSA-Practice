#include <bits\stdc++.h>
#include "stackUsingArray.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
	stackUsingArray s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout<<"\n"<<s.top();

	cout<<"\n"<<s.pop();
	cout<<"\n"<<s.pop();
	cout<<"\n"<<s.pop();

	cout<<"\n"<<s.size();
	cout<<"\n"<<s.isEmpty();


	return 0;

}
