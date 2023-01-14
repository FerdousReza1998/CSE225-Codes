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

void traverse(Node *t)
{
    while(t!=NULL)
    {  //traverse the list
        cout<<t->key<<" ";
        t = t->next;
    }
	cout<<endl;
}

void insert_after_nth(int n,Node *t,int value)
{
    int count=1;
    Node *newNode = new Node(value);
    while(count<n)
    {
		t=t->next;
        count++;  //move the pointer to nth position
    }
    newNode->next = t->next; //insert the element
    t->next = newNode;
}

int main()
{
    int n;
   // Node *node1(6);
   // Node *node2(11);
   // Node *node3(3); //creating  object of nodes
   // Node *node4(7);
   // Node *node5(2);

    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(7);

    head = node1;
    head->next=node2;  //creating the list for testng
    head->next->next=node3;
    head->next->next->next=node4;
    head->next->next->next->next=node5;
    node5->next=NULL;
    /*
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    */

    cout<<"Before inserting after nth position::";//traversing Before inserting
    traverse(head); //traverse the list

    cout<<"Enter the n value ::";
	cin>>n;
    insert_after_nth(n,head,200); //call the function to insert the value 200 after 3rd position
    cout<<"After inserting at 3rd position,the list is::";
    traverse(head); //traverse After insertion
    return 0;
}
