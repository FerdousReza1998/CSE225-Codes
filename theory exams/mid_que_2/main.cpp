

///  mid question 2

#include <iostream>
using namespace std;

class Node
{
  public:  //class Node creation
  int key;
  Node *next;
  Node(int key)
  {
      this->key=key;
      this->next=NULL;
  }
};

Node *head=NULL;

void reverse()
    {
        Node *cur = head;
        Node *prevNode = NULL;
        Node *nextNode = NULL;

        while (cur != NULL)
        {
            nextNode = cur->next;
            cur->next = prevNode;
            prevNode = cur;
            cur = nextNode;
        }
        head = prevNode;
    }

void print(Node *t)
{
    while(t != NULL)
    {
        cout<<t->key<<" ";
        t = t->next;
    }
	cout<<endl;
}


int main()
{

    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    print(head);
    reverse();
    print(head);

    return 0;
}
