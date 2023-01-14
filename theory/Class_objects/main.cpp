#include<bits/stdc++.h>

using namespace std;

class Person

{
private:
    int id;
    char name[20];
    char dob[10];

public:
    void setId (int id);
    int getId();

    void setName (char *name)
    {
        strcpy(this->name, name);
    }

    char* getName()
    {
        return this->name;
    }

    void setDob (char *dob)
    {
        strcpy(this->dob, dob);
    }

    char* getDob()
    {
        return this->dob;
    }

    Person()
    {
        cout << "Inside no-arg constructor" << endl;
    }

    Person(int id, char *name, char *dob)
    {
        cout << "Inside constructor" << endl;
        this -> id = id;
        strcpy(this->name, name);
        strcpy(this->dob, dob);
    }

    ~Person()
    {
        cout << "Destructor called" << endl;
    }

    void print()
    {
        cout << "ID: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "DoB: " << this->dob << endl;
    }
};

void Person :: setId(int id)
{
    this -> id = id;
}

int Person :: getId()
{
    return this->id;
}

int main()
{
    Person p1;
    p1.setId(1001);
    p1.setName("Alice");
    p1.setDob("01-01-2000");

 // cout << p1.getId() << " " << p1.getName() << " " <<p1.getDob() << endl;  // same

    p1.print();


    Person *p2 = new Person(1002, "Bob", "02-02-2002");
    cout << p2 -> getId() << " " << p2->getName() << " " <<p2->getDob() << endl;


    cout <<endl<<"same thing"<<endl<<endl;

   p2->print();

    return 0;
}
