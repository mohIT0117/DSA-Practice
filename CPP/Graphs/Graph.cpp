#include <iostream>
#include <queue>
using namespace  std;

/*
void printDFS( int** edges, int n, int sv, bool* visited ){

	cout<<sv<<" ";
	visited[sv] = true;

	for (int i = 0; i < n; i++)
	{
		if ( i == sv )
		{
			continue;
		}
		
		if ( visited[i] == true )
		{
			continue;
		}
		
		if ( edges[sv][i] == 1 )
		{
			printDFS( edges, n, i, visited );
		}
	}
}

void printBFS( int** edges, int n, int sv, bool* visited  ){

	queue<int> pendingVertices;
	
	pendingVertices.push(sv);
	visited[sv] = true;

	while ( !pendingVertices.empty() ){
		int currentVertex = pendingVertices.front();
		pendingVertices.pop();
		cout<<currentVertex<<" ";
		for (int i = 0; i < n; i++)
		{
			if ( i == currentVertex )
			{
				continue;
			}
			if ( edges[currentVertex][i] == 1 && !visited[i] )
			{
				pendingVertices.push(i);
				visited[i]=true;
			}
		}
	}
	

}

void DFS( int** edges, int n ){
	bool* visited = new bool[n];

	for (int i = 0; i < n; i++)
	{
		visited[i] = false;
	}

	for (int i = 0; i < n; i++)
	{
		if ( !visited[i] )
		{
			printDFS( edges, n, i, visited );
		}
	}


	delete[] visited;
}

void BFS( int** edges, int n ){
	
	bool* visited = new bool[n];

	for (int i = 0; i < n; i++)
	{
		visited[i] = false;
	}

	for (int i = 0; i < n; i++)
	{
		if ( !visited[i] )
		{
			printBFS( edges, n, i, visited );
		}
	}
	delete[] visited;
}
*/

/* 
bool hasPath( int** edges, int n, int sv, int ev, bool* visited ){

	if ( edges[sv][ev] == 1 )
	{
		return true;
	}
	visited[sv] = true;

	bool result;

	for( int i=0; i<n; i++ ){
		if ( !visited[i] && edges[sv][i]==1 )
		{
			result = hasPath( edges, n, i, ev, visited );
		}
		if ( result )
		{
			return true;
		}
	}

	return result;

}

bool hasPath( int** edges, int n, int sv, int ev ){

	bool* visited = new bool[n];

	for (int i = 0; i < n; i++)
	{
		visited[i] = false;
	}

	return hasPath( edges, n, sv, ev, visited );

	delete[] visited;

}
*/

/*
bool getPathDFS( int** edges, int n, int sv, int ev, vector<int> &path ){

	bool* visited = new bool[n];

	for (int i = 0; i < n; i++)
	{
		visited[i] = false;
	}

	if ( sv == ev )
	{
		path.push_back( ev );
		return true;
	}

	if ( edges[sv][ev] == 1 )
	{
		path.push_back( ev );
		path.push_back( sv );
		return true;
	}

	visited[sv] == true;

	bool res = false;

	for (int i = 0; i < n; i++ )
	{
		if ( !visited[i] && edges[sv][i]==1 )
		{
			res = getPathDFS( edges, n, i, ev, path );
			
		}
		if ( res )
		{
			path.push_back( sv );
			return true;
		}
	}
	return res;
}
*/

/*
bool isConnected( int** edges, int n, int sv, bool *visited ){

	

	visited[sv] = true;

	for (int i = 0; i < n; i++)
	{
		if ( i == sv )
		{
			continue;
		}
		
		if ( visited[i] == true )
		{
			continue;
		}
		
		if ( edges[sv][i] == 1 )
		{
			isConnected( edges, n, i, visited );
		}
	}

	for (int i = 0; i < n; i++ )
	{
		if ( !visited[i] )
		{
			return false;
		}
	}

	return true;

}
*/





int main(int argc, char const *argv[])
{
	int n; 
	int e;
	cin>>n>>e;

	int** edges = new int*[n];

	for (int i = 0; i < n; i++)
	{
		edges[i] = new int[n];

		for (int j = 0; j <n; j++)
		{
			edges[i][j] = 0;
		}
	}

	for ( int i = 0; i < e; i++)
	{
		int f,s;
		cin>>f>>s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}

	
	/*
	cout<<"\nprintDFS"<<endl;
	DFS( edges, n );
	cout<<"\nprintBFS"<<endl;
	BFS( edges, n );
	*/

	/*
	cout<<"\n"<<hasPath( edges, n, sv, ev );
	*/
	
	/*
	vector<int> path;
	int ev,sv;
	cout<<"\nvalue of start and end vertex : ";
	cin>>sv>>ev;
	bool result = getPathDFS( edges, n, sv, ev, path );
	for (int i = 0; i < path.size(); i++ )
	{
		cout<<path[i]<<" "; 
	}
	*/

	bool *visited = new bool[n];
	for (int i = 0; i < n; i++ )
	{
		visited[i] = false;
	}

	/*	
	cout<<"\n"<<isConnected( edges, n, 0, visited );
	*/

	
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<"<";
		for (int i = 0; i < count; ++i)
		{
			/* code */
		}
	}

	for (int i = 0; i < n; i++)
	{
		delete[] edges[i];
	}

	delete[] edges;
	


	return 0;
}

/*

8                                                                                      
9                                                                                      
0 4                                                                                    
0 5                                                                                    
4 3                                                                                    
3 2                                                                                    
2 1                                                                                    
1 3                                                                                    
5 6                                                                                    
3 6                                                                                    
6 7  

*/