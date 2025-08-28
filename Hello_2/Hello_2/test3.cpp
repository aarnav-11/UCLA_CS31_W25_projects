//
//  test3.cpp
//  Hello_2
//
//  Created by aarnav on 3/20/25.
//
#include <cassert>
#include <iostream>
#include <cmath>
unsigned int countBits(unsigned long long n){
    unsigned int count = 0;
    while (n){
        n &= (n-1);
        count ++;
    }
    return count;
}

int main(){
    unsigned int n = countBits(5);
    std :: cout << n << std :: endl;
}
