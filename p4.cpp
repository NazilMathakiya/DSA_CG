#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;  
};

ListNode* midOfLL(ListNode* n0) {
    int size = 0;
    ListNode* i = n0;

    while (i != NULL) {
        size++;
        i = i->next;
    }
    int mid = size / 2;
    int count = 0;
    i=n0;
    while(count<mid){
        i = i->next;
        count++;
    }
    return i;
}



int main() {

    ListNode* n0 = new ListNode(1);
    ListNode* n1 = new ListNode(2);
    ListNode* n2 = new ListNode(3);
    ListNode* n3 = new ListNode(4);
    ListNode* n4 = new ListNode(5);

    // Connecting nodes
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    ListNode* middle = midOfLL(n0);

    cout << "Middle node value: " << middle->val << endl;

    return 0;
}