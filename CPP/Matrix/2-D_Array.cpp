#include <bits/stdc++.h>
using namespace std;

void printMatrix( int ar[][10], int m, int n ){

	int i,j;
	for ( i = 0; i < m; i++ )
	{
		cout<<endl;
		for ( j = 0; j < n; j++ )
		{
			cout<<ar[i][j]<<" ";
		}
	}
}

/*
void findElement( int ar[][10], int m, int n, int ele ){

	int i=0, j=m-1; 
	while( i<m && j>=0 ){
		if ( ar[i][j] == ele )
		{
			cout<<"\n row : "<<i<<" column : "<<j;
			return ;
		}
		else if ( ele > ar[i][j] )
		{
			i++;
		}
		else{
			j--;
		}
	}
	cout<<-1;
}
*/

void rotateMatrix90AntiClockwise( int ar[][10], int m, int n ){

	int i,j;

	
	for ( i = 0; i < m; i++ )
	{
		int temp = 0;
		for ( j = i; j < n; j++ )
		{
			temp = ar[j][i];
			ar[j][i] = ar[i][j];
			ar[i][j] = temp;		
		}
	}
	for (int i = 0; i < n; i++) {
		int temp =0;
    	for (int j = 0; j < n / 2; j++) {
    		temp = ar[j][i];
			ar[j][i] = ar[n-j-1][i];
			ar[n-j-1][i] = temp;	
      	}
  }

}


int main(int argc, char const *argv[])
{
	int ar[10][10], m, n;
	cout<<"\n Enter Row and column : ";
	cin>>m>>n;

	int i,j;
	for ( i = 0; i < m; i++ )
	{
		cout<<"Enter value for row "<<i;
		for ( j = 0; j < n; j++ )
		{
			cout<<" column "<<j<<" : ";
			cin>>ar[i][j];
		}
	}

	// findElement( ar, m, n, 34 );

	printMatrix( ar, m, n );

	cout<<endl;

	rotateMatrix90AntiClockwise( ar, m, n );

	cout<<endl;

	printMatrix( ar, m, n );

	return 0;
}

// 5 4 5 7 8 20 9 11 13 30 10 20 29 40 15 23 30 50 18 25 33 60
// 3 3 1 2 3 4 5 6 7 8 9