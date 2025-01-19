#include <iostream>
using namespace std;

int longestIncreasingSubsequence( int input[], int n ){

	int *ans = new int[ n+1 ];
	ans[0] = 0;
	ans[1] = 1;
	for (int i = 2; i <= n ; i++ )
	{
		if ( input[i] > input[i-1] )
		{
			ans[i] = ans[i-1] + 1;
		}
		else{
			ans[i] = ans[i-1];
		}
	}

	int output = ans[n];
	delete[] ans;

	return output;
}

int main(int argc, char const *argv[])
{
	// 5, 4, 11, 1, 16, 8
	int input[] = {4,10,4,3,8,9};
	int n = 6;
	cout<<"\nLIS : "<<longestIncreasingSubsequence( input, n );

	return 0;
}