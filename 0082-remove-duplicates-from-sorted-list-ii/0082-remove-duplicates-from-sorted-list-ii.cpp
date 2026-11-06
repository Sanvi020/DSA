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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> m;
        ListNode* temp = head;
        while(temp!=NULL){
            m[temp->val]++;
            temp = temp->next;
        }

        ListNode* newHead = NULL;
        ListNode* tail = newHead;

        temp = head;
        while(temp!=NULL){
            if(m[temp->val] == 1){
                ListNode* newNode = new ListNode(temp->val);
                if(newHead==NULL){
                    newHead = newNode;
                    tail = newNode;
                }
                else{
                    tail->next = newNode;
                    tail = newNode;
                }
            }
            temp = temp->next;
        }    
        return newHead;
    }
};