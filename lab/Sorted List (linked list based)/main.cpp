#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"

using namespace std;

class timeStamp {
    public:
        int sec;
        int min;
        int hr;
        timeStamp() {
            sec= min =hr = 0;
        }
        timeStamp(int s, int m, int h) {
            sec = s;
            min = m;
            hr = h;
        }
        timeStamp(timeStamp &o) {
            sec = o.sec;
            min = o.min;
            hr= o.hr;
        }

        //Overload =, <, > and !=
        bool operator==(timeStamp& o) {
            return sec==o.sec && min==o.min && hr==o.hr;
        }

        bool operator!=(timeStamp& o) {
            return sec!=o.sec || min!=o.min || hr!=o.hr;
        }

        bool operator<(timeStamp& o) {
            return hr < o.hr || (hr==o.hr && min<o.min) || (hr==o.hr && min==o.min && sec<o.sec);
        }

        bool operator>(timeStamp& o) {
            return hr > o.hr || (hr==o.hr && min>o.min) || (hr==o.hr && min==o.min && sec>o.sec);
        }


        //To print the object
        friend ostream& operator<<(ostream& o, const timeStamp& t);
};

ostream& operator<<(ostream& o, const timeStamp& t) {
    return o << (t.sec<10?"0":"") << t.sec << ":" << (t.min<10?"0":"") << t.min << ":" <<
    (t.hr<10?"0":"") << t.hr << endl;
}
int main()
{
    //Create a list of integers
    SortedType<int> myList;

    //print length of list
    cout << myList.LengthIs() << endl;

    //Insert 5 items
    myList.InsertItem(5);
    myList.InsertItem(7);
    myList.InsertItem(4);
    myList.InsertItem(2);
    myList.InsertItem(1);

    //Print list
    int x;
    for(int i=0;i<myList.LengthIs();i++) {
        myList.GetNextItem(x);
        cout << x << " ";
    }
    cout <<endl;

    bool f;
    //Retrieve 6
    x = 6;
    myList.RetrieveItem(x, f);
    if(f) cout << "Item is found\n";
    else cout <<"Item is not found\n";

    //Retrieve 5
    x = 5;
    myList.RetrieveItem(x, f);
    if(f) cout << "Item is found\n";
    else cout <<"Item is not found\n";

    if(myList.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    //Delete 1
    myList.DeleteItem(1);

    //Print list
    myList.ResetList();
    for(int i=0;i<myList.LengthIs();i++) {
        myList.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    //Print id the list is full or not
    if(myList.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    //list of objects of type timeStamp
    SortedType<timeStamp> times;

    //Create 5 objects
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,2);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,2,20);

    //Insert these
    times.InsertItem(t1);
    times.InsertItem(t2);
    times.InsertItem(t3);
    times.InsertItem(t4);
    times.InsertItem(t5);


    //Delete t4
    times.DeleteItem(t4);

    //Print the list
    timeStamp t;
    times.ResetList();
    for(int i=0;i<times.LengthIs();i++) {
        times.GetNextItem(t);
        cout << t;
    }
    cout << endl;
}
