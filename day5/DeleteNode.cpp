//Write a function to delete a node in a singly-linked list.
//You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.



class Solution {
public:
    void deleteNode(ListNode* node) {
// Sol 1
 //      Without memory leak
		ListNode *temp = node;
		ListNode *del = temp->next;
		temp->val = del->val;
        temp->next = del->next;
        delete(del);
//Sol 2
//      With Memory leak But Faster
        node->val = node->next->val;
        node->next = node->next->next;

    }
};

