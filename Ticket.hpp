#include "Date.hpp"
#include "Seat.hpp"
#include "Passenger.hpp"

class Ticket
{
    private:
        unsigned int price;
        string type, meal, stay;
        Seat seat;
        Date date;
        Passenger passenger;

    public:
    Ticket(){};
    Ticket(string type, string meal, string stay, Seat seat,Date date);
    void setPrice(unsigned int price);
    unsigned int getPrice();
    void setType(string type);
    string getType();
    void setMeal(string meal);
    string getMeal();
    void setStay(string stay);
    string getStay();
    void setSeat(Seat seat);
    Seat getSeat();
    void setDate(Date date);
    Date getDate();
    void setPassenger(Passenger passenger);
    Passenger getPassenger();
};

Ticket::Ticket(string type, string meal, string stay, Seat seat, Date date){
    this->setType(type);
    this->setMeal(meal);
    this->setStay(stay);
    this->setSeat(seat);
    this->setDate(date);
}

void Ticket::setPrice(unsigned int price){
    this->price = price;
}

unsigned int Ticket::getPrice(){
    return this->price;
}

void Ticket::setType(string type){
    this->type = type;
}

string Ticket::getType(){
    return this->type;
}

void Ticket::setMeal(string meal){
    this->meal = meal;
}

string Ticket::getMeal(){
    return this->meal;
}

void Ticket::setStay(string stay){
    this->stay = stay;
}

string Ticket::getStay(){
    return this->stay;
}

void Ticket::setSeat(Seat seat){
    this->seat = seat;
}

Seat Ticket::getSeat(){
    return this->seat;
}

void Ticket::setDate(Date date){
    this->date = date;
}

Date Ticket::getDate(){
    return this->date;
}

void Ticket::setPassenger(Passenger Passengpr){
    this->passenger = passenger;
}

Passenger Ticket::getPassenger(){
    return this->passenger;
}
