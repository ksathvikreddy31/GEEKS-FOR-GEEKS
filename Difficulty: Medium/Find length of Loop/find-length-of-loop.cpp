/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* fast=head;
        Node* slow=head;
        while(fast!=nullptr&&fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                Node* temp=slow->next;
                int c=1;
                while(temp!=slow)
                {
                    c++;
                    temp=temp->next;
                }
                return c;
            }
        }
        return 0;
    }
};