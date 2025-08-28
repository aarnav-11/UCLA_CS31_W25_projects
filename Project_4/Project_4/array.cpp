//
//  main.cpp
//  Project_4
//
//  Created by aarnav on 2/23/25.
//

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int locateMaximum( const string array[ ], int n );
int countFloatingPointValues( const string array[ ], int n );
int countTimes (string s, char c);
bool hasNoCapitals( const string array[ ], int n );
int shiftLeft( string array[ ], int n, int amount, string placeholder );

int main()
{
    
}

int locateMaximum( const string array[ ], int n )
{
    int max = 0;
    if (n <= 0) return -1;
    else {
        string max_string = "";
        for (int i = 0; i < n; i++)
        {
            if (array[i] > max_string)
            {max_string = array [i];
            max = i;}}
        return max;}}

int countFloatingPointValues( const string array[ ], int n )
{int floatNum = 0;
    if (n <= 0) return -1;
    else
    {for (int j = 0; j < n; j++){
            bool validFloat = true;
            string subArray = array [j];
            int countStops = countTimes(subArray, '.');
            if (subArray == "") validFloat = false;
            if (subArray == ".")validFloat = false;
            else if (countStops >= 2)
            {validFloat = false;}
            for (int i = 0; i != subArray.size(); i++)
            {if (isdigit(subArray[i]) == false && subArray[i] != '.') {
                    validFloat = false;
                    break;}}
            if (validFloat == true)
            {floatNum++;}}}
    return floatNum;}
int countTimes(string s, char c)
{int num = 0;
for (int i = 0; i != s.size(); i++){
if (s[i] == c){num++;}}
    return num;}

bool hasNoCapitals( const string array[ ], int n )
{if (n <= 0) return true;
    else {for (int i = 0; i < n; i++){
            string subArray = array [i];
            for ( char x : array[i])
            {if (isupper(x)) return false;}}
        return true;}}

int shiftLeft( string array[ ], int n, int amount, string placeholder )
{int num = 0;
if (n <= 0 || amount < 0) return -1;
    else
    {int indexPos = n - 1;
    int placeholderPos = n - 1;
    for (int i = 0; i < amount; i++){
    for (int j = 0; j < indexPos; j++){array[j] = array[j + 1];}
            if (placeholderPos >= 0)
            {array[placeholderPos] = placeholder;
            placeholderPos--;}
            if (num < n) num++;}}
    return num;}
    

int countTimes(string s, char c)
{
    int num = 0;
    for (int i = 0; i != s.size(); i++)
    {
        if (s[i] == c)
        {
            num++;
        }
    }
    return num;
}
