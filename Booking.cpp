#include "Booking.h"

Booking :: Booking(string bid, string uid, string fn, vector<string> seats, double totalCost) : bookingId(bid), userId(uid), flightNumber(fn), seats(seats), totalCost(totalCost) {}