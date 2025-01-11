#include <iostream>
using namespace std;
/*
bool isPalindrome( string str, int i, int j){

	while ( i<j ){
		if ( str[i] != str[j] ) 
		{
			return false;
		}
		i++; j--;
	}

	return true;
}
*/

int main()
{
	int x = 10, y = 4;

	cout<<"\nx = 10, y = 4"<<x<<" "<<y;
	swap( x, y );
	cout<<"\nx = 4, y = 10"<<x<<" "<<y;
    
    return 0;
}

/*
	string str;
    cout<<"\nEnter a string : ";
    getline(cin,str);
    
    int n = str.length();
    int maxLen = 1;

    for (int i = 0; i < n; i++)
    {
    	for (int j = n-1 ; j >= 0; j--)
    	{
    		if (isPalindrome( str, i, j ))
    		{
    			maxLen = max ( maxLen, ( j-i+1 ));
    		}
    	}
    }

    cout<<"\n"<<maxLen;
    */
   