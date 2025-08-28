////
////  move_k_places.h
////  Hello_2
////
////  Created by aarnav on 2/18/25.
////
//
//#include <iostream>
//
//using namespace std;
//void moveNSpaces (int array[], int n);
//
//int main ()
//{
//    int size, amount;
//    char lor;
//    cout << "Enter how many numbers you are going to enter: ";
//    cin >> size;
//    int *arr = new int[size];
//    int *arr2 = new int [size];
//    
//    cout << "Enter " << size << " elements: ";
//    for (int k = 0; k < size; k++)
//    {
//        cin >> arr[k];
//    }
//    cout << "How many spaces do you want to move each element? ";
//    cin >> amount;
//    cout << "Do you want to move the elements left or right? ";
//    cin >> lor;
//    for (int i = 0; i < size; i++)
//    {
//        if (lor == 'l')
//        {
//            arr2[i] = arr[i+amount];
//            cout << arr2[i] << " ";
//        }
//        else if (lor == 'r')
//        {
//            arr2[i] = arr[i-amount];
//            for (int x = size - amount; x >= 0; x--)
//            {
//                int amount2 = amount;
//                arr2[x] = arr [amount2];
//                amount2++;
//            }
//            cout << arr2[i] << " ";
//        }
//        else return 0;
//    }
//}
//
