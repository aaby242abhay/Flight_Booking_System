#include "FlightBookingSystem.h"
#include<iostream>

using namespace std;

bool FlightBookingSystem :: areSeatsAvailable(const vector<string> &availableSeats, const vector<string> &requestedSeats){
    for(const string &seat : requestedSeats){
        if(find(availableSeats.begin(), availableSeats.end(), seat) == availableSeats.end()){
            return false;
        }
    }
    return true;
}

void FlightBookingSystem :: addUser(string userId, string name, double funds){
    if(users.find(userId) != users.end()){
        cout << "User already exists" << endl;
        return;
    }
    users[userId] = User(userId, name, funds);
}

void FlightBookingSystem :: searchFlight(string from, string to, int departDate, int paxCount){
    for(Flight flight : flights){
        if(flight.from == from && flight.to == to && flight.departDate == departDate && flight.seats.size() == (size_t)paxCount){
            flight.printFlight();
        }
    }
}

void FlightBookingSystem :: bookFlight(string userId, string from, string to, string flightNumber, int departDate, string fareType, vector<string>requestedSeats){
    if(users.find(userId) == users.end()){
        cout << "User does not exist" << endl;
        return; 
    }
    User& user = users[userId];
    for(Flight &flight : flights){
        if(flight.flightNumber == flightNumber && flight.from == from && flight.to == to && flight.departDate == departDate && flight.fareType == fareType){
            if(!areSeatsAvailable(flight.seats, requestedSeats)){
                cout << "Some seats are already full" << endl;
                return;
            }
            double totalCost = flight.price * requestedSeats.size();
            if(user.funds < totalCost){
                cout << "Insufficient funds" << endl;
                return;
            }
            for(const string& seat : requestedSeats){
                flight.seats.erase(remove(flight.seats.begin(), flight.seats.end(), seat), flight.seats.end());
            }
            user.funds -= totalCost;
            string bookingId = "B" + to_string(bookings.size() + 1);
            bookings.emplace_back(bookingId, userId, flightNumber, requestedSeats, totalCost);
            cout << "Booking successful!!! BookingId : " << bookingId << endl;
            return ;
        }
    }
    cout << "Flight not found! " << endl;
}

void FlightBookingSystem::addFlight(string flightNumber, string airline, string from, string to, int departDate, double departTime, double price, string fareType, vector<string> seats) {
    flights.emplace_back(flightNumber, airline, from, to, departDate, departTime, price, fareType, seats);
}
