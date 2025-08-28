//
//  main.cpp
//  Project 3
//
//  Created by aarnav on 2/3/25.
//


#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isValidQC(string results);
int passQC(string results);
int defectQC(string results);
int totalQC(string results);
int batches(string results);

int main(){
    
//    //testing pass
//    assert(passQC("Q2p1d1") == 1);
//    assert(passQC("") == -1);
//    assert(passQC("Q34p23d11") == 23);
//    assert(passQC("q2p1d1") == -1);
//    assert(passQC("Q2p0d2") == 0);
//    assert(passQC("Q2pd1") == -1);
//    assert(passQC("Q2p1d") == -1);
//    assert(passQC("Q2p1d1Q8d3p5") == 6);
//    assert(passQC("Q5p0003d02") == -1);
//    assert(passQC("Q100d50p50Q3p2d1") == 52);
//    assert(passQC("Q100d50p50Q4p3d1Q20d15p5") == 58);
//    assert(passQC("Q23p12d10.Q44p21d23") == -1);
//    assert(passQC("Tkd-23f") == -1);
//    assert(passQC("Q1pd1") == -1); // Missing number
//    assert(passQC("Q1p1d") == -1); // Missing defect number
//    assert(passQC("Q5p0003d2") == -1); // No leading zeros
//    assert(passQC("Q5p0d0") == -1);
//    
//    //testing defect
//    assert(defectQC("Q2p1d1") == 1);
//    assert(defectQC("") == -1);
//    assert(defectQC("Q1d1p1") == -1);
//    assert(defectQC("Q2d0p2Q200d100p100") == 100);
//    assert(defectQC("Q5p0003d02") == -1);
//    assert(defectQC("Q100d50p50Q1p0d1") == 51);
//    assert(defectQC("Q100d50p50Q1p0d1Q20d15p5") == 66);
//    assert(defectQC("Q20d15p5Q100d45p20") == -1);
//    assert(defectQC("q1p0d1") == -1);
//    assert(defectQC("Q1pd1") == -1);
//    assert(defectQC("Q1p1d") == -1);
//    assert(defectQC("Q23p12d10.Q44p21d23") == -1);
//    assert(defectQC("Tkd-23f") == -1);
//    
//    //testing total
//    assert(totalQC("Q2p1d1") == 2);
//    assert(totalQC("") == -1);
//    assert(totalQC("Q1d1p1") == -1);
//    assert(totalQC("Q2d0p2Q200d100p100") == 202);
//    assert(totalQC("Q5p0003d02") == -1);
//    assert(totalQC("Q100d50p50Q1p0d1") == 101);
//    assert(totalQC("Q100d50p50Q1p0d1Q20d15p5") == 121);
//    assert(totalQC("Q20d15p5Q100d45p20") == -1);
//    assert(totalQC("q1p0d1") == -1);
//    assert(totalQC("Q1pd1") == -1);
//    assert(totalQC("Q1p1d") == -1);
//    assert(totalQC("Q23p12d10.Q44p21d23") == -1);
//    assert(totalQC("Tkd-23f") == -1);
//    
//    //testing batches
//    assert(batches("Q2p1d1") == 1);
//    assert(batches("") == -1);
//    assert(batches(" ") == -1);
//    assert(batches("Q12p3d9") == 1);
//    assert(batches("Q2p1d1Q9d4p5") == 2);
//    assert(batches("Q100d56p44Q2p0d2Q5d3p2") == 3);
//    assert(batches("Q12p3d9q8d6p2") == -1);
//    assert(batches("Q1p0d0Q100p20d80") == -1);
//    assert(batches("Q45d23p22") == 1);
//    assert(batches("Q5p0003d02") == -1);
//    assert(batches("q1p0d1") == -1);
//    assert(batches("Q1pd1") == -1);
//    assert(batches("Q1p1d") == -1);
//    assert(batches("Q23p12d10.Q44p21d23") == -1);
//    assert(batches("Q4p3d1Q1pd1") == -1);
//    assert(batches("Tkd-23f") == -1);
//    
//    //testing isValid
//    assert(isValidQC("Q2p1d1") == true);
//    assert(isValidQC("Q500p250d250") == true);
//    assert(isValidQC("Q2p01d1") == false);
//    assert(isValidQC("Qap1d1") == false);
//    assert(isValidQC("Q2.0p1.0d1.0") == false);
//    assert(isValidQC("Q2p1d1 Q2p1d1") == false);
//    assert(isValidQC("") == false);
//    assert(isValidQC("Q23s31") == false);
//    assert(isValidQC("Q21d3p18") == true);
//    assert(isValidQC("Q21d3P18") == false);
//    assert(isValidQC("Q20000p10000d10000") == true);
//    assert(isValidQC("Q20000p10000p10000") == false);
//    assert(isValidQC("Q000020p10d10") == false);
//    assert(isValidQC("Q2d1p1Q5p3d2") == true);
//    assert(isValidQC("Q5p3d2") == true);
//    assert(isValidQC("Q5p2d3") == true);
//    assert(isValidQC("q1p0d1") == false); // Must start with 'Q'
//    assert(isValidQC("Q1pd1") == false); // Missing number
//    assert(isValidQC("Q1p1d") == false); // Missing defect number
//    assert(isValidQC("Q5p0003d2") == false); // No leading zeros
//    assert(isValidQC("Q5p0d0") == false); // Sum must match total count
//    assert(isValidQC("Q0p0d0") == false); // Q cant be 0
//    cout << "All test cases passed!" << endl;
//    
    return 0;
}

