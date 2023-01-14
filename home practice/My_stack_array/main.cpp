
///stack with array


#include <iostream>

#define size 100
using namespace std;
///array implementation of stack

 class  MyStack
 {
	 public:
	 int A[size];
	 int top;

	 MyStack()
	 {
		 this->top = -1;
	 }
 };

 MyStack stack1;

///*******************************************

bool isEmpty(){

    if(stack1.top==-1)
    {
        return true;
    }
    else
        return false;
}

///*******************************************

int Top()
{
    if(stack1.top == -1)
        return -1;

    else
        return stack1.A[stack1.top] ;
}

///*******************************************

void Print()
{
	int i;

	if(isEmpty()==true)
	{

        cout<<"stack is empty";
        return;
	}
	cout<<"Stack: "<<endl;
	for(i = stack1.top;i>=0;i--)
        cout<<stack1.A[i]<<endl;
		//printf("%d ",stack1.A[i]);
}

///*******************************************

void push(int key)
{
	stack1.top++;
	stack1.A[stack1.top] = key;
}

///*******************************************

int pop()
{
	int temp = stack1.A[stack1.top];
	stack1.top--;

	return temp;
}


int main()
{
    push(25);
    push(36);
    push(45);
    push(78);
   Print();

   pop();
   pop();
   Print();

   int topValue = Top();
   cout<<"top value is "<<topValue;
    return 0;
}
