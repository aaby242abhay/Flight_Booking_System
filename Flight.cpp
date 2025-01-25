#include "Flight.h"
using namespace std;

Flight :: Flight(string flightNumber, string airline, string from, string to, int departDate, double departTime, double price, string fareType, vector<string> seats) : flightNumber(flightNumber), airline(airline), from(from), to(to), departDate(departDate), departTime(departTime), price(price), fareType(fareType), seats(seats) {}

void Flight :: printFlight(){
    cout << "<" << flightNumber << ", " << airline << ", " << from << ", " << to << ", " << departDate << ", " << departTime << ", " << price << ", " << fareType << ", [";
    for(size_t i=0; i<seats.size(); i++){
        cout << seats[i];
        if(i != seats.size()-1) cout << ", ";
    }
    cout << "]>" << endl;
}