package Leetcode;

import java.util.HashMap;
import java.util.Map;

// Bruteforce solution.
class Solution1 {
    public int[] twoSum(int[] nums, int target) {
        int i,j;
        for( i=0; i<nums.length; i++ ){
            for( j=i+1; j<nums.length; j++ ){
                if((nums[i]+nums[j])==target){
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{};
    }
}

// Better solution using Hashing.
class Solution2 {
    public int[] twoSum(int[] nums, int target) {

        Map<Integer,Integer> map = new HashMap<>();

        for( int i=0; i<nums.length; i++ ){

            int key = target-nums[i];
            if(map.containsKey(key)){
                return new int[]{map.get(key),i};
            }
            map.put(nums[i],i);
        }

        return new int[]{};
    }
}

// Better solution using Two Pointer.
// i=0; j=ar.length-1;
// while(i<j)
// nums[i]+nums[j]==target. then, return i,j.
// if < target. then, i++;
// if > target. then, j++;