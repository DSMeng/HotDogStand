/*
Program Name: Hot Dog Stand 
Date: 7/13/2022
Author: David Mengele
*/
#ifndef HOTDOG_STAND_CLASS_CPP
#define HOTDOG_STAND_CLASS_CPP

#include "HotDogStandsClass.h"
using namespace std;

unsigned HotDogStandsClass::globalSoldCount = 0;

void HotDogStandsClass::hotDogsBuyUns(unsigned count){
    if(invAmountUns == 0){
        cout<< "*There are not any more hotdogs left to be sold*" << endl << endl;
        return;
    }
    else if(invAmountUns < count){
        cout << "*We only have " << invAmountUns << " hotdog";
        cout << (invAmountUns > 1 ? "s left.*" : "left.*") << endl << endl;
        return;
    }
    invAmountUns -= count;
    soldAmountUns += count;
    HotDogStandsClass::globalSoldCount += count;
}

#endif
