#ifndef BOOKING_H
#define BOOKING_H

#include<string>
#include <vector>
using namespace std;

class Booking{
public:
    string bookingId;
    string userId;
    string flightNumber;
    vector<string> seats;
    double totalCost;

    Booking(string bid, string uid, string fn, vector<string> seats, double totalCost);

};

#endif