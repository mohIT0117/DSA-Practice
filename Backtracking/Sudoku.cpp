#include <iostream>
using namespace std;


void print( int** box, int n ){

	cout<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<box[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool fillSudokuHelper( int** box, int** filled, int n, int x, int y ){

	if ( x == n-1 && y == n-1 && filled[x][y] == 1 )
	{
		return true;
	}

	

	
	return false;
}


bool fillSudoku( int** box, int** filled, int n ){

	return fillSudokuHelper( box, filled, n, 0, 0 );
}


int main(int argc, char const *argv[])
{
	// Making Input Fields
	int n = 9;
	int** box = new int*[n];
	for (int i = 0; i < n; i++)
	{
		box[i] = new int[n];
	}

	// Making filled flag 
	int** filled = new int*[n];
	for (int i = 0; i < n; i++)
	{
		filled[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			filled[i][j]=0;
		}
	}


	// Taking Input from user
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>box[i][j];
			if ( box[i][j] != 0 )
			{
				filled[i][j]=1;
			}
		}
	}

	cout<<fillSudoku( box, filled, n )<<endl;

	print( box, n );

	return 0;
}

/*

9 0 0 0 2 0 7 5 0                                                                                                                                                                   
6 0 0 0 5 0 0 4 0                                                                                                                                                                   
0 2 0 4 0 0 0 1 0                                                                                                                                                                   
2 0 8 0 0 0 0 0 0                                                                                                                                                                   
0 7 0 5 0 9 0 6 0                                                                                                                                                                   
0 0 0 0 0 0 4 0 1                                                                                                                                                                   
0 1 0 0 0 5 0 8 0                                                                                                                                                                   
0 9 0 0 7 0 0 0 4                                                                                                                                                                   
0 8 2 0 4 0 0 0 6

*/