#include<iostream>
using namespace std;


 	int binarySearch(int x){
        int s = 0, e = x;
        long long int mid = s+(e-s)/2;
        int ans = -1;

        while(s<=e){
            long long int square = mid*mid;
            if( square == x){
                return mid;
            }
            if( square < x ){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

    double morePreciseSqrt( int num, int tempSol, int precision ){

    	double factor = 1;
    	double ans;

    	for (int i = 1; i <= precision; i++)
    	{
    		factor = factor/10;
    		for (double j = tempSol; j*j < num; j=j+factor)
    		{
    			ans = j;
    		}
    		
    	}
    	return ans;
    }

int main(){

	int num; int precision;
	cout<<"\nEnter a number and precision = ";
	cin>>num>>precision;
	

	int tempSol = binarySearch( num );

	cout<<"\nSQRT = "<<morePreciseSqrt( num, tempSol, precision );

	return 0;
}