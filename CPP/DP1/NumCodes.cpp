#include <iostream>
using namespace std;

// int num_codes( int * input, int size ){

// 	if ( size ==0 )
// 	{
// 		return 1;
// 	}
// 	if ( size ==1 )
// 	{
// 		return 1;
// 	}

// 	int output = num_codes( input, size-1 );

// 	if ( ( input[size-2]*10+input[size-1] ) <= 26 )
// 	{
// 		output += num_codes( input, size-2 );
// 	}

// 	return output;
// }

// int num_codes_Memo( int * input, int size, int * arr ){

// 	if ( size ==0 )
// 	{
// 		return 1;
// 	}
// 	if ( size ==1 )
// 	{
// 		return 1;
// 	}

// 	if ( arr[size] > 0 )
// 	{
// 		return arr[size];
// 	}

// 	int output = num_codes_Memo( input, size-1, arr );

// 	if ( ( input[size-2]*10+input[size-1] ) <= 26 )
// 	{
// 		output += num_codes_Memo( input, size-2, arr );
// 	}

// 	arr[size] = output;

// 	return output;
// }

int num_codes_it( int *input, int size ){

	int *output = new int[ size+1 ];
	output[0] = 1;
	output[1] = 1;

	for (int i = 2; i <= size; i++ )
	{
		output[i] = output[i-1];
		if ( input[i-2]*10 + input[i-1] <=26 )
		{
			output[i] += output[i-2];
		}
	}

	int ans = output[size];
	delete[] output;
	return ans;

}

int main(int argc, char const *argv[])
{
	
	// int input[] = { 1,1,1,1,1,1,1,1,1,1 };
	// int size = 10;
	// cout<<" No. of Codes = "<<num_codes( input, size ); 


	// int input[] = { 2,5,1,1,4 };
	// int size = 5;
	// int arr[size+1] = {0};
	
	// cout<<" No. of Codes = "<<num_codes_Memo( input, size, arr );
	
	int input[] = { 1,1,1,1,1,1,1,1,1,1 };
	int size = 10;
		
	cout<<" No. of Codes = "<<num_codes_it( input, size );


	return 0;
}