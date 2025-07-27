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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* Final = new ListNode();
        ListNode* temp = Final;

        vector<int>vec;
        while(head != nullptr){
          vec.push_back(head->val);
          head = head->next;
        }

        int num = vec.size();
        int m = k;
        int group = num/m;
        int last = num-(group*m);
        int ind = 0;
        while(group--){
          for(int i=k-1;i>=ind;i--){
          temp->next = new ListNode(vec[i]);
          temp = temp->next;
        }
        ind+=m;
        k+=m;
        }

        for(int i=ind;i<num;i++)
        {
          temp->next = new ListNode(vec[i]);
          temp = temp->next;
        }

        return Final->next;
    }
};