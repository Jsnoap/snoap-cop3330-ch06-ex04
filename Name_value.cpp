/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jordan Snoap
 */

#include "std_lib_facilities.h"
#include "Name_value.h"

// Function called before termination of the program to print all the "Name_value" instances created in the vector
void printNamesAndValues(vector<Name_value> printList)
{
    int i;

    for (i = 0; i < printList.size(); i++)
    {
        printList[i].printContents();
    }
}

// Function to check if the vector already contains the date passed in, if so it terminates program.
void checkDuplicate(vector<Name_value> listToCheck, Name_value instanceToCheck)
{
    int i;

    for(i = 0; i < listToCheck.size(); i++)
    { 
        // Creates instance of "Name_value" per loop iteration
        Name_value instance = listToCheck[i];

        // Terminates program if duplicate values are enttered
	    if((instanceToCheck.getName() == instance.getName())&& (instanceToCheck.getValue() == instance.getValue()))
        {
            cout << "ERROR: Please do not enter duplicate values!\n";
            exit(1);
        }
    } 
}


// Main function grabs user input and stores it into the "list" vector
// If values entered are a duplicate it prints and terminates program
// If "Noname 0" is entered then it prints and terminates program 
int main()
{
    String name;
    int val;
    vector<Name_value> list;

    while (true)
    {
        cout << "Enter a name-and-value pair (Ex: Joe 17). Enter \"NoName 0\" to terminate : ";
        cin >> name >> val;

        if (name == "NoName" && val == 0)
        {
            printNamesAndValues(list);
            exit(1);
        }
        else
        {
            Name_value instance(name, val);

            checkDuplicate(list, instance);

            list.push_back(instance);
        }
        
    }

}