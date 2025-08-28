////
////  findDuplicate.cpp
////  Hello_2
////
////  Created by aarnav on 2/19/25.
////
//
//#include <iostream>
//using namespace std;
//
//int findDuplicate(int A[], int n);
//
//int main ()
//{
//    int A[7] = {4, 6, 5, 3, 3, 6, 1};
//    int i = findDuplicate(A, 7);
//    cout << i << endl;
//}
//
//int findDuplicate(int A[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int k = i+1; k<n; k++)
//        {
//            if(A[i] == A[k] && A[i] <= n-1)
//            {
//                return A[i];
//            }
//        }
//    }
//    return 0;
//}
