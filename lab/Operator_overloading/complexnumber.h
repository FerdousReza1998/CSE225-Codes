#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H


class Complexnumber
{
     private:
        int real;
        int imaginary;
    public:

        Complexnumber(int,int);
      void print();

      Complexnumber operator+(Complexnumber);
      bool operator!=(Complexnumber);

};

#endif // COMPLEXNUMBER_H
