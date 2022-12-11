class Seat
{
    private:
        unsigned int number, comfort;
        bool taken;
    public:
        Seat(){
            taken = false;
        };
        Seat(unsigned int number, unsigned int comfort, bool taken);
        void setNumber(unsigned int number);
        unsigned int getNumber();
        void setComfort(unsigned int comfort);
        unsigned int getComfort();
        void setTaken(bool taken);
        bool getTaken();
};

Seat::Seat(unsigned int number, unsigned int comfort, bool taken)
{
    this->setNumber(number);
    this->setComfort(comfort);
    this->setTaken(taken);
}

void Seat::setNumber(unsigned int number){
    this->number = number;
}

unsigned int Seat::getNumber(){
    return this->number;
}

void Seat::setComfort(unsigned int comfort){
    this->comfort = comfort;
}

unsigned int Seat::getComfort(){
    return this->comfort;
}

void Seat::setTaken(bool taken){
    this->taken = taken;
}

bool Seat::getTaken(){
    return this->taken;
}
