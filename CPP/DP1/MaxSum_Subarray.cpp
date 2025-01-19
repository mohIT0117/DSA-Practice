#include <iostream>
#include <climits>
using namespace std;

// Naukri 360 Coding Ninjas.
// long long maxSubarraySum(vector<int> arr, int n)
// {
//     // Write your code here.
//     long long currentMax = 0;
//  	long long maxTillNow = INT_MIN;

//  	for (int i = 0; i < n; i++ )
//  	{

//  		currentMax += arr[i];

//         if ( currentMax < 0 )
//  		{
//  			currentMax = 0;
//  		}

//  		maxTillNow = max( maxTillNow, currentMax );

 		
 		
//  	}

//  	return maxTillNow;
// }


int maxSum( int ar[], int n ){

	int currentMax = 0;
 	int maxTillNow = INT_MIN;

 	for (int i = 0; i < n; i++ )
 	{

 		currentMax += ar[i];

 		maxTillNow = max( maxTillNow, currentMax );

 		if ( currentMax < 0 )
 		{
 			currentMax = 0;
 		}
 		
 	}

 	return maxTillNow;
}

int main(int argc, char const *argv[])
{
	int ar[] = { 1, 2, 3, 4 };
	int n = 4;

	cout<<"\nMaxSum_Subarray = "<<maxSum( ar, n );

	return 0;
}