#include <iostream>

using namespace std;


class AbstractCarCompany {
    public:
        string Brand, ManufactureLocation;
        int NumberOfCars;
        
        void getDescription(){
            cout << "AbstractCarCompany Descprition" << endl;
        }
};

class Country {
    public:
        string CountryName;
        
        void getDescription(){
            cout << "Class for: " << CountryName << endl;
        }
};

class CarCompany : public AbstractCarCompany {
    public:
        
        
        void getDescription(){
            cout << "Brand: " << Brand << endl;
            cout << "Manufacture Location: " << ManufactureLocation << endl;
            cout << "Number of cars manufactured: " << NumberOfCars << endl;
        }
};

class AbstractCar {
    public:
        string Brand, Model, Color;
        int ManufactureDate;
        
        virtual void move()=0;
        void getDescription() {
            cout << "AbstractCar Descprition" << endl;
        }
};

class Car: public AbstractCar {
    public:
    
        Country country;
        
        
        void move() {
            cout <<Brand<< " "<< Model << " Is moving" << endl;
        }
        
        
        void getDescription(){
            cout << "Brand: " << Brand << endl;
            cout << "Model: " << Model << endl;
            cout << "Manufacture Date: " << ManufactureDate << endl;
            cout << "Color: " << Color << endl;
            cout << "Sold in: " << country.CountryName << endl; 
            
        }
    
};



int main()
{
    CarCompany volswagen;
    volswagen.Brand = "Volswagen";
    volswagen.ManufactureLocation = "Germany";
    volswagen.NumberOfCars = 50000000;
    volswagen.getDescription();
    
    Country usa;
    usa.CountryName = "USA";
    
    Car beetle;
    beetle.Brand = "Volswagen";
    beetle.Model = "Beetle";
    beetle.ManufactureDate = 1963;
    beetle.Color = "Orange";
    beetle.country = usa;
    beetle.move();
    
    beetle.getDescription();
    
    return 0;
}