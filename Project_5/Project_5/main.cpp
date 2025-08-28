//
//  main.cpp
//  Project_5
//
//  Created by aarnav on 3/6/25.
//
#include <iostream>
#include <string>
#include <cassert>


#include "FrequentFlyerAccount.h"
#include "PlaneFlight.h"

using namespace std;

int main(){
//    PlaneFlight flight1(10, "Bombay", "Delhi", "Aarnav", 100);
//    PlaneFlight flight2(10, "Bombay", "Delhi", "Aarnav", 100);
//    PlaneFlight flight3(100, "Q", "S", "A", 5000);
//    FrequentFlyerAccount aarnav("Aarnav");
//
//    cout << flight1.getCost() << " " << flight1.getFromCity() << " " << flight1.getToCity()<<
//    " " << flight1.getName() << " " << flight1.getMileage() << endl;
//    aarnav.addFlightToAccount(flight1);
//    aarnav.freeFlight("Delhi", "Bombay", 99, flight2);
//    aarnav.addFlightToAccount(flight2);
//    cout << aarnav.getBalance() << " " << aarnav.addFlightToAccount(flight1) << aarnav.canEarnFreeFlight(flight2.getMileage()) << endl;
    
//    
//    PlaneFlight shortleg( "Howard", "LAX", "LAS", 49.00, 285 );
//    PlaneFlight longleg( "Howard", "LAS", "NYC", 399.00, 2800 );
//    PlaneFlight sample( "Sample", "Sample", "Sample", 0, 1 );
//    FrequentFlyerAccount account( "Howard" );
//    assert( shortleg.getFromCity( ) == "LAX" );
//    assert( shortleg.getToCity( ) == "LAS" );
//    assert( shortleg.getName( ) == "Howard" );
//    assert( std::to_string( shortleg.getCost( ) ) == "49.000000" );
//    assert( std::to_string( shortleg.getMileage( ) ) == "285.000000" );
//    // account balance starts at zero...
//    assert( std::to_string( account.getBalance( ) ) == "0.000000" );
//    assert( account.getName( ) == "Howard" );
//    assert( account.canEarnFreeFlight( 3300.00 ) == false );
//    // flights add to an account balance
//    assert( account.addFlightToAccount( shortleg ) == true ); // returns true because the names match
//    assert( account.addFlightToAccount( longleg ) == true ); // returns true because the names match
//    assert(account.addFlightToAccount(sample) == false);
//    assert( std::to_string( account.getBalance( ) ) == "3085.000000" );
//    // free flights reduce an account balance
//    if (account.canEarnFreeFlight( 285 ))
//    {
//    assert( account.freeFlight( "LAS", "LAX", 285, sample ) == true );
//    // Howard earned a free flight...
//    assert( sample.getName( ) == "Howard" );
//    assert( std::to_string( sample.getCost( ) ) == "0.000000" );
//    assert( sample.getFromCity( ) == "LAS" );
//    assert( sample.getToCity( ) == "LAX" );
//    assert( std::to_string( sample.getMileage( ) ) == "285.000000" );
//    // account has been reduced for this free flight...
//    assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
//    }
//    else
//    {
//    assert( false ); // there are enough miles in the account...
//    }
//    // non-matching names are ignored
//    PlaneFlight muffin( "Muffin", "LAX", "Doggie Heaven", 500, 500 );
//    assert( account.addFlightToAccount( muffin ) == false );
//    assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
//    
//        //test case 3
//        PlaneFlight f1("howard", "lax", "las", 65.00, 285);
//    f1.setToCity("lax");
//    f1.setFromCity("las");
//    assert(f1.getToCity() == "las");
//    assert(f1.getFromCity() == "lax");
//
//        //test case 4
//    PlaneFlight f2("luzuriaga", "lax", "lax", 0, 0);
//    f2.setToCity("");
//    f2.setFromCity("");
//    f2.setName("");
////    assert(f2.getFromCity() == "lax");
//    assert(f2.getToCity() == "");
//    assert(f2.getCost() == 0);
//    assert(f2.getMileage() == -1);
//    assert(f2.getName() == "luzuriaga");
//
//        //test case 5
//    PlaneFlight f3("", "lax", "jfk", 1000.43, 4);
//    FrequentFlyerAccount a1("marc");
//    f3.setName("marc");
//    assert(a1.addFlightToAccount(f3) == true);
//    f3.setCost(-1);
//    f3.setToCity("");
//    f3.setMileage(0);
//    assert(a1.addFlightToAccount(f3) == false);
//    assert(f3.getFromCity() == "lax");
//    assert(f3.getToCity() == "jfk");
//    assert(f3.getCost() == -1);
//    assert(f3.getName() == "marc");
//    assert(f3.getMileage() == -1);
//        
//        //test case 6
//    PlaneFlight f4("jane smith", "", "chicago", -50, 0);
//    f4.setName("");
//    assert(f4.getName() == "jane smith");
//    assert(f4.getFromCity() == "");
//    assert(f4.getToCity() == "chicago");
//    assert(f4.getCost() == -1);
//    assert(f4.getMileage() == -1);
//    // sample test code
//  
//    PlaneFlight test("Maiya", "SJC", "BOS", -5, -34);
//    PlaneFlight week("", "", "", 245.53, 1200);
//    
//    //regular tests not changing values
//    assert(shortleg.getName() == "Howard");
//    assert(shortleg.getFromCity() == "LAX");
//    assert(shortleg.getToCity() == "LAS");
//    assert(longleg.getCost() == 399.00);
//    assert(sample.getCost() == 0);
////    assert(sample.getMileage() == 1);
//    assert(std::to_string(shortleg.getCost()) == "49.000000");
//    assert(std::to_string(shortleg.getMileage()) == "285.000000");
//
//    //invalid test case assignments
//    assert(week.getName() == "");
//    assert(sample.getFromCity() == "");
//    assert(sample.getToCity() == "");
//    assert(week.getFromCity() == "");
//    assert(week.getToCity() == "");
//    assert(test.getCost() == -1);
//    assert(test.getMileage() == -1);
//    
//    //testing invalid to,from,names --> make sure they don't change
//    shortleg.setFromCity("LAS");  //same from and to city
//    assert(shortleg.getFromCity() == "LAX");
//    
//    shortleg.setName(""); //empty name
//    assert(shortleg.getName() == "Howard");
//    
//    longleg.setToCity("LAS"); //same to and from city
//    longleg.setToCity("");  //empty to city
//    assert(longleg.getToCity() == "NYC");
//    
//    test.setFromCity("BOS"); //same from and to city
//    test.setFromCity("");  //empty from city
//    assert(test.getFromCity() == "SJC");
//    
//    //invalid if same To and From city
//    PlaneFlight springbreak("Maiya", "LAX", "LAX", 256.33, 651);
//    assert(springbreak.getFromCity() == "");
//    assert(springbreak.getToCity() == "");
//    
//    // account balance starts at zero...
////    assert(std::to_string(account.getBalance()) == "0.000000");
//    assert(account.getName() == "Howard");
//    assert(account.canEarnFreeFlight(3300.00) == false);
//    
//    // flights add to an account balance
//    assert(account.addFlightToAccount(shortleg) == true);  // returns true because the names match
//    assert(account.addFlightToAccount(longleg) == true);   // returns true because the names match
////    assert(account.addFlightToAccount(sample) == false);
//    assert(account.addFlightToAccount(test) == false);
//    assert(std::to_string(account.getBalance()) == "3085.000000");
//
//    assert(account.canEarnFreeFlight(-9) == false);
//    
//    if (account.canEarnFreeFlight(285))
//    {
//        assert(account.freeFlight("LAS", "LAX", 285, sample) == true);
//        // Howard earned a free flight...
//        assert(sample.getName() == "Howard");
//        assert(std::to_string(sample.getCost()) == "0.000000");
//        assert(sample.getFromCity() == "LAS");
//        assert(sample.getToCity() == "LAX");
//        assert(std::to_string(sample.getMileage()) == "285.000000");
//        // account has been reduced for this free flight...
//        assert(std::to_string(account.getBalance()) == "2800.000000");
//    }
//    else
//    {
//        assert(!account.canEarnFreeFlight(285));  // there are enough miles in the account...
//    }
//    // non-matching names are ignored
//    PlaneFlight maiya("Maiya", "SFO", "JFK", 429, 3654);
//    assert(account.addFlightToAccount(maiya) == false);  //account refers to Howard
//    assert(std::to_string(account.getBalance()) == "2800.000000");
//    
//    cout << "all tests passed!" << endl;
//    return 0;
//
//    

//    PlaneFlight shortleg("howard", "lax", "las", 49.00, 285);
//    PlaneFlight longleg("howard", "las", "nyc", 399.00, 2800);
//
//    PlaneFlight sample("sample", "sample", "sample", 0, 1);
//    FrequentFlyerAccount account("howard");
//    assert(shortleg.getFromCity() == "lax");
//    assert(shortleg.getToCity() == "las");
//    assert(shortleg.getName() == "howard");
//    assert(to_string(shortleg.getCost()) == "49.000000");
//    assert(to_string(shortleg.getMileage()) == "285.000000");
//
//        // account balance starts at zero...
//    assert(std::to_string(account.getBalance()) == "0.000000");
//    assert(account.getName() == "howard");
//    assert(account.canEarnFreeFlight(3300.00) == false);
//
//        // flights add to an account balance
//    assert(account.addFlightToAccount(shortleg) == true);  // returns true because the names match
//    assert(account.addFlightToAccount(longleg) == true);   // returns true because the names match
//    assert(std::to_string(account.getBalance()) == "3085.000000");
//
//        // free flights reduce an account balance
//    if (account.canEarnFreeFlight(285))
//        {
//            assert(account.freeFlight("las", "lax", 285, sample) == true);
//            // howard earned a free flight...
//            assert(sample.getName() == "howard");
//            assert(std::to_string(sample.getCost()) == "0.000000");
//            assert(sample.getFromCity() == "las");
//            assert(sample.getToCity() == "lax");
//            assert(std::to_string(sample.getMileage()) == "285.000000");
//            // account has been reduced for this free flight...
//            assert(std::to_string(account.getBalance()) == "2800.000000");
//        }
//        else
//        {
//            assert(false);  // there are enough miles in the account...
//        }
//        // non-matching names are ignored
//        PlaneFlight muffin("muffin", "lax", "doggie heaven", 500, 500);
//    assert(account.addFlightToAccount(muffin) == false);
//    assert(std::to_string(account.getBalance()) == "2800.000000");
//
//        //test case 3
//        PlaneFlight f1("howard", "lax", "las", 65.00, 285);
//    f1.setToCity("lax");
//    f1.setFromCity("las");
//    assert(f1.getToCity() == "las");
//    assert(f1.getFromCity() == "lax");
//
//        //test case 4
//        PlaneFlight f2("luzuriaga", "lax", "lax", 0, 0);
//    f2.setToCity("");
////    f2.setFromCity("");
//    f2.setName("");
////    assert(f2.getFromCity() == "lax");
//    assert(f2.getToCity() == "");
//    assert(f2.getCost() == 0);
//    assert(f2.getMileage() == -1);
//    assert(f2.getName() == "luzuriaga");
//
//        //test case 5
//        PlaneFlight f3("", "lax", "jfk", 1000.43, 4);
//    FrequentFlyerAccount a1("marc");
//    f3.setName("marc");
//    assert(a1.addFlightToAccount(f3) == true);
//    f3.setCost(-1);
//    f3.setToCity("");
//    f3.setMileage(0);
//    assert(a1.addFlightToAccount(f3) == false);
//    assert(f3.getFromCity() == "lax");
//    assert(f3.getToCity() == "jfk");
//    assert(f3.getCost() == -1);
//    assert(f3.getName() == "marc");
//    assert(f3.getMileage() == -1);
//        
//        //test case 6
//        PlaneFlight f4("jane smith", "", "chicago", -50, 0);
//    f4.setName("");
//    assert(f4.getName() == "jane smith");
//    assert(f4.getFromCity() == "");
//    assert(f4.getToCity() == "chicago");
//    assert(f4.getCost() == -1);
//    assert(f4.getMileage() == -1);
//
//        //test case 7
//        PlaneFlight shortleg2("howard", "lax", "las", 49.00, 0);
//        PlaneFlight longleg2("howard", "las", "nyc", 399.00, 2800);
//
//        PlaneFlight sample2("sample", "sample", "sample", 0, 1);
//    FrequentFlyerAccount account2("howard");
//    assert(shortleg2.getFromCity() == "lax");
//    assert(shortleg2.getToCity() == "las");
//    assert(shortleg2.getName() == "howard");
//    assert(to_string(shortleg2.getCost()) == "49.000000");
//    assert(to_string(shortleg2.getMileage()) == "-1.000000");
//
//        // account balance starts at zero...
//    assert(std::to_string(account2.getBalance()) == "0.000000");
//    assert(account2.getName() == "howard");
//    assert(account2.canEarnFreeFlight(2799.00) == false);
//
//        // flights add to an account balance
//    assert(account2.addFlightToAccount(shortleg2) == true);  // returns true because the names match
//    assert(account2.addFlightToAccount(longleg2) == true);   // returns true because the names match
//    assert(account2.addFlightToAccount(f2) == false);
//    assert(std::to_string(account2.getBalance()) == "2799.000000");
//    assert(account2.canEarnFreeFlight(2799.00) == true);
//
//        // free flights reduce an account balance
//    if (account2.canEarnFreeFlight(285))
//        {
//            assert(account2.freeFlight("las", "lax", 285, sample2) == true);
//            // howard earned a free flight...
//            assert(sample2.getName() == "howard");
//            assert(std::to_string(sample2.getCost()) == "0.000000");
//            assert(sample2.getFromCity() == "las");
//            assert(sample2.getToCity() == "lax");
//            assert(std::to_string(sample2.getMileage()) == "285.000000");
//            // account has been reduced for this free flight...
//            assert(std::to_string(account2.getBalance()) == "2514.000000");
//        }
//        else
//        {
//            assert(false);  // there are enough miles in the account...
//        }
//
//        //test case 8
//        PlaneFlight shortleg1("howard", "lax", "las", 49.00, 0);
//        PlaneFlight longleg1("howard", "las", "nyc", 399.00, 2800);
//
//        PlaneFlight sample1("sample", "sample", "sample", 0, 1);
//    FrequentFlyerAccount account1("howard");
//    assert(shortleg1.getFromCity() == "lax");
//    assert(shortleg1.getToCity() == "las");
//    assert(shortleg1.getName() == "howard");
//    assert(to_string(shortleg1.getCost()) == "49.000000");
//    assert(to_string(shortleg1.getMileage()) == "-1.000000");
//
//        // account balance starts at zero...
//    assert(std::to_string(account1.getBalance()) == "0.000000");
//    assert(account1.getName() == "howard");
//    assert(account1.canEarnFreeFlight(2799.00) == false);
//
//        // flights add to an account balance
//    assert(account1.addFlightToAccount(shortleg1) == true);  // returns true because the names match
//    assert(account1.addFlightToAccount(longleg1) == true);   // returns true because the names match
//    assert(account1.addFlightToAccount(f2) == false);
//    assert(std::to_string(account1.getBalance()) == "2799.000000");
//    assert(account1.canEarnFreeFlight(2799.00) == true);
//
//        // free flights reduce an account balance
//    if (account1.canEarnFreeFlight(2850))
//        {
//            assert(false);  // there are enough miles in the account...
//        }
//    assert(std::to_string(account1.getBalance()) == "2799.000000");
//    assert(account1.getName() == "howard");
//    cout << "all test cases passed!" << endl;

//     sample test code
//     PlaneFlight shortleg( "Howard", "LAX", "LAS", 49.00, 285 );
//     PlaneFlight longleg( "Howard", "LAS", "NYC", 399.00, 2800 );
//     PlaneFlight sample( "Sample", "Sample", "Sample", 0, 1 );
//     FrequentFlyerAccount account( "Howard" );
//     assert( shortleg.getFromCity( ) == "LAX" );
//     assert( shortleg.getToCity( ) == "LAS" );
//     assert( shortleg.getName( ) == "Howard" );
//     assert( std::to_string( shortleg.getCost( ) ) == "49.000000" );
//     assert( std::to_string( shortleg.getMileage( ) ) == "285.000000" );
//     // account balance starts at zero...
//     assert( std::to_string( account.getBalance( ) ) == "0.000000" );
//     assert( account.getName( ) == "Howard" );
//     assert( account.canEarnFreeFlight( 3300.00 ) == false );
//     // flights add to an account balance
//     assert( account.addFlightToAccount( shortleg ) == true ); // returns true because the names match
//     assert( account.addFlightToAccount( longleg ) == true ); // returns true because the names match
//     assert( std::to_string( account.getBalance( ) ) == "3085.000000" );
//     // free flights reduce an account balance
//     if (account.canEarnFreeFlight( 285 ))
//     {
//     assert( account.freeFlight( "LAS", "LAX", 285, sample ) == true );
//     // Howard earned a free flight...
//     assert( sample.getName( ) == "Howard" );
//     assert( std::to_string( sample.getCost( ) ) == "0.000000" );
//     assert( sample.getFromCity( ) == "LAS" );
//     assert( sample.getToCity( ) == "LAX" );
//     assert( std::to_string( sample.getMileage( ) ) == "285.000000" );
//     // account has been reduced for this free flight...
//     assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
//     }
//     else
//     {
//     assert( false ); // there are enough miles in the account...
//     }
//     // non-matching names are ignored
//     PlaneFlight muffin( "Muffin", "LAX", "Doggie Heaven", 500, 500 );
//     assert( account.addFlightToAccount( muffin ) == false );
//     assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
//     cout << "all tests passed!" << endl;
//     return( 0 );
}
