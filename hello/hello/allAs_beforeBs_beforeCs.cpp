////
////  allAs_beforeBs_beforeCs.cpp
////  hello
////
////  Created by aarnav on 2/5/25.
////
//
////Implement a function int allAsBeforeBsBeforeCs(string s, bool &foundAllThree) that follows these requirements:
////
////It counts occurrences of 'A', 'B', and 'C' in the given string s and returns that count.
////It sets foundAllThree to true only if all three characters appear and all A's precede all B's, and all B's precede all C's in the string.
////If no 'A', 'B', or 'C' is found, foundAllThree should be false.
////If s is an empty string, return -1 and set foundAllThree to false.
////Example Test Cases:
////
////bool b = false;
////
////assert( allAsBeforeBsBeforeCs( "", b ) == -1 );
////assert( b == false );
////
////assert( allAsBeforeBsBeforeCs( "99912000", b ) == 0 );
////assert( b == false );
////
////assert( allAsBeforeBsBeforeCs( "1CC2BB3AA", b  ) == 6 );
////assert( b == false );
////
////assert( allAsBeforeBsBeforeCs( "123A456B789C", b ) == 3 );
////assert( b == true );
////
////assert( allAsBeforeBsBeforeCs( "1CC2BB3AABC", b ) == 8 );
////assert( b == false );
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int allAsBeforeBsBeforeCs(string s, bool &foundAllThree);
//
//int main(){
//    
//}
//
//int allAsBeforeBsBeforeCs(string s, bool &foundAllThree){
//    if (s.empty()){
//        foundAllThree = false;
//        return -1;
//    }
//    size_t i=0;
//    while(i<s.size())
//    
//    
//    return -1;
//}
//
//
//
