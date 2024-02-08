#include "Family_Car_Homework.h"

FamilyCar::FamilyCar(string brand, string model, string type, string VIN, string plateNo, int dist)
:Car(brand, model, type, VIN, plateNo)
{
    setDistanceTravelled(dist);
}

double FamilyCar::calcTax(int dist)
{
    if (dist < 500){
        return dist*0.7;
    }
    else {
        return dist*0.4;
    }
    
}

void FamilyCar::setDistanceTravelled(int dist)
{
    this->distanceTravelled = dist;
}

int FamilyCar::getDistanceTravelled()
{
    return this->distanceTravelled;
}

void FamilyCar::print()
{
    cout << "Family car: " << endl;
    cout << getBrand() << " " << getModel() << " " << getType() << " VIN: "<< getVIN() << " " << getPlateNo() << endl;
    cout << "Total charge: " << calcTax(getDistanceTravelled()) << endl;
}
