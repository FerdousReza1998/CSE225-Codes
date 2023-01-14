#include <iostream>
#include "sortedType.h"
#include <iomanip>

using namespace std;

// create timeStamp class
class timeStamp
{
private:
int seconds, minutes, hours;
public:
timeStamp(int seconds=0, int minutes=0, int hours=0);
bool operator==(const timeStamp& t);
bool operator!=(const timeStamp& t);
bool operator<(const timeStamp& t);
bool operator>(const timeStamp& t);
friend ostream& operator<<(ostream& out, const timeStamp& t);
};

// constructor
timeStamp::timeStamp(int seconds, int minutes, int hours) : seconds(seconds), minutes(minutes), hours(hours)
{}

// overloaded operator that returns true if both seconds, minutes and hours are equal else returns false
bool timeStamp:: operator==(const timeStamp& t)
{
return seconds == t.seconds && minutes == t.minutes && hours == t.hours;
}

// overloaded operator that returns true if both seconds, minutes and hours are not equal else returns false
bool timeStamp:: operator!=(const timeStamp& t)
{
return !(*this == t);
}

// overloaded operator that returns true if this timeStamp < t
bool timeStamp:: operator<(const timeStamp& t)
{
// compare hours first
if(hours < t.hours) // this hours < t's hours
return true;
else if(hours > t.hours) // this hours > t's hours
return false;
else // hours are equal
{
if(minutes < t.minutes) // this minutes < t's minutes
return true;
else if(minutes > t.minutes) // this minutes > t's minutes
return false;
else // minutes are equal
return seconds < t.seconds; // compare seconds
}
}

// overloaded operator that returns true if this timeStamp > t
bool timeStamp:: operator>(const timeStamp& t)
{
// compare hours first
if(hours > t.hours) // this hours > t's hours
return true;
else if(hours < t.hours) // this hours < t's hours
return false;
else // hours are equal
{
if(minutes > t.minutes) // this minutes > t's minutes
return true;
else if(minutes < t.minutes) // this minutes < t's minutes
return false;
else // minutes are equal
return seconds > t.seconds;
}
}

// overloaded operator to display timeStamp
ostream& operator<<(ostream& out, const timeStamp& t)
{
out<<setw(2)<<setfill('0')<<t.seconds<<":"<<setw(2)<<setfill('0')<<t.minutes<<":"<<setw(2)<<setfill('0')<<t.hours;
return out;
}

int main()
{
// test for integers
SortedType<int> list;
cout<<list.LengthIs()<<endl;
list.InsertItem(5);
list.InsertItem(7);
list.InsertItem(4);
list.InsertItem(2);
list.InsertItem(1);

bool isEnd;
int item;

for(int i=0;i<list.LengthIs();i++)
{
list.GetNextItem(item);
cout<<item<<" ";
}
cout<<endl;

item = 6;
list.RetrieveItem(item, isEnd);

if(isEnd)
cout<<"Item is found"<<endl;
else
cout<<"Item is not found"<<endl;

item = 5;
list.RetrieveItem(item, isEnd);
if(isEnd)
cout<<"Item is found"<<endl;
else
cout<<"Item is not found"<<endl;

if(list.IsFull())
cout<<"List is full"<<endl;
else
cout<<"List is not full"<<endl;

list.DeleteItem(1);
list.ResetList();
for(int i=0;i<list.LengthIs();i++)
{
list.GetNextItem(item);
cout<<item<<" ";
}
cout<<endl;

if(list.IsFull())
cout<<"List is full"<<endl;
else
cout<<"List is not full"<<endl;

// test for timeStamp
SortedType<timeStamp> timeList;
timeList.InsertItem(timeStamp(15, 34, 23));
timeList.InsertItem(timeStamp(13, 13, 02));
timeList.InsertItem(timeStamp(43, 45, 12));
timeList.InsertItem(timeStamp(25, 36, 17));
timeList.InsertItem(timeStamp(52, 02, 20));

timeList.DeleteItem(timeStamp(25, 36, 17));

timeStamp time;

for(int i=0;i<timeList.LengthIs();i++)
{
timeList.GetNextItem(time);
cout<<time<<endl;
}

return 0;
}
