#include<iostream>
using namespace std;

// class Node
class Node
{
		public :
		// data members
		int key;
		Node *next;
		// constructor
		Node(int key)
		{
			this -> key = key;
			this -> next = NULL;
        }
};
Node *head=NULL;

// print function
void print_odd(Node *t)
{
		// storing head pointer address in temp pointer
		//Node *temp = h;
		cout << "Odd position elements are : ";
		// printing till End of linked list
		while( t!= NULL )
		{
			cout << t -> key << " ";
			t = t -> next -> next;
		}
}
void print_even(Node *t)
{
		// storing head pointer address in temp pointer
		//Node *temp = h;
		cout << "even position elements are : ";
		// printing till End of linked list
		while( t!= NULL )
		{
			cout << t -> key << " ";
			t = t -> next -> next;
		}
}
int main()
{
	// head Node pointer
	Node *first = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);
	Node *fourth = new Node(40);
	Node *fifth = new Node(50);
	Node *sixth = new Node(60);
	Node *seventh = new Node(70);
	Node *eight = new Node(80);
	Node *ninth = new Node(90);
	Node *tenth = new Node(100);

	head = first;
	first -> next = second;
	second -> next = third;
	third -> next = fourth;
	fourth -> next = fifth;
	fifth -> next = sixth;
	sixth -> next = seventh;
	seventh -> next = eight;
	eight -> next = ninth;
	ninth -> next = tenth;
	// making NULL the tenth pointer
	tenth -> next = NULL;

	// calling print_odd function

	// which prints all odd position elements
	print_odd(head);
	//print_even(second);
	cout<<endl;
	print_even(head->next);

return 0;
}
