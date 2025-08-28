//
//  main.cpp
//  Project_5
//
//  Created by aarnav on 3/4/25.
//

#include <iostream>
#include <string>
#include "PlaneFlight.h"

using namespace std;

    PlaneFlight::PlaneFlight(string name, string fromCity, string toCity, double cost, double mileage){

     
        setName(name);
        if (fromCity != toCity){
            setFromCity(fromCity);
            setToCity(toCity);
        }
        setCost(cost);
        setMileage(mileage);
    }
    
    double PlaneFlight::getCost(){
        return mCost;
    }
    void PlaneFlight::setCost(double cost){
        if (cost < 0){
            mCost = -1;
        }
        else{
            mCost = cost;
        }
    }
    
    double PlaneFlight::getMileage(){
        return mMileage;
    }
    void PlaneFlight::setMileage(double mileage){
        if (mileage <= 0){
            mMileage = -1;
        }
        else{
            mMileage = mileage;
        }
    }
    
    string PlaneFlight::getName(){
        return mName;
    }
    void PlaneFlight::setName(string name){
        if (name != "")
            mName = name;
    }
    
    string PlaneFlight::getFromCity(){
        return mFromCity;
    }
    void PlaneFlight::setFromCity(string fromCity){
        if (fromCity != "" && fromCity != mToCity){
            mFromCity = fromCity;
        }
    }
    
    string PlaneFlight::getToCity(){
        return mToCity;
    }
    void PlaneFlight::setToCity(string toCity){
        if (toCity != "" && toCity != mFromCity){
            mToCity = toCity;
        }
    }
