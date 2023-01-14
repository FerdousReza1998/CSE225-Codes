
#include <iostream>
#include <string>

using namespace std;

// Class For SeatNumber [compartment + seat number]
class SeatAssignment
{

public:

    string letter;
    int row;

    SeatAssignment(string letter, int row)
	{
      this->letter = letter;
        this->row = row;
    }
};


class AirlineTicket
{

    string departure_city, arrival_city;
    int flight_number;
    SeatAssignment* seat_assignment;

public:

    // Constructor for TrainTicket Class.
    AirlineTicket(string departure_city, string arrival_city, int flight_number, string letter, int row)
	{
        this -> departure_city = departure_city;
        this -> arrival_city = arrival_city;
        this -> flight_number = flight_number;

        // Create Object For Seat.
        seat_assignment = new SeatAssignment(letter, row);
    }

    // Print the ticket Information.
    void printTicket()
	{
        cout << "Ticket Details: " << endl;
        cout << "\tDeparture City: " << this -> departure_city << endl;
        cout << "\tArrival City: " << this -> arrival_city << endl;
        cout << "\tTrain Number: " << this -> flight_number << endl;
        cout << "\tSeat Number: " << this -> seat_assignment->letter << ' ' << this -> seat_assignment->row << endl;
        cout << endl;
    }

    // Deconstructor For TrainTicket
    ~AirlineTicket()
	{
        // Free the seat object space.
        delete seat_assignment;
    }
};



int main() {

    // Create Two Train Ticket.
    AirlineTicket ticket1("Surat", "Delhi", 22334, "KA" , 28);
    AirlineTicket ticket2( "Ahamdabad" , "Mumbai", 33120, "KHA", 12);

    // Print ticket1 and ticket2 Details
    ticket1.printTicket();
    ticket2.printTicket();

   return 0;
}
