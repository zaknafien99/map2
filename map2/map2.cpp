// map2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// shows the use of map as an associative array. The map is used as a stock chart.
// The elements of the map are pairs in which the key is the name of the stock and the value
// is its price.

#include <map>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // create map / associative array
    // - keys are strings
    // - values are floats

    typedef map<string, float> StringFloatMap;

    StringFloatMap stocks;      // create empty container

    // insert some elements
    stocks["BASF"] = 369.50;
    stocks["VW"] = 413.50;
    stocks["Daimler"] = 819.00;
    stocks["BMW"] = 834.00;
    stocks["Siemens"] = 842.20;

    // print all elements
    StringFloatMap::iterator pos;
    cout << left; //left-adjust values
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << setw(12) << pos->first
            << "price: " << pos->second << endl;
    }
    cout << endl;

    //boom (all prices doubled)
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        pos->second *= 2;
    }

    //print all elements
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << setw(12) << pos->first
            << "price: " << pos->second << endl;
    }
    cout << endl;

    // rename key from "VW" to "Volkswagen"
    //- provided only by exchanging element
    stocks["Volkswagen"] = stocks["VW"];
    stocks.erase("VW");

    // print all elements
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << setw(12) << pos->first
            << "price: " << pos->second << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
