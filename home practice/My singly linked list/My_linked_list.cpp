
///singly linked list

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

///*******************************************
//INSERTION
void pushFront(int key)
{

    Node* newNode = new Node(key);
    newNode->next = head;
    head = newNode;
    cout << "Pushing " << newNode->key << " in the front" << endl;

}

///********************************************

void addAfter(Node *cur,int key)
{
    Node *newNode = new Node(key);

    newNode->next = cur->next; //insert the element
    cur->next = newNode;
}

///*******************************************

void addBefore(Node *cur,int key)
{
    Node *newNode = new Node(key);
    Node *prevNode = head;

   while(prevNode-> next != cur)
    {
       prevNode=prevNode->next;
    }

    newNode->next = cur;
    prevNode->next= newNode;
}

/*
Node* findPrevNode(Node *nd){

    Node *cur = head;
   while(cur-> next != nd)
    {
       cur=cur->next;
    }

    return cur;
}
*/

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
    while(cur-> next != NULL)
        {
            cur=cur->next;
        }
    newNode->next = NULL;
    cur-> next = newNode;
}

///*******************************************

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

///*******************************************

///DELETE
void popFront()
{

    Node *temp = head;
    head = head->next;

    cout << "Popping " << temp->key << " from the front" << endl;
    delete temp;
}


///*******************************************

void popBack()
{

    Node *cur = head;

    while(cur-> next-> next != NULL)
    {
       cur=cur->next;
    }

    Node *temp = cur->next;
    cur->next = NULL;
    //cout<<temp->key<<endl ;
    delete temp;
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

// find
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

///return node address
Node* findNode(int key)
{

Node* cur = head;

while(cur->next !=NULL)
{

    if(cur->key == key)
        return cur;

    cur = cur-> next;
}
    return NULL;
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


int main()
{
    //int n;

    Node *node1 = new Node(102);
    Node *node2 = new Node(5);
    Node *node3 = new Node(2); //
    Node *node4 = new Node(7);
    Node *node5 = new Node(29);

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;




    cout<<"Before inserting after nth position::";//traversing Before inserting
    traverse(head); //traverse the list

    /*
    cout<<"Enter the n value ::";
	cin>>n;
    insert_after_nth(n,head,15); //call the function to insert the value 200 after 3rd position
    cout<<"After inserting at 3rd position,the list is::";
    traverse(head); //traverse After insertion
    */

    /*
    addAfter(node3,81);
    cout<<"After inserting at 3rd position,the list is::";
    traverse(head); //traverse After insertion
    */

    /*
    addBefore(node3,81);
    cout<<"before inserting at 3rd position,the list is::";
    traverse(head); //traverse After insertion
    */

    /*
    pushFront(45);
    cout<<"After inserting at FIRST position,the list is::";
    traverse(head); //traverse After insertion
    */

    /*
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
    cout<<"After DELETING at last position,the list is::";
    traverse(head); //traverse After insertion
    */

//removeElement(2);
   Erase(102);
    cout<<"After DELETING at last position,the list is::";
    traverse(head); //traverse After insertion


    /*
    int firstValue = topfront();
    cout<<"first value  is: "<<firstValue;
    */

    /*
    int lastValue = topback();
    cout<<"last value  is: "<<lastValue;
    */

    return 0;
}
