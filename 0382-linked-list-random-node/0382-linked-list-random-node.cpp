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
    vector<int> a{};
    Solution(ListNode* head) {
        ListNode* temp = head;
        while(temp){
            a.push_back(temp->val);
            temp = temp->next;
        }
    }

    int getRandom() {
        int min = 0;
        int max = a.size() - 1;
        int randNum = rand()%(max-min + 1) + min;
        return a[randNum];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */