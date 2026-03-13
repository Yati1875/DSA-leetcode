/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public static int countNode(ListNode head) {
        ListNode temp = head;
        int count = 0;
        while (temp != null) {
            count++;
            temp = temp.next;
        }
        return count;
    }

    public ListNode middleNode(ListNode head) {
        int n = countNode(head);
        int mid=(n/2);
        ListNode temp = head;
        int count=0;
        while(temp!=null){
            if(count==mid){
                head=temp;
                break;
            }
            else{
                temp=temp.next;
                count++;
            }
        }
        return head; 
    }
}