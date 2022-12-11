#include "Flight.hpp"
#define MAx_Flights 10

class Airline
{
    private:
        string name;
        Flight * flights;
        unsigned int flightsCount;

    public:
        Airline();
        void addFlight();
        void removeFlight();
        void searchFlights();
        void bookFlight();
};

Airline::Airline()
{

}

Airline::~Airline()
{
    
}
