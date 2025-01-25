#include "User.h"

User :: User(string id, string name, double funds) : userId(id), name(name), funds(funds) {}

User :: User() : userId(""), name(""), funds(0.0) {}
void User :: printDetails(){
    cout << "<" << userId << ", " << name << ", " << funds << ">";
}
