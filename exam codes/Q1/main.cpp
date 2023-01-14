
///question 1

#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
       int key;
       Node *left;
       Node *right;
};


Node *insert(int val)
{
   Node *temp = new Node();
   temp->key = val;
   temp->left = NULL;
   temp->right = NULL;
   return temp;
}

int f1(Node *root)
{

   if(root == NULL)
       return 0;

   int sum = 0;

   queue<pair<Node *, bool> > q;

   //As root node is not right child, so set bool to false
   q.push(make_pair(root, false));

   while(!q.empty())
   {

       Node *temp = q.front().first;
       bool cond = q.front().second;
       q.pop();


       if(cond)
           sum += temp->key;

       if(temp->left)
       {
           q.push(make_pair(temp->left, true));
       }
       if(temp->right)
       {
           q.push(make_pair(temp->right, false));
       }
   }

   return sum;
}
