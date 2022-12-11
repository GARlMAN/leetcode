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
