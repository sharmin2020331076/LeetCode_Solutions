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
    ListNode* swapPairs(ListNode* head) {
        ListNode* Final = new ListNode();
        ListNode* temp = Final;

        vector<int> vec;
        while(head != nullptr){
          vec.push_back(head->val);
          head = head->next;
        }

        for(int i=1;i<vec.size();i+=2){
           if(i%2!=0){
            int a = vec[i];
            vec[i]=vec[i-1];
            vec[i-1]= a;
           }
        }

        for(int i=0;i<vec.size();i++){
          temp->next = new ListNode(vec[i]);
          temp= temp->next; 
        }

        return Final->next;
    }
};