#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Pair
{

	T x; T y;

public:
	
	void setX( T x ){
		this->x = x;
	}
	
	void setY( T y ){
		this->y = y;
	}

	T getX(){
		return x;
	}

	T getY(){
		return y;
	}	

};

int main(int argc, char const *argv[])
{
	Pair<int> p1;

	p1.setX(10);
	p1.setY(20);

	cout<<p1.getX()<<" "<<p1.getY()<<endl;


	Pair<double> p2;

	p2.setX(10.34);
	p2.setY(20.87);

	cout<<p2.getX()<<" "<<p2.getY()<<endl;

	Pair<char> p3;

	p3.setX(97);
	p3.setY(98);

	cout<<p3.getX()<<" "<<p3.getY()<<endl;

	return 0;
}