// Optimal Solution using pointers. Time:O(n) & Space:O(1).
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode current = head;
        ListNode prev = null;
        ListNode next = null;

        while(current!=null){
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
}

// Optimal Solution using Recursive Approach. Time:O(n) & Space:O(n).
class Solution {
    public ListNode reverseList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }

        ListNode reverseList = reverseList(head.next);
        head.next.next = head;
        head.next = null;

        return reverseList;
    }
}
