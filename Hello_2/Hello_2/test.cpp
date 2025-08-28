////
////  test.cpp
////  Hello_2
////
////  Created by aarnav on 3/7/25.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Rectangle{
//private:
//    double m_length;
//    double m_width;
//public:
//    Rectangle(double length, double width){
//        m_length = length;
//        m_width = width;
//        
//    }
//    
//    double getLength(){
//        return m_length;
//    }
//    double getWidth(){
//        return m_width;
//    }
//    
//    void setWidth(double width){
//        width = m_width;
//    }
//    void setLength (double length){
//        length = m_length;
//    }
//    
//    double area (double length, double width){
//        int area = length * width;
//        return area;
//    }
//    friend void printRectangleInfo(Rectangle &rect);
//};
//
//void PrintRectangleInfo(Rectangle &rect){
//    cout << rect.m_width << "   " << rect.m_length << "     " << rect.area();
//}
//
//
//int main(){
//    Rectangle rect1{5,5};
//    printRectangleinfo(rect1);
//}
