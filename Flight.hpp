#include "Ticket.hpp"

class Flight
{
    private:
        unsigned int seatsCount, flightNumber;
        Seat * seats;
        Date date;
        string distination, takeOff;

    public:
        Flight(unsigned int seatsCount, unsigned int flightNumber);
        Seat operator [] (int index);
        unsigned int getSeatCount();
        void setSeatCount(unsigned int count);
        unsigned int getFlightNumber();
        void setFlightNumber(unsigned int flightNumber);
        void setDate(Date date);
        Date getDate();
        void setDistination(string distination);
        string getDistination();
        ~Flight();
};

Flight::Flight(unsigned int seatsCount, unsigned int flightNumber)
{
    this->seatsCount = seatsCount;
    this->seats = new Seat[seatsCount];
}

Seat Flight::operator [] (int index){
    if (index < seatsCount) return *(seats + index);
    return Seat();
}

void Flight::setSeatCount(unsigned int count){
    if (this->seatsCount == count) return;
    if (this->seatsCount < count)
    {
        Seat * newSeats;
        newSeats = new Seat[count];
        for (int i = 0; i < this->seatsCount; i++) *(newSeats + i) = * (this->seats + i);
        this->seats = newSeats;
        delete [] newSeats;
        return;
    }
    if (this->seatsCount > count)
    {
        Seat * newSeats;
        newSeats = new Seat[count];
        for (int i = 0; i < count; i++) *(newSeats + i) = * (this->seats + i);
        this->seats = newSeats;
        delete [] newSeats;
        return;
    }
}

unsigned int Flight::getSeatCount(){
    return this->seatsCount;
}

unsigned int Flight::getFlightNumber(){
    return this->flightNumber;
}

void Flight::setFlightNumber(unsigned int flightNumber){
    this->flightNumber = flightNumber;
}

void Flight::setDate(Date date){
    this->date = date;
}

Date Flight::getDate(){
    return this->date;
}

void Flight::setDistination(string distination){
    this->distination = distination;
}

string Flight::getDistination(){
    return this->distination;
}

Flight::~Flight()
{
    delete [] seats;
}
