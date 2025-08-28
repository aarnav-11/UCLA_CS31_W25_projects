// CS 31 Homework 3

#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

//checking if first digit is valid
bool isValidQC (string qcbatch) {
    int i = 0;

    if (qcbatch.size() < 1)  {
        return false;
    }
    while (i < qcbatch.size())  {  //initializing the string case
        char first = ' ';
        char last = ' ';
        int digitQ = 0;
        int quantQ = 0;
        int digit1 = 0;
        int quant1 = 0;
        int digit2 = 0;
        int quant2 = 0;
        if (qcbatch[i] != 'Q')  {  //making sure Q is the first char in string
            return false;
        }
        i++;
        while (i < qcbatch.size())  {    //check batch quantity
            if (qcbatch[i] != 0 && isdigit(qcbatch[i]))  {   //number of tests is not 0/does not start with 0
                break;
            }
            else {
                return false;
            }
        }
        while (isdigit(qcbatch[i])){
            digitQ = qcbatch[i] - '0';
            quantQ = (quantQ * 10) + digitQ;
            i++;
        }
        if (qcbatch[i] == 'p' || qcbatch[i] == 'd')  {  //checking if the p or d is included
            first = qcbatch[i];
            i++;
        }
        else {
            return false;
        }
        if (isalpha(qcbatch[i]))  {   //testing to make sure the next digit is a number
            return false;
        }
        if(qcbatch[i] == '0' && i < qcbatch.size()-1){   //testing to see if the next digit is not 0
            if(isdigit(qcbatch[i+1])){
                return false;
            }
        }
        while(isdigit(qcbatch[i])) {
            digit1 = qcbatch[i] - '0';
            quant1 = (quant1 * 10) + digit1;
            i++;
        }
        if (i == qcbatch.size()-1){
            return false;
        }
        if (qcbatch[i] == 'p' || qcbatch[i] == 'd')  {  //checking if the p or d is next
            last = qcbatch[i];
            i++;
        }
        else {
            return false;
        }
        if (isalpha(qcbatch[i]))  {   //testing to make sure the next digit is a number
            return false;
        }
        if(qcbatch[i] == '0' && i < qcbatch.size()-1){   //testing to see if the next digit is not 0
            if(isdigit(qcbatch[i+1])){
                return false;
            }
        }
        while(isdigit(qcbatch[i])) {
            digit2 = qcbatch[i] - '0';
            quant2 = (quant2 * 10) + digit2;
            i++;
        }
        if (first == last) {  //test to make sure both p and d are there/ one is not repeated
            return false;
        }
        if (quantQ != quant1+quant2)  {  //test to make sure total number of tests adds up
            return false;
        }
        if (quantQ == 0) {
            return false;
        }
    }
    return true;
}

int batches(string qcbatch)  {  // return the total number of batches reported in the string.
    int i = 0;
    int totalBatches = 0;
    if (qcbatch.size() < 1)  {
        return -1;
    }
    while (i< qcbatch.length ()){
        if (isValidQC(qcbatch)){
            while (i<qcbatch.length()){
                if (qcbatch[i] == 'Q'){
                    totalBatches++;
                }
                i++;
            }
        }
        else  {
            return -1;
        }
    }
    return totalBatches;
}

int passQC(string qcbatch) { //return the total number of pass test results from all the batches reported in the string
    int i = 0;
    int totalPasses = 0;
    if (qcbatch.size() < 1)  {
        return -1;
    }
    while (i < qcbatch.length()) {
        int digit = 0;
        int batchPasses  = 0;
        if (isValidQC(qcbatch)) {
            while (i < qcbatch.length()){
                if (qcbatch[i] == 'p') {
                    if (isdigit(qcbatch[i+1])) {
                        i++;
                        break;
                    }
                    return -1;
                }
                i++;
            }
            while (isdigit(qcbatch[i])) {
                digit = qcbatch[i] - '0';
                batchPasses = (batchPasses * 10) + digit;
                i++;
            }
            totalPasses = totalPasses + batchPasses;
        }
        else {
            return -1;

        }
    }
    return totalPasses;
}

int defectQC(string qcbatch)  { //return the total number of defect test results from all the batches reported in the string
    int i = 0;
    int totalDefects = 0;
    if (qcbatch.size() < 1)  {
        return -1;
    }
    while (i < qcbatch.length()) {
        int digit = 0;
        int batchDefects  = 0;
        if (isValidQC(qcbatch)) {
            while (i < qcbatch.length()){
                if (qcbatch[i] == 'd') {
                    if (isdigit(qcbatch[i+1])) {
                        i++;
                        break;
                    }
                    return -1;
                }
                i++;
            }
            while (isdigit(qcbatch[i])) {
                digit = qcbatch[i] - '0';
                batchDefects = (batchDefects * 10) + digit;
                i++;
            }
            totalDefects = totalDefects + batchDefects;
        }
        else {
            return -1;

        }
    }
    return totalDefects;
}

