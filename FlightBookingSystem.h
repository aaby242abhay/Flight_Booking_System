#ifndef FLIGHTBOOKINGSYSTEM_H
#define FLIGHTBOOKINGSYSTEM_H

#include "User.h"
#include "Flight.h"
#include "Booking.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

class FlightBookingSystem{
private:
    unordered_map<string, User> users;
    vector<Flight> flights;
    vector<Booking> bookings;

    bool areSeatsAvailable(const vector<string> &availableSeats, const vector<string> &requestedSeats);

public:
    void addUser(string userId, string name, double funds);
    void searchFlight(string from, string to, int departDate, int paxCount);
    void bookFlight(string userId, string from, string to, string flightNumber, int departDate, string fareType, vector<string> requestedSeats);
    void addFlight(string flightNumber, string airLine, string from, string to, int departDate, double departTime, double price, string fareType, vector<string> seats);

};

#endif 