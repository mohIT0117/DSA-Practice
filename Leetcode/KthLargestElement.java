// Optimal solution using Minheap - Time: O(n) & Space: O(k)
// Time Complexity: O(n * log(K)), Each insertion and removal operation in a heap takes O(log(K)), 
// and we perform this operation n times for the array.
class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int i=0; i<k; i++){
            pq.add(nums[i]);
        }
        for(int i=k; i<nums.length; i++){
            if(nums[i]>pq.peek()){
                pq.poll();
                pq.add(nums[i]);
            }
        }
        return pq.peek();
    }
}

class Solution {
    public static int kthSmallest(int[] arr, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0; i<k; i++){
            pq.add(arr[i]);
        }
        for(int i=k; i<arr.length; i++){
            if(arr[i]<pq.peek()){
                pq.poll();
                pq.add(arr[i]);
            }
        }
        return pq.peek();
    }
}