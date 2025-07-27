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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       ListNode* Final = new ListNode();
       ListNode* temp = Final;

      vector<int>vec;
      int n = lists.size();
      for(int k=0;k<n;k++){
        int s = 0;
        ListNode* curr = lists[k];
        while (curr != nullptr) {
            ++s;
            curr = curr->next;
        }

        ListNode* Curr = lists[k];
        while(Curr != nullptr){
          vec.push_back(Curr->val);
          Curr = Curr->next;
        }
      }

      sort(vec.begin(),vec.end());
      for(int i=0;i<vec.size();i++){
        temp->next = new ListNode(vec[i]);
        temp = temp->next;
      }
      return Final->next;
      }
      
};