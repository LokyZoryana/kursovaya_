//
// Created by Lenovo on 06.06.2022.
//

#include "Person.h"
#include <stdexcept>


Person::Person(string firstName,
               string  lastName,
               int age, int height, int weight,
               string gender,    string mail, string city, string country):

        firstName(firstName),
        lastName(lastName),
        age(age),
        height(height),
        weight(weight),
        gender(gender),
        mail(mail),
        city(city),
        country(country)
{if (age<0)
    {
        throw invalid_argument("Age doesn't exist");
    }
    if (height<0)
    {
        throw invalid_argument("Height doesn't exist");
    }
    if (weight<0)
    {
        throw invalid_argument("Weight doesn't exist");
    }
    if (this->firstName.empty())

        throw invalid_argument("No name");

    if(this->lastName.empty())
        throw invalid_argument("No Last Name");

    if(this->gender.empty())
        throw invalid_argument("No gender");

    if(this->mail.empty())
        throw invalid_argument("No mail adres");

    if(this->city.empty())
        throw invalid_argument("No city");

    if(this->country.empty())
        throw invalid_argument("No country");


}


string Person::getfirstName() const
{
    return firstName;
}

string Person::getlastName() const
{
    return lastName;
}

int Person::getage() const
{
    return age;
}

int Person::getheight() const
{
    return height;
}

int Person::getweight() const
{
    return weight;
}

string Person::getgender() const
{
    return gender;
}

string Person::getmail() const
{
    return mail;
}

string Person::getcity() const
{
    return city;
}

string Person::getcountry() const
{
    return country;
}



bool Person::getisbigheight()
{
    return height>=200;
}

bool Person::getiscity()
{
    return city=="Odesa"|| city=="Odessa";
}

bool Person::militaryAge()
{
    return gender=="male"&& age>=18&& age<=60;
}

bool Person::isAdult()
{
    return age>=18;
}

string Person::Info() const
{
    string out;
    out = "First Name - " + getfirstName() +
          "\nLastName - " + getlastName() +
          "\nAge - " + to_string(getage()) +
          "\nHeight - " + to_string(getheight()) +
          "\nWeight - " + to_string(getweight()) +
          "\nGender - " + getgender() +
          "\nMail - " + getmail() +
          "\nCity - " + getcity() +
          "\nCounty - " + getcountry();
    return out;
}
