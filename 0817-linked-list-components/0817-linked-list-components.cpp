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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int, int> hash;
        for(int i = 0; i < nums.size(); ++i)
            hash[nums[i]] = i + 1;
        int ans = 0, count = 0, prev_val = 0;
        while(head){
            if(!hash[head->val]){
                if(count)
                    ans++;
                count = 0;
            }
            else
                count++;
            head = head->next;
            
        }
        if(count)
            ans++;
        return ans;
    }
};