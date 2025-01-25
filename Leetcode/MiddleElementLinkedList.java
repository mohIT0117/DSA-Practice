// Optimal Solution using Two Pointers Approach- Time: O(n) Space: O(1)
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode one = head;
        ListNode two = head;
        while(two!=null && two.next!=null){
            one = one.next;
            two = two.next.next;
        }
        return one;
    }
}

// Bruteforce- count the size of linked list and evaluate mid, traverse to mid and return.