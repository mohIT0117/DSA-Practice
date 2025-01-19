#include <iostream>
#include <climits>
using namespace std;

/*
int minStepsTo1( int n ){

	if ( n == 1 )
	{
		return 0 ;
	}

	

	int x=INT_MAX;
	int y=x;
	int z=y ;

	x = minStepsTo1( n-1 );
	
	if ( n%2==0 )
	{
		y = minStepsTo1( n/2 );
	}
	if ( n%3==0 )
	{
		z = minStepsTo1( n/3 );
	}

	int ans = min( x, min( y, z ));

	return 1+ans;

}

int minStepsTo1_Memo( int n, int *arr ){

	if ( n == 1 )
	{
		arr[n] = 0;
		return arr[n];
		
	}

	if ( arr[n] != -1 )
	{
		return arr[n];
	}

	int x=INT_MAX;
	int y=x;
	int z=y ;

	x = minStepsTo1_Memo( n-1, arr );
	
	if ( n%2==0 )
	{
		y = minStepsTo1_Memo( n/2, arr );
	}
	if ( n%3==0 )
	{
		z = minStepsTo1_Memo( n/3, arr );
	}

	int ans = min( x, min( y, z ));

	arr[n] = 1+ans;

	return 1+ans;
}
*/

int minStepsTo1_it( int n ){

	int *arr = new int[n+1];

	
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;

	int b,c;

	for ( int i = 4; i <= n; i++ )
	{
		b=c=n;
		
		if ( i%2==0 )
		{
			b = arr[i/2];
		}
		if ( i%3==0 )
		{
			c = arr[i/3];
		}

		arr[i] = 1+min( arr[i-1], min( b, c ));
	}

	int output = arr[n];
	delete[] arr;
	return output;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	// cout<<minStepsTo1( n );

	// int *arr = new int[ n+1 ];
	// for (int i = 0; i <=n ; i++ )
	// {
	// 	arr[i] = -1;
	// }
	// cout<<minStepsTo1_Memo( n, arr );
	// delete[] arr;

	cout<<minStepsTo1_it(  n );

	return 0;
}