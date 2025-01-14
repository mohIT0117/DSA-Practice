package Leetcode;

// Optimal Solution - using Binary Search
class SolutionB1 {
    public int findMin(int[] nums) {
        int size = nums.length;
        int i=0,j=size-1,mid;
        while(i<j){
            mid = i+(j-i)/2;
            if(nums[mid]>nums[j]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return nums[i];
    }
}
