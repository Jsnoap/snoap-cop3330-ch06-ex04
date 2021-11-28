/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jordan Snoap
 */

#include "std_lib_facilities.h"

class Name_value
{
    private:
    String name;
    int value;

    public:

    // Name Value Constructor
    Name_value(String nameEnter, int valueEnter)
    {
        name = nameEnter;
        value = valueEnter;
    }

    // Getters and Setters
    String getName() 
    {
        return name;
    }

    void setName(String newName)
    {
        name = newName;
    }

    int getValue() 
    {
        return value;
    }

    void setValue(int newValue)
    {
        value = newValue;
    }    

    // Print function to print name and value of a "Name_value" instance
    void printContents()
    {
        cout << name << " " << value << "\n";
    }
};