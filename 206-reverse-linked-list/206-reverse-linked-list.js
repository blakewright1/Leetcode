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
var reverseList = function(head) {
    if (head === null) return head;
    var reversed = new ListNode();
    let previous = null;
    let current = head;
    let future = null;
    while (current.next !== null){
           future = current.next;
           current.next = previous;
           previous = current;
           current = future;
    }
    current.next = previous;
    return current;
 
};