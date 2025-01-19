#include<iostream>
using namespace std;

/*

bool hasPathHelper( int** ar, int n, int** visited, int x, int y ){

	if ( x==n-1 && y==n-1 )
	{
		return true;
	}

	if ( x<0 || y<0 || x>=n || y>= n || ar[x][y]==0 || visited[x][y]==1 )
	{
		return false;
	}

	visited[x][y] = 1;

	if( hasPathHelper( ar, n, visited, x+1, y ) )
	{
		return true;
	}
	if( hasPathHelper( ar, n, visited, x, y+1 ) )
	{
		return true;
	}
	if( hasPathHelper( ar, n, visited, x-1, y ) )
	{
		return true;
	}
	if( hasPathHelper( ar, n, visited, x, y-1 ) )
	{
		return true;
	}

	visited[x][y] = 0;

	return false;
}


bool hasPath( int** ar, int n ){

	int **visited = new int*[n];
	for (int i = 0; i < n; i++)
	{
		visited[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			visited[i][j] = 0;
		}
	}

	return hasPathHelper( ar, n, visited, 0, 0 );
}

*/

void PrintHelper( int** ar, int n, int** visited, int x, int y ){

	if ( x==n-1 && y==n-1 )
	{
		visited[x][y] = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout<<visited[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return ;
	}

	if ( x<0 || y<0 || x>=n || y>= n || ar[x][y]==0 || visited[x][y]==1 )
	{
		return ;
	}

	
	
	visited[x][y] = 1;

	PrintHelper( ar, n, visited, x+1, y );
	PrintHelper( ar, n, visited, x, y+1 );
	PrintHelper( ar, n, visited, x-1, y );
	PrintHelper( ar, n, visited, x, y-1 );

	visited[x][y] = 0;

	return ;
}


bool hasPath( int** ar, int n ){

	int **visited = new int*[n];
	for (int i = 0; i < n; i++)
	{
		visited[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			visited[i][j] = 0;
		}
	}

	PrintHelper( ar, n, visited, 0, 0 );

	return true;

	for (int i = 0; i < n; i++)
	{
		delete[] visited[i];
	}

	delete[] visited;

}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int** ar = new int*[n];
	for (int i = 0; i < n; i++)
	{
		ar[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin>>ar[i][j];
		}
	}

	// cout<<"\n"<<hasPath( ar, n );

	cout<<"\n"<<hasPath( ar, n );

	for (int i = 0; i < n; i++)
	{
		delete[] ar[i];
	}

	delete[] ar;

	return 0;
}