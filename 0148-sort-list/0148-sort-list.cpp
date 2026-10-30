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
    void traverse(ListNode* head, vector<int> &ans){
        ListNode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
    }
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        traverse(head,ans);

        sort(ans.begin(),ans.end());

        ListNode* Head = NULL;
        ListNode* tail = NULL;

        for(int val : ans){
            ListNode* newNode = new ListNode(val);

            if(Head==NULL){
                Head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return Head;
    }
};