#include <iostream>
#include <string>

using namespace std;

// Class For SeatNumber [compartment + seat number]
class SeatAssignment
{

public:

    string compartment_name;
    int seat_number;

    SeatAssignment(string compartment, int seatNum)
	{
        this->compartment_name = compartment;
        this->seat_number = seatNum;
    }
};


class TrainTicket
{

    string departure_city, arrival_city;
    int train_number;
    SeatAssignment* seat_assignment;

public:

    // Constructor for TrainTicket Class.
    TrainTicket(string departure_city, string arrival_city, int train_number, string compartment_name, int seat_number)
	{
        this -> departure_city = departure_city;
        this -> arrival_city = arrival_city;
        this -> train_number = train_number;

        // Create Object For Seat.
        seat_assignment = new SeatAssignment(compartment_name, seat_number);
    }

    // Print the ticket Information.
    void printTicket()
	{
        cout << "Ticket Details: " << endl;
        cout << "\tDeparture City: " << this -> departure_city << endl;
        cout << "\tArrival City: " << this -> arrival_city << endl;
        cout << "\tTrain Number: " << this -> train_number << endl;
        cout << "\tSeat Number: " << this -> seat_assignment->compartment_name << ' ' << this -> seat_assignment->seat_number << endl;
        cout << endl;
    }

    // Deconstructor For TrainTicket
    ~TrainTicket()
	{
        // Free the seat object space.
        delete seat_assignment;
    }
};



int main() {

    // Create Two Train Ticket.
    TrainTicket ticket1("Surat", "Delhi", 22334, "KA" , 28);
    TrainTicket ticket2( "Ahamdabad" , "Mumbai", 33120, "KHA", 12);

    // Print ticket1 and ticket2 Details
    ticket1.printTicket();
    ticket2.printTicket();

   return 0;
}
