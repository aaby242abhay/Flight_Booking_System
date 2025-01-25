#ifndef FLIGHT_H
#define FLIGHT_H

#include<string>
#include<vector>
#include<iostream>
using namespace std;

class Flight{
    public: 
        string flightNumber;
        string airline;
        string from;
        string to;
        int departDate;
        double departTime;
        double price;
        string fareType;
        vector<string> seats;
    
    Flight(string flightNumber, string airline, string from, string to, int departDate, double departTime, double price, string fareType, vector<string> seats);
    void printFlight();
};

#endif