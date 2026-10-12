/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , unsigned long long int>> q;
        q.push({root,0});
        int maxwidth = 0;

        while(q.size()>0){
            int currsize = q.size();
            unsigned long long int stidx = q.front().second;
            unsigned long long int endidx = q.back().second;

            maxwidth = max(maxwidth,(int)(endidx-stidx+1));

            for(int i=0;i<currsize; i++){
                auto curr = q.front();
                q.pop();

                if(curr.first->left){
                    q.push({curr.first->left,2*curr.second+1});
                }
                if(curr.first->right){
                    q.push({curr.first->right,2*curr.second+2});

                    // CBT (complete binary tree)- which means is node has a child
                    // To calc each node we use cbt indexing
                    // 2*idx+1 ->left , 2*idx+2 ->right
                }
            }
        }
        return maxwidth;
    }
};