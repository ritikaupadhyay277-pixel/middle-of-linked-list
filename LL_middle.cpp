/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {       //head = [1,2,3,4,5]
       ListNode* curr = head;
        int len=0;
        while(curr!=NULL){
            curr=curr->next;
            len++;
        }
        if (len%2 !=0) {      // odd len one middle
        ListNode* okay=head ;
        for(int i=1; i<=(len/2); i++){
        okay= okay->next;
        }
        return okay;
        }
        else {
            ListNode* okay=head;
            for(int i=1; i<= (len/2); i++ ){
                okay = okay->next;
            }
            return okay;
        }
        return head;
    }
};
