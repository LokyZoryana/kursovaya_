#include <iostream>
#include <string>
#include <exception>
#include "Doctor.h"
#include "Soldier.h"
using namespace std;


int main()
{
    try{

        cout<< "Doctors"<<endl;

        Doctor doctor1("Irina", "Nikolaevna", 30, 175, 60, "female","chdghch@gmail.com",
                       "Odesa", "Ukraine", "Gynecology",300 ,"Gynecologist", "First");
        doctor1.Consultation();
        cout<< doctor1.Info()<<endl;
        cout<< "Consultation price - "<< doctor1.Consultation()<<endl;
        cout<< "Is the height big?  - "<<(doctor1.getisbigheight()?"Yes":"No");
        cout<< endl;
        cout<< "Is the city is Odesa? - "<<(doctor1.getiscity()?"Yes":"No");
        cout<< "\n\n\n";



        Doctor doctor2("Michael", "Ivanovich", 29, 195, 70, "male","gjfdhgj@gmail.com",
                       "Lviv", "Ukraine", "Ophthalmology",140 ,"Ophthalmologist", "Second");
        doctor2.Consultation();
        cout<< doctor2.Info()<<endl;
        cout<< "Consultation price - "<< doctor2.Consultation()<<endl;
        cout<< "Is the height big?  - "<<(doctor2.getisbigheight()?"Yes":"No");
        cout<< endl;
        cout<< "Is the city is Odesa? - "<<(doctor2.getiscity()?"Yes":"No");
        cout<< "\n\n\n";



        Doctor doctor3("Ivan", "Victorovich", 60, 189, 70, "male","jidsjf@gmail.com",
                       "Kherson", "Ukraine", "Surgery",678 ,"Surgeon", "Highest");
        doctor3.Consultation();
        cout<< doctor3.Info()<<endl;
        cout<< "Consultation price - "<< doctor3.Consultation()<<endl;
        cout<< "Is the height big?  - "<<(doctor3.getisbigheight()?"Yes":"No");
        cout<< endl;
        cout<< "Is the city is Odesa? - "<<(doctor3.getiscity()?"Yes":"No");
        cout<<"\n\n\n";



        cout<< "Soldiers"<<endl;

        Soldier soldier1("Ivan", "Borisovich", 50, 200, 60, "male","chdghch@gmail.com",
                         "Chornobaibka", "Ukraine", First, 3, 24,"Gun", Emergency);

        soldier1.NewFight();
        soldier1.getRank();
        cout<< soldier1.Info();

        cout<< "Is Adult? - "<<(soldier1.isAdult()?"18+":"less then 18");
        cout<<endl;
        cout<< "Is military age? - "<<(soldier1.militaryAge()?"Yes":"No");
        cout<< endl;
        cout<< "Is the height big?  - "<<(soldier1.getisbigheight()?"Yes":"No");
        cout<< endl;
        cout<< "Is the city is Odesa? - "<<(soldier1.getiscity()?"Yes":"No");
        cout<<"\n\n\n";




        Soldier soldier2("Victor", "Igorevich", 60, 180, 60, "male","wefesfsef@gmail.com",
                         "Kruty", "Ukraine", Second, 3, 30,"Gun", Contract);

        soldier2.GoSpare();
        soldier2.NewFight();
        soldier2.getRank();
        cout<< soldier2.Info();

        cout<< "Is Adult? - "<<(soldier2.isAdult()?"18+":"less then 18");
        cout<<endl;
        cout<< "Is military age? - "<<(soldier2.militaryAge()?"Yes":"No");
        cout<< endl;
        cout<< "Is the height big?  - "<<(soldier2.getisbigheight()?"Yes":"No");
        cout<< endl;
        cout<< "Is the city is Odesa? - "<<(soldier2.getiscity()?"Yes":"No");
        cout<<"\n\n\n";



        Soldier soldier3("Anton", "Petrovich", 20, 188, 70, "male","fbzszgga@gmail.com",
                         "Odessa", "Ukraine", First, 6, 14,"Gun", Spare);

        soldier3.NewFight();
        soldier3.GoSpare();
        soldier3.getRank();
        cout<< soldier3.Info();

        cout<< "Is Adult? - "<<(soldier3.isAdult()?"18+":"less then 18");
        cout<<endl;
        cout<< "Is military age? - "<<(soldier3.militaryAge()?"Yes":"No");
        cout<< endl;
        cout<< "Is the height big?  - "<<(soldier3.getisbigheight()?"Yes":"No");
        cout<< endl;
        cout<< "Is the city is Odesa? - "<<(soldier3.getiscity()?"Yes":"No");
        cout<<"\n\n\n";


}

catch(const exception& ex)
{
    cerr<< ex.what();
}
}
