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
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
       while(temp!=NULL){
        arr.push_back(temp->val);
        temp=temp->next;
       }
       for (int i=0;i<arr.size();i++){
        arr[i]=arr[arr.size()-1-i];
       }
       temp=head;
       int i=0;
       while(temp!=NULL && i<arr.size()){
        if(arr[i]!=temp->val) {
            return false;
            break;
        }
        temp=temp->next;
        i++;
       }
       return true;
    }
};