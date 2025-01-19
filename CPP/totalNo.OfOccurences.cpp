#include <bits/stdc++.h>
using namespace std;

   
    int firstOccurence( int arr[], int n, int x ){
        
        int start = 0, end = n-1;
        int index = -1;
        int mid = start + ( end - start ) / 2;
        
        while ( start <= end ){
            
            if( arr[mid] == x ){
                index = mid;
                end = mid - 1; 
            }
            else if( arr[mid] > x ){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
            mid = start + ( end - start ) / 2;
        }
        return index;
    }
    
    int lastOccurence( int arr[], int n, int x ){
        
        int start = 0, end = n-1;
        int index = -1;
        int mid = start + ( end - start ) / 2;
        
        while ( start <= end ){
            
            if( arr[mid] == x ){
                index = mid;
                start = mid + 1; 
            }
            else if( arr[mid] > x ){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
            mid = start + ( end - start ) / 2;
        }
        return index;
    }
    


int main(int argc, char const *argv[])
{
	int arr[] = { 1, 2, 2, 3, 3, 3, 3, 4 };
	int n = 8, x = 2;

	int countLeft = firstOccurence( arr, n, x );
	int countRight = lastOccurence( arr, n, x );

	cout<<"\nTotal Number of Occurences = "<<countRight - countLeft + 1;
	return 0;
}