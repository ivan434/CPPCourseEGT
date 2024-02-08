#include "LuxuryCar.h"

LuxuryCar::LuxuryCar(string brand, string model, string type, string VIN, string plateNo, int dist, string extras)
:Car(brand, model, type, VIN, plateNo)
{
    setDistanceTravelled(dist);
    setExtras(extras);
}

double LuxuryCar::calcTax(int dist, string extras)
{
    if (dist < 200) {
        return dist*0.6 + getExtrasFee(extras);
    }
    else {
        return dist*0.4 + getExtrasFee(extras);
    }
}

void LuxuryCar::setDistanceTravelled(int dist)
{
    this->distanceTravelled = dist;
}

void LuxuryCar::setExtras(string extras)
{
    this->extras = extras;
}

int LuxuryCar::getDistanceTravelled()
{
    return this->distanceTravelled;
}

int LuxuryCar::getExtrasFee(string extras)
{
    if (extras == "Champagne"){
        return 100;
    }
    if (extras == "Wine"){
        return 50;
    }
    if (extras == "Chocolate"){
        return 40;
    }
    return 0;
}

void LuxuryCar::print()
{
    cout << "Luxury car: " << endl;
    cout << getBrand() << " " << getModel() << " " << getType() << " VIN: "<< getVIN() << " " << getPlateNo() << endl;
    cout << "With extras of: " << getExtras() << endl;
    cout << "total charge: " << calcTax(getDistanceTravelled(), getExtras()) << endl;
}

string LuxuryCar::getExtras()
{
    return this->extras;
}
