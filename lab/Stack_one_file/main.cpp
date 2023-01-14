#include <iostream>

using namespace std;

class FullStack
{};
class EmptyStack
{};

template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:

    StackType()
    {
        topPtr = NULL;
    }

    bool IsEmpty()
    {
        return (topPtr == NULL);
    }

    ItemType Top()
    {
        if (IsEmpty())
            throw EmptyStack();
        else
            return topPtr->info;
    }


        bool IsFull()
        {
            NodeType* location;
            try
            {
                location = new NodeType;
                delete location;
                return false;
            }
            catch(bad_alloc& exception)
            {
                return true;
            }
        }

        void Push(ItemType newItem)
        {
            if (IsFull())
                throw FullStack();
            else
            {
                NodeType* location;
                location = new NodeType;
                location->info = newItem;
                location->next = topPtr;
                topPtr = location;
            }
        }

        void Pop()
        {
            if (IsEmpty())
                throw EmptyStack();
            else
            {
                NodeType* tempPtr;
                tempPtr = topPtr;
                topPtr = topPtr->next;
                delete tempPtr;
            }
        }

        ~StackType()
        {
            NodeType* tempPtr;
            while (topPtr != NULL)
            {
                tempPtr = topPtr;
                topPtr = topPtr->next;
                delete tempPtr;
            }
        }

private:
        NodeType* topPtr;


    };

    int main()
    {
        cout << "Hello world!" << endl;

        StackType<int> test;
        bool check= test.IsEmpty();
        cout<<"see: "<<check<<endl;
        if(check)
        {
            cout<<"empty"<<endl;
        }

        test.Push(5);
        test.Push(9);
        test.Push(4);

        StackType<int> te;

        //printing the stack from last to first order
        //LIFO
        int v = test.Top();
        cout<<v<<endl;
        te.Push(v);
        test.Pop();

        v = test.Top();
        cout<<v<<endl;
        te.Push(v);
        test.Pop();
        v = test.Top();
        cout<<v<<endl;
        te.Push(v);
        test.Pop();
        //test = te;
        //int b=test.Top();cout<<b<<endl;

        //optional
        //printing the stack as initial input order

        cout<<"printing as initial input"<<endl;
        StackType<int>s1;
        StackType<int>s2;

        s1.Push(1);
        s1.Push(2);
        s1.Push(3);

        int m= s1.Top();
        s2.Push(m);
        s1.Pop();
        m=s1.Top();
        s2.Push(m);
        s1.Pop();
        m = s1.Top();
        s2.Push(m);
        s1.Pop();

        cout<<s2.Top()<<endl;
        s1.Push(s2.Top());
        s2.Pop();

        cout<<s2.Top()<<endl;
        s1.Push(s2.Top());
        s2.Pop();
        cout<<s2.Top()<<endl;
        s1.Push(s2.Top());
        s2.Pop();

//we can use loop for printing
//print until the stack is empty

        return 0;
    }
