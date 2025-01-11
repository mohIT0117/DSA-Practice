#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    // starting from index 1. assuming that element 0 is at right position.
    for( int i=1; i<=n-1; i++ ){
        
        // iterate from current position of the element.
        int j=i;
        
        // check if element at left is greater than current and iterating j till index 1, because we  are checking for arr[j-1].
        while( j>0 && arr[j-1]>arr[j] ){
            
            swap( arr[j-1] , arr[j] );
            
            j--;
        }
        
    }
}



void bubbleSort( int arr[], int n ){


    for( int i=0; i<=n-1; i++ ){
        
        for( int j = 0; j<=n-2; j++ ){
            if( arr[j]>arr[j+1] ){
                swap( arr[j], arr[j+1] );
            }
        }
    }
}



// select minimum from an array and then swap it with i th place.
void selectionSort( int ar[], int n ){

// first loop will run till n-2 element, because after swapping with min element placed at n-1 element, Array will get sorted already.
	for (int i = 0; i < n-1; i++)
	{
		// let consider the first elment as the minimum 
		int minIndex = i;
		// second loop will start from starting index of first loop, because as the elements behind the first pointer are already sorted.
		for (int j = i; j < n; j++)
		{
			// finding mini element among the array
			if ( ar[j] < ar[minIndex] )
			{
				minIndex = j;
			}
		}

		swap( ar[minIndex], ar[i] );
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ar[n];
	
	for (int i = 0; i < n; i++)
	{
		cin>>ar[i];
	}

	// selectionSort( ar, n );
	// bubbleSort( ar, n );
	insertionSort( ar, n );

	cout<<endl;

	for (int i = 0; i < n; i++)
	{
		cout<<ar[i]<<" ";
	}

	

	return 0;
}