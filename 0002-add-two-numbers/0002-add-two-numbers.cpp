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
    void search(ListNode* l, vector<int> &ans){
        ListNode* temp = l;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> ans1;
        vector<int> ans2;
        int carry = 0;

        search(l1,ans1);
        search(l2,ans2);

        int n = max(ans1.size(),ans2.size());
        ListNode* head = NULL;
        ListNode* tail = NULL;

        for(int i=0; i<n; i++){
            int digit1;
            int digit2;

            if(i<ans1.size()){
                digit1 = ans1[i];
            }
            else{
                digit1 = 0;
            }

            if(i<ans2.size()){
                digit2 = ans2[i];
            }
            else{
                digit2 = 0;
            }

            int sum = digit1+digit2+carry;
            int digit = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);

            if(head==NULL){
                head=newNode;
                tail= newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }

            if(carry>0){
                ListNode* newNode = new ListNode(carry);
                tail->next = newNode;
            }
        }        
        return head;
    }
};