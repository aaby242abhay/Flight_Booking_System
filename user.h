#ifndef USER_H
#define USER_H

#include<string>
#include<iostream>
using namespace std;

class User{
    public : 
        string userId;
        string name;
        double funds;

        User();
        User(string id, string name, double funds);
        void printDetails();
};

#endif