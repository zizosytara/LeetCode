#include<iostream>
using namespace std;
//  Definition for singly-linked list.
/* struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};
 */

struct Node{
      int val;
      Node* next;

      Node() : val(0) , next(nullptr) {}
      Node(int x) : val(x) , next(nullptr) {}
      Node(int x , Node* link) : val(x) , next(link) {}

};
void print(){
    //stack allocation
    Node node1(10);
    Node node2(20);
    Node node3(30); 

    //link Nodes together
    node1.next = &node2;
    node2.next = &node3;
    node3.next = nullptr; //not important because lines 24,32

    //traverse
    Node* current = &node1;
    while(current != nullptr){
          cout<<" ["<<current->val<<"] ->";
          current = (*current).next;
    }

    cout<<"NULL\n";
}
int main(){
print();
   
    return 0;
}