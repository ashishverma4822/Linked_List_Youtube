//Approach 1
class Solution {
private:
    int hiAyu(ListNode* head){
        int cnt = 0;
        while(head!=nullptr){
            head=head->next;
            cnt++;
        }
        return cnt;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int len = hiAyu(head);
        int k = len/2;
        while(k--){
            head = head->next;
        }
        return head;
    }
};

//Approach 2
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow= slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
