/*
Program Name: Hot Dog Stand 
Date: 7/13/2022
Author: David Mengele
*/
#ifndef HOTDOG_STAND_CLASS_H
#define HOTDOG_STAND_CLASS_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class HotDogStandsClass{

private:
    string identificationStr,addressStr;
    float hotdogPriceFl=0.0;
    unsigned invAmountUns = 0, soldAmountUns = 0;

public:
    HotDogStandsClass(){}

    static unsigned globalSoldCount;

    const string& getIdStr() const {return identificationStr;}

    void setIdStr(const string& identificationStr) {this->identificationStr = identificationStr;}

    const string& getAddressStr() const {return addressStr;}

    void setAddressStr(const string& addressStr) {this->addressStr = addressStr;}
    float getPriceFl() const {return hotdogPriceFl;}
    void setPriceFl(float hotdogPriceFl) {this->hotdogPriceFl = hotdogPriceFl;}

    unsigned getSoldAmount() const {return soldAmountUns;}
    void setSoldAmountUns(unsigned soldAmountUns){this->soldAmountUns = soldAmountUns;}

    unsigned getInvAmountUns() const {return invAmountUns;}
    void setInvAmountUns(unsigned invAmountUns) {this->invAmountUns = invAmountUns;}
    void stockInvAmountUns(unsigned stockCountUns) {invAmountUns += stockCountUns;}

    void hotDogsBuyUns(unsigned count);

};

#endif
