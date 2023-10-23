#include <bits/stdc++.h>
using namespace std;
struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

   void insert(Node*& odd, int data) {
    Node* newNode = new Node(data);
    if (odd == NULL) {
        odd = newNode;
    } else {
        Node* current = odd;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void displayList(Node* odd) {
    Node* current = odd;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void rearrange(struct Node *odd)
    {
        //add code here
        if(odd->next==NULL)
        return;
        int count=0;
        struct Node * temp= odd;
        
        stack<struct Node*> s;
            temp=odd->next;
            s.push(temp);
            while(temp->next && temp->next->next)
            {
                temp=temp->next->next;
                s.push(temp);
            }
            
            struct Node* prev=odd;
            struct Node* curr=odd->next;
            while(curr->next)
            {
                prev->next=curr->next;
                if(curr->next->next)
                {
                    prev=prev->next;
                    curr=curr->next->next;
                }
                else
                {
                    break;
                }
            }
            prev->next=NULL;
            
            while(!s.empty())
            {
                struct Node* add=s.top();
                s.pop();
                prev->next=add;
                prev=prev->next;
            }
            prev->next=NULL;
        
        return;
    }

int main(int argc, char const *argv[])
{
    Node* odd = NULL;

    // Insert the numbers into the linked list
    insert(odd, 10);
    insert(odd, 9);
    insert(odd, 3);
    insert(odd, 9);
    insert(odd, 4);
    insert(odd, 5);
    insert(odd, 1);
    insert(odd, 4);

    displayList(odd);
    rearrange(odd);
    displayList(odd);
    return 0;
}
