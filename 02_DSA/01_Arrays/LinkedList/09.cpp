// https://leetcode.com/problems/intersection-of-two-linked-lists/

//Solutions: > mark visited node true
//           > calculate diff of greater list by smaller list and put the head of greater list to the reslut of diff
//           > iterate both lists till null, after heating null assign head of one list to another list

// Written solution has ERROR

#include<iostream>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int findLength(ListNode* head){
        int length = 0;
        ListNode* temp = head;

        while(temp != NULL){

        }
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = findLength(headA);    
        int lenB = findLength(headB);    

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int deffInLength = abs(lenA - lenB);

        if(lenB > lenA){
            while(deffInLength--){
                tempA = tempB->next;
            }
        }else{
            while(deffInLength--){
                tempA = tempA->next;
            }
        }
        while(tempA != tempB){
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA; 
    }
};
