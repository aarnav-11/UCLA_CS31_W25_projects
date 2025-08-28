


#include <iostream>
using namespace std;

int main(){
    
    int num;
    int sum=0;
    
    cout<< "Enter a number: ";
    cin >> num;
    
    if (num<=0){
        cout<< "Please enter a positive integer";
        return 0;
    }
    
    for (int i= 1; i<=num/2; ++i){
        if (num%i==0){
            sum += i;
        }
    }
    
    if (sum==num){
        cout << "This number is a perfect number"<< endl;
    }
    else {
        cout<< "This number is not a perfect number"<<endl;
    }
    
    
    return 0;
}
