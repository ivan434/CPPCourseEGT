#include "Car_homerwork.h"

Car::Car(string brand, string model, string type, string VIN, string plateNo)
{
    setBrand(brand);
    setModel(model);
    setType(type);
    setVIN(VIN);
    setPlateNo(plateNo);
}

void Car::setBrand(string brand)
{
    this->brand = brand;
}

void Car::setModel(string model)
{
    this->model = model;
}

void Car::setType(string type)
{
    this->type = type;
}

void Car::setVIN(string VIN)
{
    this->VIN = VIN;
}

void Car::setPlateNo(string plateNo)
{
    this->plateNo = plateNo;
}

string Car::getBrand()
{
    return this->brand;
}

string Car::getModel()
{
    return this->model;
}

string Car::getType()
{
    return this->type;
}

string Car::getVIN()
{
    return this->VIN;
}

string Car::getPlateNo()
{
    return this->plateNo;
}

void Car::print()
{
    cout << getBrand() << " " << getModel() << " " << getType() << " VIN: "<< getVIN() << " " << getPlateNo() << endl;
}

double Car::calcTax()
{
    return 0.0;
}
