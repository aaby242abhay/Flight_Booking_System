#include "User.h"

User :: User(string id, string name, double funds) : userId(id), name(name), funds(funds) {}

void User :: printDetails(){
    cout << "<" << userId << ", " << name << ", " << funds << ">";
}