bool isValidQC(string results){
    
    if (results.empty()) return false;  //return false if empty string
    if (results[0] != 'Q') return false; //return false if string doesnt start with Q
    
    size_t i = 1;
    while (i < results.size()){
        if (results[i] == '0' && (i + 1 < results.size() && isdigit(results[i + 1]))) return false; //return false if there are leading zeroes but not if there is only a 0
        int totalTests = 0;
        while (i<results.size() && isdigit(results[i])){
            totalTests = totalTests * 10 + (results[i]-'0');
            i++;
        }
        if (totalTests <= 0) return false;
        
        bool hasP = false, hasD = false;
        int numP = 0,numD = 0;
        
        while(i<results.size() && (results[i]== 'p' || results[i]== 'd')){ //if it is a char in the string and is either p or d
            char type= results[i];
            i++;
            if (i >= results.size() || !isdigit(results[i]) || (results[i] == '0' && (i + 1 < results.size() && isdigit(results[i + 1])))) return false; //return false if it goes beyond the string, if it is not a digit after p or d, or if it has leading zeores but not just zero.
            
            if (type == 'p'){
                while(i<results.size() && isdigit(results[i])){
                    numP = numP*10+ (results[i] - '0');
                    i++;
                }
                hasP= true;
            }
            else if(type == 'd'){
                while(i<results.size() && isdigit(results[i])){
                    numD = numD * 10 + (results[i] - '0');
                    i++;
                }
                hasD= true;
            }
            else{
                return false;
            }
            
            }
        
        if (hasP == true){
            while(i<results[i] && results[i] == 'd' ){ //if first it read a p then it must read a d next.
                numD = numD * 10 + (results[i] - '0');
                i++;
            }
            hasD= true;
        }
        if (hasD == true){
            while(i<results[i] && results[i] == 'd' ){//if it first read a d then it must read a p next.
            numP = numP*10+ (results[i] - '0');
            i++;
        }
        hasP= true;
    }
        if (hasP != true || hasD != true || numD+numP != totalTests) return false; //if p plus d doesnt equal total Q then return false
        if (i<results.size() && results[i] != 'Q') return false;
        i++;
        
    }
    
    return true;
}


int batches(string results) {
    if (!isValidQC(results)) return -1;

    int totalB = 0;
    for (size_t i = 0; i < results.length(); i++) {
        if (results[i] == 'Q') totalB++; //loop through the string and if a Q is found add one count to the tally
    }
    return totalB;
}

int passQC(string results){
    size_t i = 0;
    int totalP= 0;
    if (!isValidQC(results)) return -1;
    
    while (i < results.length()){//iterate through string
    int batchP = 0;
        while (i < results.length()){
            if (results[i] == 'p') {//find p in the string
                if (isdigit(results[i+1])){//if p move to the number after it
                    i++;
                    break;
                }
                return -1;
            }
            i++;
        }
    while (isdigit(results[i])) {
        batchP = batchP * 10 + results[i] - '0';
                i++;}
            totalP += batchP;
        }
    return totalP;
    }


int defectQC(string results)  {//similiar code as above just iterated for d
    size_t i = 0;
    int totalD = 0;
    if (!isValidQC(results)) return -1;
    while (i < results.length()) {
        int j = 0;
        int batchD  = 0;
        if (isValidQC(results)) {
            while (i < results.length()){
                if (results[i] == 'd') {
                    if (isdigit(results[i+1])) {
                        i++;
                        break;
                    }
                    return -1;
                }
                i++;
            }
            while (isdigit(results[i])) {
                j = results[i] - '0';
                batchD = (batchD * 10) + j;
                i++;
            }
            totalD = totalD + batchD;
        }
        else {
            return -1;

        }
    }
    return totalD;
}

int totalQC(string results){
    int totalPD = 0;
    if (isValidQC(results)){
        totalPD = defectQC(results) + passQC(results);
        return totalPD;
    }
    else{
        return -1;
    }
return totalPD;
}
