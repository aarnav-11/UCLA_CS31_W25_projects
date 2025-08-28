//
//  FrequentFlyerAccount.cpp
//  Project_5
//
//  Created by aarnav on 3/6/25.
//
#include <iostream>
#include <string>
#include "FrequentFlyerAccount.h"

using namespace std;

FrequentFlyerAccount::FrequentFlyerAccount(string name){
        getBalance();
        getName();
        this -> name = name;
    }
    
    double FrequentFlyerAccount::getBalance(){
        return balance;
    }
    string FrequentFlyerAccount::getName(){
        return name;
    }
    
    bool FrequentFlyerAccount::addFlightToAccount (PlaneFlight flight){
        if (name == flight.getName() && flight.getCost() >= 0 && flight.getToCity() != flight.getFromCity() && flight.getToCity() != "" && flight.getFromCity() != ""){
            this -> balance = balance + flight.getMileage();
            return true;
        }
        else{
            return false;
        }
    }
    
    bool FrequentFlyerAccount::canEarnFreeFlight(double mileage){
        if (getBalance() >= mileage && mileage > 0){
            return true;
        }
        else{
            return false;
        }
    }
    bool FrequentFlyerAccount::freeFlight (string from, string to, double mileage, PlaneFlight &flight)
    {
        if (this -> balance >= mileage && from != to && mileage > 0 && from != "" && to != ""){
            this -> balance -= mileage;
            flight.setCost(0);
            flight.setMileage(mileage);
            flight.setToCity(to);
            flight.setFromCity(from);
            flight.setName(this -> name);
            return true;
        }
        else return false;
    }

