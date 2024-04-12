#include <iostream>

using namespace std;




const double smallRoom {25};
const double largeRoom {50};
const double salesTaxRate{6};
const int expirationDays{30};


int main ()
{
    int numSmallRooms{};
    int numLargeRooms{};
    
    
    cout << "How many small rooms: " << endl;
    cin >> numSmallRooms;
    cout << "How many Large Rooms: " << endl;
    cin >> numLargeRooms;
    
    cout << "***********************************" << endl;
    cout << "Number of small rooms: " << numSmallRooms << endl;
    cout << "Number of Large rooms: " << numLargeRooms << endl;
    cout << "Price per small room: " << smallRoom << endl;
    cout << "price per large room: " << largeRoom << endl;
    double cost {(numLargeRooms * largeRoom) + (numSmallRooms * smallRoom)};
    cout << "Cost: "<< cost << endl;
    cout << "Tax: " << salesTaxRate << " percent." << endl;
    cout << "==========================================" << endl;
    double totalEst {cost += cost * (salesTaxRate /100)};
    cout << "Total estimate: " << totalEst << endl;
    cout << "This estimate is valid for " << expirationDays << " days. " << endl;
    return 0;
}