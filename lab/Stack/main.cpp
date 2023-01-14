#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
#include<string.h>

using namespace std;

int main()
{
    StackType<int>st1;

    if(st1.IsEmpty()==true)
        {
        cout<<"Stack is Empty"<<endl<<endl;
    }
    else
    {
        cout<<"Stack is not Empty"<<endl<<endl;
    }

    st1.Push(5);
    st1.Push(7);
    st1.Push(4);
    st1.Push(2);

    if(st1.IsEmpty()==true)
    {

     cout<<"Stack is Empty"<<endl<<endl;

    }
    else
    {
        cout<<"Stack is not Empty"<<endl<<endl;
    }

    if(st1.IsFull()==true)
    {

        cout<<"Stack is full"<<endl<<endl;
    }
    else
    {
        cout<<"Stack is not full"<<endl<<endl;
    }

    cout<<endl;

    StackType<int>t1;


    while(!st1.IsEmpty())
    {
        int i = st1.Top();
        t1.Push(i);
        st1.Pop();
    }
    while(t1.IsEmpty()==false){

        int i = t1.Top();
        cout<<i<<" ";
        st1.Push(i);
        t1.Pop();
    }
    t1.~StackType();
    cout<<endl;

    st1.Push(3);

    StackType<int>t2;

    while(!st1.IsEmpty()){

        t2.Push(st1.Top());
        st1.Pop();
    }

    while(t2.IsEmpty()==false){

        int i = t2.Top();
        cout<<i<<" ";
        st1.Push(i);
        t2.Pop();
    }

    t2.~StackType();
    cout<<endl<<endl;

    if(st1.IsFull()==true){

         cout<<"Stack is full"<<endl<<endl;

    }

    else
    {
        cout<<"Stack is not full"<<endl<<endl;
    }

    st1.Pop();
    st1.Pop();

    cout<<st1.Top()<<endl<<endl;

    StackType<char>st2;

    for(int i=0 ; i<4 ; i++){

        bool isBal = true;

        string s;
        cin>>s;

        for(int i = 0; i<s.size(); i++){

            if( s[i]=='(' ){
                st2.Push(s[i]);
            }
            else if  ( s[i]==')' && st2.IsEmpty() == true){
                isBal = false;
            }
            else if  ( s[i]==')' ){
                st2.Pop();
            }
        }

        if( isBal == false || st2.IsEmpty()==false){
            cout<<"Not Balanced"<<endl<<endl;
        }

        else{
            cout<<"Balanced"<<endl<<endl;
        }
    }

    return 0;
}
