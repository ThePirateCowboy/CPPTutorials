#include <iostream>

using namespace std;


const double pricePerRoom{30};

const double tax{3.6};

int main ()
{
    double cost;
    int numOfRooms;
    
    cout << "Please let us know how many rooms: " << endl;
    cin >> numOfRooms;
    
    cout << "Well, " << numOfRooms << " rooms at " << pricePerRoom << " p/room... " << endl;
    cost = numOfRooms * pricePerRoom;
    cout << "Total Cost: " << cost << endl;
    double taxAmount{cost * (tax/100)};
    
    cout << "Tax that will be a total of: " << taxAmount << endl;

    cout << "Total inclucing tax is " << taxAmount  + cost << endl;
    
    
    
    cout << "Thanks" << endl;
    return 0;
}