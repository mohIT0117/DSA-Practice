// First and Last Occurence of an element in an array.


vector<int> find(int arr[], int n , int x )
{
    int i=0;
    int firstIndex = -1;
    int lastIndex = -1;
    
    while(i<n){
        
        if(arr[i] == x){
           
            if(firstIndex == -1){
                
             firstIndex = i;
        }
        lastIndex = i;
            
        }
         
        i++;
    }
    return {firstIndex,lastIndex};
    
}

// Using Binary Search

class Solution
{
    public:
    
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
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> ans;
        int firstOcc = firstOccurence( arr, n, x );
        int lastOcc = lastOccurence( arr, n, x );
        
        ans.push_back( firstOcc );
        ans.push_back( lastOcc );
        
        return ans;
    }
};
