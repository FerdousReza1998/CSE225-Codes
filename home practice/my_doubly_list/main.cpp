
///doubly linked list

#include <iostream>
using namespace std;

class Node
{
  public:  //class Node creation
  int key;
  Node *next;
  Node *prev;
  Node(int key)
  {
      this->key=key;
      this->next=NULL;
      this->prev=NULL;
  }
};

Node *head=NULL;
Node *tail=NULL;

///*******************************************

//INSERTION
void pushFront(int key)
{

    Node* newNode = new Node(key);
    newNode->next = head;
    newNode->prev =NULL;
    head->prev=newNode;
    head = newNode;


    cout << "Pushing " << newNode->key << " in the front" << endl;

}

///*******************************************

void pushBack(int key)
{

    Node *newNode = new Node(key);

    if(head==NULL)
	{
		head=newNode;
		return;
	}

	Node *cur = head;

    newNode->next = NULL;
    newNode->prev =tail;
    tail-> next = newNode;
    tail = newNode;
}

///*******************************************

/// find
bool find(int key)
{

Node* cur = head;

while(cur->next !=NULL)
{

    if(cur->key == key)
    {
        return true;
    }
    cur = cur-> next;
}
    return false;
}

///*******************************************

///DELETE
void popFront()
{

    Node *temp = head;
   // head->next->prev =NULL;
    head = head->next;
    head->prev=NULL;

    cout << "Popping " << temp->key << " from the front" << endl;
    delete temp;
}

///*******************************************

void popBack()
{

    //Node *cur = head;

    Node *temp = tail; // last node
    tail=tail->prev; // last node er ager node
    tail->next = NULL;
    //cout<<temp->key<<endl ;
    delete temp;
}

///*******************************************

void addAfter(Node *cur,int key)
{
    Node *newNode = new Node(key);

    newNode->next = cur->next; //insert the element
    newNode->prev=cur;
    cur->next = newNode;
}

///*******************************************

void addBefore(Node *cur,int key)
{
    Node *newNode = new Node(key);

    newNode->next = cur;
    cur->prev->next = newNode;

    newNode->prev = cur->prev;
    cur->prev = newNode;
   // cur->next= newNode;
}

///*******************************************

///erase
void Erase( int value)
{

    Node *temp;
    Node *pre = head;
    Node *cur = head-> next;

    if(pre->key==value)
        {

        temp = pre;
        head=cur;
        delete temp;
        return;
    }

    while(cur-> key != value && cur-> next != NULL)
    {
       pre=pre->next;
      cur= cur->next;
    }

    temp = cur;



    if(cur->  key == value)
	{

        pre->next = cur->next;
    }
    else
	{
        cout<<value<<" not found in linked list"<<endl;
        return ;
    }
     delete temp;

}

///*******************************************

///top front
int topfront()

{
    if(head==NULL)
        return -1;

    else
        return head -> key;

}

///*******************************************

/// top Back
int topback()
{

Node* cur = head;

while(cur-> next != NULL)
         cur=cur->next;

    return cur->key;
}

///*******************************************

int topbackTail()
{

    if(head==NULL)
        return -1;

    else
        return tail-> key;
}

///*******************************************

//TRAVERSE
void traverse(Node *t)
{
    while(t != NULL)
    {  //traverse the list
        cout<<t->key<<" ";
        t = t->next;
    }
	cout<<endl;
}

///*******************************************

void traverseReverse(Node *t)
{
    while(t != NULL)
    {  //traverse the list
        cout<<t->key<<" ";
        t = t->prev;
    }
	cout<<endl;
}


int main()
{
    Node *node1 = new Node(12);
    Node *node2 = new Node(5);
    Node *node3 = new Node(2); //
    Node *node4 = new Node(7);
    Node *node5 = new Node(29);

    head = node1;
    tail = node5;

    node1->prev = NULL;
    node1->next = node2;

    node2->prev = node1;
    node2->next = node3;

    node3->prev = node2;
    node3->next = node4;

    node4->prev = node3;
    node4->next = node5;

    node5->prev = node4;
    node5->next = NULL;

    traverse(head); //traverse the list
    //traverseReverse(tail); //traverse the list

    /*
    pushFront(45);
    cout<<"After inserting at FIRST position,the list is::";
    traverse(head); //traverse After insertion

    pushBack(13);
    cout<<"After inserting at LAST position,the list is::";
    traverse(head); //traverse After insertion
    */


    /*
    popFront();
    cout<<"After DELETING at FIRST position,the list is::";
    traverse(head); //traverse After insertion

    */

    /*
    popBack();
    cout<<"After inserting at LAST position,the list is::";
    traverse(head);
    //traverseReverse(tail); //traverse After insertion
    */

    /*
    addAfter(node3,81);
    cout<<"After inserting at 3rd position,the list is::";
    traverse(head); //traverse After insertion
    */

    /*
    addBefore(node3,51);
    cout<<"before inserting at 3rd position,the list is::";
    traverse(head); //traverse After insertion
    */

    /// cout<<find(5);

    /*
    Erase(29);
    cout<<"After DELETING at last position,the list is::";
    traverse(head); //traverse After insertion
    */
/*

    int firstValue = topfront();
    cout<<"first value  is: "<<firstValue;



    int lastValue = topback();
    cout<<"\nlast value  is: "<<lastValue;

 lastValue = topbackTail();
    cout<<"\nlast value  is: "<<lastValue;
*/

    Erase(12);
    cout<<"After DELETING at last position,the list is::";
    traverse(head); //traverse After insertion



    return 0;
}
