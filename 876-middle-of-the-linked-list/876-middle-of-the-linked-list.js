/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    let [mid, end] = [head, head];
    while (end !== null && end.next !== null){
           mid = mid.next;
           end = end.next;
           if (end != null) end = end.next;
    }
    
    // 1  2  3  4  5
    //       m     e
    
    return mid;
};