#ifndef PlaneFlight_H
#define PlaneFlight_H
#include <iostream>
#include <string>

using namespace std;

class PlaneFlight {
    public: //constructor
        PlaneFlight(string name, string fromCity, string toCity, double cost, double mileage);

        double getCost();
        void setCost(double cost);

        double getMileage();
        void setMileage(double mileage);

        string getName();
        void setName(string name);

        string getFromCity();
        void setFromCity(string fromCity);

        string getToCity();
        void setToCity(string toCity);

    private:
        double mCost;
        string mFromCity, mToCity, mName;
        double mMileage;

        
};
#endif
