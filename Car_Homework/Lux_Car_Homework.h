#ifndef LUXURYCAR_H
#define LUXURYCAR_H

#include "Car_homerwork.h"

class LuxuryCar:public Car{
public:
    LuxuryCar(string, string, string, string, string, int, string);
    virtual double calcTax(int, string); //insert a tax for extras inside func
    void setDistanceTravelled(int);
    void setExtras(string);
    int getDistanceTravelled();
    int getExtrasFee(string);
    virtual void print();
    string getExtras();

private:
    int distanceTravelled;
    string extras;
};

#endif // LUXURYCAR_H