int totalQC(string qcbatch) {  //return the total number of tests being reported from all the batches in the string
    int i = 0;
    int totalTests = 0;
     if (qcbatch.size() < 1)  {
        return -1;
    }
    while (i < qcbatch.length()) {
        int digit = 0;
        int batchTests  = 0;
        if (isValidQC(qcbatch)) {
            while (i < qcbatch.length()){
                if (qcbatch[i] == 'Q') {
                    if (isdigit(qcbatch[i+1])) {
                        i++;
                        break;
                    }
                    return -1;
                }
                i++;
            }
            while (isdigit(qcbatch[i])) {
                digit = qcbatch[i] - '0';
                batchTests = (batchTests * 10) + digit;
                i++;
            }
            totalTests = totalTests + batchTests;
        }
        else {
            return -1;

        }
    }
    return totalTests;
}

int main() {
    // testing isValidQC
    assert(isValidQC("") == false);
    assert(isValidQC(" ") == false);
    assert(isValidQC("Q5p1d4") == true);
    assert(isValidQC("Q100p50d50") == true);
    assert(isValidQC("q3p2d1") == false);
    assert(isValidQC("q3d0p3") == false);
    assert(isValidQC("Q0p1d0") == false);
    assert(isValidQC("Q2pd2") == false);
    assert(isValidQC("Q2p2d") == false);
    assert(isValidQC("Q3p1d2 adjds") == false);
    assert(isValidQC("Q4p002d002") == false);
    assert(isValidQC("Q5p1d1") == false);
    assert(isValidQC("Q2p1d1Q3p0d3") == true);
    assert(isValidQC("Q15d10p5") == true);
    assert(isValidQC("Q19d8p10Q9p3d4") == false);
    assert(isValidQC("Q23p12d10.Q44p21d23") == false);
    assert(isValidQC("Q100d50p50Q1p0d1") == true);
    assert(isValidQC("Tkd-23f") == false);
    assert(isValidQC("Q0p0d0") == false);
    assert(isValidQC("Q4k1d4") == false);

    //testing batches
    assert(batches("Q2p1d1") == 1);
    assert(batches("") == -1);
    assert(batches(" ") == -1);
    assert(batches("Q12p3d9") == 1);
    assert(batches("Q2p1d1Q9d4p5") == 2);
    assert(batches("Q100d56p44Q2p0d2Q5d3p2") == 3);
    assert(batches("Q12p3d9q8d6p2") == -1);
    assert(batches("Q1p0d0Q100p20d80") == -1);
    assert(batches("Q45d23p22") == 1);
    assert(batches("Q5p0003d02") == -1);
    assert(batches("q1p0d1") == -1);
    assert(batches("Q1pd1") == -1);
    assert(batches("Q1p1d") == -1);
    assert(batches("Q23p12d10.Q44p21d23") == -1);
    assert(batches("Q4p3d1Q1pd1") == -1);
    assert(batches("Tkd-23f") == -1);

    //testing passQC
    assert(passQC("Q2p1d1") == 1);
    assert(passQC("") == -1);
    assert(passQC("Q34p23d11") == 23);
    assert(passQC("q2p1d1") == -1);
    assert(passQC("Q2p0d2") == 0);
    assert(passQC("Q2pd1") == -1);
    assert(passQC("Q2p1d") == -1);
    assert(passQC("Q2p1d1Q8d3p5") == 6);
    assert(passQC("Q5p0003d02") == -1);
    assert(passQC("Q100d50p50Q3p2d1") == 52);
    assert(passQC("Q100d50p50Q4p3d1Q20d15p5") == 58);
    assert(passQC("Q23p12d10.Q44p21d23") == -1);
    assert(passQC("Tkd-23f") == -1);

    //testing defectQC
    assert(defectQC("Q2p1d1") == 1);
    assert(defectQC("") == -1);
    assert(defectQC("Q1d1p1") == -1);
    assert(defectQC("Q2d0p2Q200d100p100") == 100);
    assert(defectQC("Q5p0003d02") == -1);
    assert(defectQC("Q100d50p50Q1p0d1") == 51);
    assert(defectQC("Q100d50p50Q1p0d1Q20d15p5") == 66);
    assert(defectQC("Q20d15p5Q100d45p20") == -1);
    assert(defectQC("q1p0d1") == -1);
    assert(defectQC("Q1pd1") == -1);
    assert(defectQC("Q1p1d") == -1);
    assert(defectQC("Q23p12d10.Q44p21d23") == -1);
    assert(defectQC("Tkd-23f") == -1);
    
    //testing totalQC
    assert(totalQC("Q2p1d1") == 2);
    assert(totalQC("") == -1);
    assert(totalQC("Q1d1p1") == -1);
    assert(totalQC("Q2d0p2Q200d100p100") == 202);
    assert(totalQC("Q5p0003d02") == -1);
    assert(totalQC("Q100d50p50Q1p0d1") == 101);
    assert(totalQC("Q100d50p50Q1p0d1Q20d15p5") == 121);
    assert(totalQC("Q20d15p5Q100d45p20") == -1);
    assert(totalQC("q1p0d1") == -1);
    assert(totalQC("Q1pd1") == -1);
    assert(totalQC("Q1p1d") == -1);
    assert(totalQC("Q23p12d10.Q44p21d23") == -1);
    assert(totalQC("Tkd-23f") == -1);

    cout<< "All test cases have succeeded!" << endl;

}

