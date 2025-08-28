////
////  palinderome_checker.cpp
////  hello
////
////  Created by aarnav on 2/9/25.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isPalinderome(string s);
//
//int main()
//{
//    string word;
//    bool trueOrFalse = true;
//    cout << "Enter a word: ";
//    cin >> word;
//    trueOrFalse = isPalinderome(word);
//    if (trueOrFalse == false)
//    {
//        cout<< "This is not a palinderome." << endl;
//    }
//    else
//    {
//        cout << "This is a palinderome." << endl;
//    }
//    return 0;
//}
//
//bool isPalinderome(string s)
//{
//    int left = 0, right = s.length() - 1;
//    while (left < right){
//        if (s[left] != s[right]){
//            return false;
//        }
//        left++;
//        right--;
//    }
//    return true;
//}
