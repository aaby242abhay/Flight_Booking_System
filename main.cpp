#include "FlightBookingSystem.h"
#include <iostream>
using namespace std;

int main(){
    FlightBookingSystem system;
    system.addUser("u1", "Vinit", 5000);
    system.addUser("u2", "Neha", 1500);
    system.addUser("u3","Amit", 2000);
    system.addUser("u4", "Rahul", 3000);


    system.addFlight("123", "6E", "DEL", "BLR", 2, 10.0, 2000, "F1", {"1b", "2c", "4e"});
    system.addFlight("456", "6E", "AMD", "CCU", 2, 18.0, 1000, "F5", {"7c", "7d", "12c"});
    system.addFlight("789", "6E", "BLR", "DEL", 2, 20.0, 2000, "F1", {"1b", "2c", "4e"});
    system.addFlight("101", "6E", "CCU", "AMD", 2, 22.0, 1000, "F5", {"7c", "7d", "12c"});


    cout << "Searching flights from DEL to BLR on 2nd:" << endl;
    system.searchFlight("DEL", "BLR", 2, 1);
    

    cout << "Booking flight:" << endl;
    system.bookFlight("u1", "DEL", "BLR", "123", 2, "F1", {"1b"});

    cout << "------------------------------------------------" << endl;

    cout << "Searching flights from AMD to CCU on 2nd:" << endl;
    system.searchFlight("AMD", "CCU", 2, 1);
    system.bookFlight("u2", "AMD", "CCU", "456", 2, "F5", {"7c"});

    return 0;
}