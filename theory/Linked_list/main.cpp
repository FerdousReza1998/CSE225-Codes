
#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int key;
    Node *next;
    Node(int key)
    {
        this->key = key;
        this->next = NULL;
    }
};

Node* head; //global

void pushFront(int key){

    Node* newNode = new Node(key);
    newNode->next = head;
    head = newNode;
    cout << "Pushing " << newNode->key << " in the front" << endl;

}

void popFront(){
    Node *temp = head;

    head = head->next;
    cout << "Popping " << temp->key << " from the front" << endl;
    delete temp;
}


void print()
{
    Node *cur = head;
    while(cur!=NULL)
        {
        cout << cur->key << " -> ";
        cur = cur->next;
    }
    cout << " NULL" << endl;
}

int main(){
    head = NULL;

    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);

    head = node1;
    node1->next = node2;
    node1->next->next = node3; //node2->next = node3;
    node3->next = node4;

    pushFront(5);
    pushFront(6);

    print();

    // 6 -> 5 -> 1 -> 2 -> 3 -> 4

    popFront();
    print();


}
// /without tail

   void pushback( int k ){

 Node* newNode = new Node(key);

 if(head==NULL)
	{
		head=newNode;
		return;
	}

	int pos=1;
  Node *cur = head;

  while(cur-> next!=NULL)
    {
		if(pos%2 !=0){
			print();
		}
		pos++; 

       cur=cur->next;

    }

    cur-> next = newNode;
   }


/* if tail pointer exists


void pushFront(int key){

    Node* newNode = new Node(key);
    newNode->next = head;

    if(head == NULL)
    {
    head = newNode;
    tail =head;
    }

    head = newNode;

    cout << "Pushing " << newNode->key << " in the front" << endl;

}

*/

/*if tail pointer exists


void popFront(){
    Node *temp = head;

    head = head->next;

    if( head==NULL)
    {
       tail = head;
    }
    cout << "Popping " << temp->key << " from the front" << endl;
    delete temp;
}

*/

/*without tail


void popback( int k )

 Node* newNode = new Node(key);

   if(head==NULL)
{
    head=newNode;
    return;

}
  Node *cur =head;

  while(cur-> next!=NULL)
    {
       cur=cur->next;
    }

    Node *temp =cur;

    delete temp;



*/




/*with tail


void popback( int k )

 Node* newNode = new Node(key);

   if(head==NULL)
{
    head=newNode;
    return;

}
  Node *cur =head;

  while(cur-> next->next!=NULL)
    {
       cur=cur->next;
    }

    Node *temp =tail;

    tail=cur;

    delete temp;

int topfront()

{
  if(head==NULL)
    return -1;

    else
    return head -> key;

}
/// with tail

int topback()

{
  if(head==NULL)
    return -1;

    else
    return tail-> key;

}
/// without tail

int topback(){

while(cur-> next!=NULL)
         cur=cur->next;

    return cur->key;
}


Boolean find(key){

Node* cur =head;

while(cur->next !=NULL){

    if(cur->key == key)
        return true;

    cur = cur-> next;

}

    return false;
}

///return node address

Boolean find(key){

Node* cur =head;

while(cur->next !=NULL){

    if(cur->key == key)
        return cur;

    cur = cur-> next;

}
    return NULL;
}




//// for doubly linked list

pushFront(key)

 newNode->next=head;
 newNode->prev = NULL;
 head->prev=newNode;
 head=newNode;


pushback(key)

	newNode->next = NULL;
	newNode->prev=tail;
	tail->next=newNode;
	tail=newNode;


popBack(key)

	Node *temp =tail;
	tail = tail->prev;
	tail->next = NULL;

	delete temp;


*/



