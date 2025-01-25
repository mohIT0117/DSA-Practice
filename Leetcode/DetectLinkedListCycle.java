// Optimal Solution- Two Pointer Approach. Time: O(n) & Space: O(1)
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode one = head;
        ListNode two = head;

        while(one!=null && two!=null && two.next!=null){
            one = one.next;
            two = two.next.next;
            if(one==two){
                return true;
            }
        }
        return false;
    }
}