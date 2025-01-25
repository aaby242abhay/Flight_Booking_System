#include<bits/stdc++.h> 
using namespace std;

class User{
    public:
        string userId;
        string name;
        double funds;
        
        User(string id, string name, double funds) : userId(id), name(name), funds(funds) {}
        void printDetails(){
            cout << "<" << userId << ", " << name << ", " << funds << ">";
        }
};

