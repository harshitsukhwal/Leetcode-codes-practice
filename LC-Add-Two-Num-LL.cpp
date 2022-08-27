#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0); //make a node with 0 value
        ListNode *last = head; // connect head to last
        int carry = 0;
		
		//now add one digit from l1 to l2 
		//if the sum is more than 9 take carry by dividing by 10
		// add the sum digit to the next pointer of last node
		// now update the last node
        
        while(l1!=NULL || l2!=NULL || carry !=0){
            int sum = 0;
        if(l1!= NULL){
            sum+=l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2 = l2->next;
        }
        sum+=carry;
        carry = sum/10;
        last->next = new ListNode(sum%10);
        last = last->next;
    }
        return head->next;
    }

 
    }
};