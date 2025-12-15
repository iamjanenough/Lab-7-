#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string studentID;
    string movie;
    string day;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << endl;
    cout << "?????: ";
    getline(cin, name);
    cout << endl;

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << endl;

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << endl;
    cout << name << ": ";
    getline(cin, studentID);
    cout << endl;

    int gear = stoi(studentID.substr(0, 2)) - 12;

    cout << "Fahsai: I think you may be GEAR " << gear 
         << ". I have a free movie ticket for you." << endl;
    cout << endl;

    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << endl;

    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << endl;
    cout << name << ": ";
    getline(cin, movie);
    cout << endl;

    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << endl;
    cout << name << ": ";
    getline(cin, day);
    cout << endl;

    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching "
         << movie << " with you." << endl;
    cout << endl;

    cout << name << ": May the Force be with you krub" << endl;
    cout << endl;

    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}
