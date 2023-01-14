
///stack with linked list


#include <iostream>
using namespace std;

bool isEmpty();

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

Node *top=NULL;

///*******************************************

void Push(int key)
{

    Node* newNode = new Node(key);
    newNode->next = top;
    top = newNode;
    cout << "Pushing " << newNode->key << " in the front" << endl;

}

///*******************************************

void Pop()
{
    if(isEmpty() == true)
    {
        cout<<"stack is empty"<<endl;
        return ;
    }

    Node *temp = top;
    top = top->next;

    cout << "Popping " << temp->key << " from the front" << endl;
    delete temp;
}

///*******************************************

int Top()
{
    if(top==NULL)
        return -1;

    else
        return top -> key;
}

///*******************************************

bool isEmpty(){

    if(top==NULL)
    {
        return true;

    }

    else
        return false;
}

///*******************************************

//TRAVERSE
void traverse(Node *t)
{
    while(t != NULL)
    {  //traverse the list
        cout<<t->key<<endl;
        t = t->next;
    }
	cout<<endl;
}



int main()
{
    //int n;

    int topvalue;

    topvalue = Top();
    cout<<topvalue<<endl;

    Push(5);
    Push(7);
    Push(9);
    Push(2);
    cout<<"-------------------"<<endl;
    traverse(top);
    cout<<"-------------------"<<endl;

    topvalue = Top();
    cout<<topvalue<<endl;

    Pop();
    Pop();
    cout<<"-------------------"<<endl;
    traverse(top);
    cout<<"-------------------"<<endl;

    topvalue = Top();
    cout<<topvalue<<endl;

    Pop();
    Pop();
        Pop();
    cout<<"-------------------"<<endl;
    traverse(top);
    cout<<"-------------------"<<endl;

    return 0;
}
