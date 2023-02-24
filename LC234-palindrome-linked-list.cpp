class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        // get slow to the middle of the list
        while (fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse the list starting after slow and disconnect the lists
        ListNode *left = nullptr, *middle=slow->next, *right=nullptr;
        slow->next = nullptr; // end the left list
        if (middle) right=middle->next;
        while (middle){
            middle->next = left;
            left = middle;
            middle = right;
            if (right) right = right->next;
        }
        //left is the start of the second list now

        while (head && left){
            if (left->val != head->val) return false;
            left = left->next;
            head = head->next;
        }

        return true;
    }
};
