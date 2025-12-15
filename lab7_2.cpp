#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, studentID, movie, day;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin, name);
    cout << "?????: " ;

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    getline(cin, studentID);
    cout << name << ": ";

    int year = stoi(studentID.substr(0, 2));
    int gear = year - 12;

    cout << "Fahsai: I think you may be GEAR " << gear
         << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    getline(cin, movie);
    cout << name << ": ";

    cout << "Fahsai: So....which day are you free to go with me?\n";
    getline(cin, day);
    cout << name << ": ";

    cout << "Fahsai: " << day
         << "....that is OK!!! I'm looking forward to watching "
         << movie << " with you.\n";
    
    cout << name << ": ";
    cout << "Fahsai: 555+ see you " ; 
    cout << day ;
    cout << ". ";
    cout << "Bye Bye \\(^ ^)/\n";

    return 0;
}
