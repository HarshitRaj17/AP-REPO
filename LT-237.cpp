class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* p=node;
        while(node->next){
            node->val=node->next->val;
            p=node, node=node->next;
        }
        p->next=NULL;
        return ;
    }
};