#include<bits/stdc++.h>

using namespace std;

struct ADate
{
    int day;
    int month;
    int year;
};

struct Person
{
    char name[20];
    struct ADate dob; //nesting structure
    struct Person *nextPerson; // self-referencing
};



int main()
{
    struct ADate d1;
    d1.day = 28;
    d1.month = 6;
    d1.year = 2021;

    cout << "d1 is: " << d1.day <<"-" << d1.month << "-"<< d1.year << endl;

    struct ADate *ptrd2 = (struct ADate *) malloc (sizeof(struct ADate));

   // struct ADate *ptrd2  = new struct ADate;   == int *a = new int

    ptrd2 -> day = 29;
    ptrd2 -> month = 6;
    ptrd2 -> year = 2021;

    cout << "d2 is: " << ptrd2->day <<"-" << ptrd2->month << "-"<< ptrd2->year << endl;

    struct Person *p1 = (struct Person *) malloc (sizeof(struct Person));
    struct Person *p2 = (struct Person *) malloc (sizeof(struct Person));


    strcpy (p1 -> name,"Alice");
    (p1 -> dob).day = 3;
    (p1 -> dob).month = 3;
    (p1 -> dob).year = 2001;
    //p1 -> nextPerson = p2;

    strcpy (p2 -> name,"Bob");
    (p2 -> dob).day = 4;
    (p2 -> dob).month = 4;
    (p2 -> dob).year = 2001;
   // p2 -> nextPerson = p2;



    cout << "p1 is: " << p1->name <<"-" << (p1->dob).day << "-"<< (p1->dob).month << "-"<< (p1->dob).year << endl;

    cout << "p2 is: " << p2->name <<"-" << (p2->dob).day << "-"<< (p2->dob).month << "-"<< (p2->dob).year << endl;

}
