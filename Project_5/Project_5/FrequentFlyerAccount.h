//
//  FrequentFlyerAccount.h
//  Project_5
//
//  Created by aarnav on 3/6/25.
//
#ifndef FrequentFlyerAccount_H
#define FrequentFlyerAccount_H

#include "PlaneFlight.h"
#include <iostream>

using namespace std;

class FrequentFlyerAccount {
    public:
        FrequentFlyerAccount(string name);

        double getBalance();
        string getName();

        bool addFlightToAccount(PlaneFlight flight);

        bool canEarnFreeFlight(double mileage);

        bool freeFlight(string from, string to, double mileage, PlaneFlight& flight);

    private:
        string name;
        double balance;
};
#endif
