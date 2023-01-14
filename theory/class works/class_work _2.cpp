
///write a c/c++ program that can interchange or swap 3 variables through pointers

#include<bits/stdc++.h>

using namespace std;

/*
#define ll long long
#define quick ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define line "\n"
#define pb push_back
#define gap " "
#define pi acos(-1.0)


void rearrange(int a, int b, int c)

{
    int *x=&a;
    int *y=&b;
    int *z=&c;

    int temp=*x;

    a = *y;
    b = *z;
    c = temp;

    cout<<a<<gap<<b<<gap<<c<<line;

}

int main()
{
    quick;

    int a=10, b=20, c=30;

    cout<<"Initial values:"<<line<<a<<gap<<b<<gap<<c<<line;

    cout<<"After change:"<<line;

    rearrange(a,b,c);

    return 0;

}
*/





void rearrange(int *x, int *y, int *z)
{
    int temp = *x;
    int  a = *y;
    int  b = *z;
    int  c = temp;

     cout<<a<<" "<<b<<" "<<c<<endl;
}



int main ()
{

     int a=10, b=20, c=30;

      cout<<"Initial values:"<<endl<<a<<" "<<b<<" "<<c<<endl;

      cout<<"After change:"<<endl;

     rearrange(&a,&b,&c);

      return 0;


}


