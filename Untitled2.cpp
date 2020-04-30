#include <iostream>
#include <conio.h>
#include<string> 
#include<iomanip> 
#include<fstream> 
 
using namespace std;
 
class worker
{
private:
    char name[80];
    int experience;
    int zp;
    int hours;
public:
    void enter()
    {
        cout << "Enter worker's name: ";
        cin >> name;
        cout << "Enter worker's experience: ";
        cin >> experience;
        cout << "Enter worker's hourly wag': ";
        cin >> zp;
        cout << "Enter how much hours " << name << " worked: ";
        cin >> hours;
        cout << endl;
    }
    void print()
    {
        double prem = 0.0;
        if(experience < 1)
            prem = ((zp * hours) / 100) * 0;
        if(experience > 1 && experience < 3)
            prem = ((zp * hours) / 100) * 5;
        if(experience > 3 && experience < 5)
            prem = ((zp * hours) / 100) * 8;
        if(experience > 5)
            prem = ((zp * hours) / 100) * 15;
         
        cout << name << endl;
        cout << "Experience is " << experience << endl;
        cout << "Hourly wage is " << zp << endl;
        cout << name << " has worked " << hours << endl;
        cout << "Salary is " << (zp * hours) << endl;
        cout << "Premy is " << prem << endl;
    }
};

int main()
{
    worker w;
 
    w.enter();
    w.print();
     
    _getch();
    
    return 0;
}

