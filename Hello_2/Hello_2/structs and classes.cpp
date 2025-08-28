////
////  structs and classes.cpp
////  Hello_2
////
////  Created by aarnav on 3/4/25.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Car {
//
//private:
//    int price;
//    
//public:
//    int age;
//    string model;
//    string build;
//    
//    void accelerate() {
//        cout << "The car is speeding up" << endl;
//    }
//    void slow() {
//        cout << "The car is slowing down" << endl;
//    }
//    
//    Car(int age, string model, string build, int price) {
//        this -> age = age;
//        this -> model = model;
//        this -> build = build;
//        setPrice(price);
//    }
//    
//    int getPrice(){
//        return price;
//    }
//    void setPrice(int price){
//        if (price>10000)
//        {
//            this -> price = 10000;
//        }
//        else if (price<0)
//        {
//            this -> price = 0;
//        }
//        else {
//            this -> price = price;
//        }
//    }
//    
//};
//
//int main() {
//    Car car1 (11, "SUV", "Rexton", 1111111);
//    Car car2 (7, "Hybrid", "Kia Seltos",-300);
//    
//    cout << car1.age << "\n" << car1.model << "\n" << car1.build << "\n" << car1.getPrice() << endl;
//    car1.accelerate();
//    cout << car2.age << "\n" << car2.model << "\n" << car2.build << "\n" << car2.getPrice() << endl;
//    car2.slow();
//}
