
///  mid question 3

#include <iostream>
using namespace std;

class Node{
    public:
        char c;
        Node* next;
        Node* prev;
     Node(char c)
      {
          this->c=c;
          this->next=NULL;
          this->prev=NULL;
      }
};

Node *head=NULL;
Node *tail=NULL;


void print(Node* head){

    Node* curr = head;
    cout<<"head --> ";

    while(curr!=NULL)
    {

        if (curr->next!= NULL)
            cout<<curr->c<<" <--> ";
        else
            cout<<curr->c<<" --> ";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
}

Node* removeAllConsonants(Node* head){

    if (head == NULL)
        return head;

    Node* curNode = head;
    Node* prevNode = NULL;

    while(curNode!=NULL)
    {

        char ch = curNode->c;

        if (!(ch =='a' || ch=='e' || ch == 'i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))
        {
            Node* temp = curNode;

            if (prevNode == NULL)
            {
                head = curNode->next;
                curNode = curNode->next;
            }
            else
            {
                prevNode->next = curNode->next;
                curNode = curNode->next;
            }

            delete temp;

        }
        else
        {
            prevNode = curNode;
            curNode = curNode->next;
        }
    }
    return head;
}

int main(){

     Node *node1 = new Node('o');
    Node *node2 = new Node('r');
    Node *node3 = new Node('a'); //
    Node *node4 = new Node('n');
    Node *node5 = new Node('g');
    Node *node6 = new Node('e');

    head = node1;
    tail = node6;

    node1->prev = NULL;
    node1->next = node2;

    node2->prev = node1;
    node2->next = node3;

    node3->prev = node2;
    node3->next = node4;

    node4->prev = node3;
    node4->next = node5;

    node5->prev = node4;
    node5->next = node6;

    node6->prev = node5;
    node6->next = NULL;

    print(head);
    head = removeAllConsonants(head);

    print(head);
    return 0;
}
