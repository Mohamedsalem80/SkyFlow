#include <string>
using namespace std;

class Passenger
{
    private:
        unsigned long id;
        string fullName;
        string phone;
        unsigned int age;

    public:
        Passenger();
        Passenger(unsigned long id, string fullName, string phone, unsigned int age);
        void setId(unsigned long id);
        unsigned long getId();
        void setFullName(string name);
        string getFullName();
        void setPhone(string phone);
        string getPhone();
        void setAge(unsigned int age);
        unsigned int getAge();
};

Passenger::Passenger(unsigned long id, string fullName, string phone, unsigned int age){

}

void Passenger::setId(unsigned long id){
    this->id = id;
}

unsigned long Passenger::getId(){
    return this->id;
}

void Passenger::setFullName(string name){
    this->fullName = name;
}

string Passenger::getFullName(){
    return this->fullName;
}

void Passenger::setPhone(string phone){
    this->phone = phone;
}
string Passenger::getPhone(){
    return this->phone;
}

void Passenger::setAge(unsigned int age){
    this->age = age;
}

unsigned int Passenger::getAge(){
    return this->age;
}
