#include <bits/stdc++.h>
#include "BinarySearchTree.cpp"

using namespace std;


//recursive function to create a bst with minimum height
void BST_withMinimumHeight(TreeType<int>& bstMinimumHeight, int arr[],int start, int end)
{

    if (start > end)
        return;

    //Get the middle element and insert it to the tree
    int mid = (start + end)/2;
        cout<<arr[mid]<<" ";
    bstMinimumHeight.InsertItem(arr[mid]);

    //recursively construct the left subtree
    BST_withMinimumHeight(bstMinimumHeight, arr, start, mid - 1);

    //recursively construct the right subtree
    BST_withMinimumHeight(bstMinimumHeight, arr, mid + 1, end);

    return;
}

int main(){

        //create a tree object
    TreeType<int> bstTree;

        //print if tree is empty or not
        //expected output : Tree is Empty
    if(bstTree.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

        //insert the items : 4 9 2 7 3 11 17 0 5 1
    bstTree.InsertItem(4);
    bstTree.InsertItem(9);
    bstTree.InsertItem(2);
    bstTree.InsertItem(7);
    bstTree.InsertItem(3);
    bstTree.InsertItem(11);
    bstTree.InsertItem(17);
    bstTree.InsertItem(0);
    bstTree.InsertItem(5);
    bstTree.InsertItem(1);

        //print if tree is empty or not
        //expected output : Tree is not empty
    if(bstTree.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

        //print the length of the tree
        //expected output is : 10
    cout << "Tree Length: " << bstTree.LengthIs() << endl;

        //retrieve 9 and print whether found or not
        //expected output is Item is found.
    int item = 9;
    bool found;
    bstTree.RetrieveItem(item, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

        //retrieve 13 and print whether found or not
        //expected output is Item is not found.
    item = 13;
    bstTree.RetrieveItem(item, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

        //print the elements in the tree (inorder)
    bstTree.Print();
    cout << endl;

        //print the elements in the tree (preorder)
    bstTree.ResetTree(PRE_ORDER);
    for(int i = 0; i < bstTree.LengthIs(); i++){
        bstTree.GetNextItem(item, PRE_ORDER, found);
        cout << item << " ";
    }
    cout << endl;

        //print the elements in the tree (postorder)
    bstTree.ResetTree(POST_ORDER);
    for(int i = 0; i < bstTree.LengthIs(); i++){
        bstTree.GetNextItem(item, POST_ORDER, found);
        cout << item << " ";
    }
        cout << endl;

    TreeType<int> bstMinimumHeight;

        int arr[] = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);

        BST_withMinimumHeight(bstMinimumHeight, arr, 0, n-1);

        cout << endl;
    return 0;
}
