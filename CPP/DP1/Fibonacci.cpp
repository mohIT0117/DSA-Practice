#include <iostream>
using namespace std;

int fib( int n ){

	if( n==0 || n==1 ){
		return 1;
	}

	return fib( n-1 )+fib( n-2 );
}

int fib_DP( int n, int *arr ){

	if( n==0 || n==1 ){
		return 1;
	}

	if ( arr[n] > 0 )
	{
		return arr[n];
	}

	int output = fib( n-1 )+fib( n-2 );

	arr[n] = output;

	return output;

}

int fiboi( int n ){

	int *arr = new int[ n+1 ];
	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i <=n ; i++ )
	{
		arr[i] = arr[i-1] + arr[i-2];
	}

	int ans = arr[n];
	delete[] arr;
	return ans;
}

int main(int argc, char const *argv[])
{

	int n;
	cin>>n;

	// cout<<fib( n );

	// int *arr = new int( n+1 );
	// for (int i = 0; i <=n ; i++)
	// {
	// 	arr[i] = 0;
	// }
	// cout<<fib_DP( n, arr );
	

	cout<<fiboi( n );


	return 0;
}