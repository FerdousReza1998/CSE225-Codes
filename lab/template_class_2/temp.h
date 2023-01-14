#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

template<class Superman>

class Calculator
{

private :

    Superman num1,num2;
    Superman sum;
    Superman diff;
    Superman product;
    Superman quotient;
    Superman  remainder;
    Superman  percent;

    public:
      Calculator(Superman,Superman);

      void Sum();
      Superman getSum();

      void Subtract();
      Superman getSubtraction();

      void Product();
      Superman getProduct();

      void Division();
      Superman getDivision();

      void Remainder();
     Superman getRemainder();

      void Percent();
     Superman getPercent();
};

#endif // CALC_H
