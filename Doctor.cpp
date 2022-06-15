//
// Created by Lenovo on 06.06.2022.
//

#include "Doctor.h"
#include <stdexcept>
using std::move, std::invalid_argument;

Doctor::Doctor(string firstName,
               string  lastName,
               int age, int height, int weight,
               string gender,    string mail, string city,
               string country, string Speciality, int AmountOfPatients,
               string Category, string Degree):

        Person(move(firstName), move(lastName), age, height, weight, move(gender),
               move(mail), move(city), move(country)),
        Speciality(move (Speciality)),
        AmountOfPatients(AmountOfPatients),
        Category(move(Category)),
        Degree(move(Degree))
{if (AmountOfPatients<0)
    {
        throw invalid_argument("Number doesn't exist");
    }

    if(this->Category.empty())
        throw invalid_argument("No Category");

    if(this->Degree.empty())
        throw invalid_argument("No Degree");

    if(this->Speciality.empty())
        throw invalid_argument("No Speciality");
}

void Doctor::setRating(){
    AmountOfPatients+=1;
}

string Doctor::Info() const
{
    string out;
    out = Person::Info() + "\nSpeciality - " + Speciality +
          "\nAmount Of Patients - " + to_string(AmountOfPatients) +
          "\nCategory - " + Category +
          "\nDegree - " + Degree;
    return out;

}


 int Doctor::Consultation()
{
    if (Degree=="Second"&&(Category=="Surgeon"||Category=="Ophthalmologist"||Category=="Gynecologist"))
    {
        consultation=200;
        setRating();
    }

    else if (Degree=="First"&&(Category=="Surgeon"||Category=="Ophthalmologist"||Category=="Gynecologist"))
    {
        consultation=300;
        setRating();
    }

    else if (Degree=="Highest"&&(Category=="Surgeon"||Category=="Ophthalmologist"||Category=="Gynecologist"))
    {
        consultation=500;
        setRating();
    }
    return consultation;
}



