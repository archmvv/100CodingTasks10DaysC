#include <iostream>
using namespace std;

struct studuent{
    char name[50]{};
    int ticket{};
    int group{};
} s;

int main(){
    cout << "Enter info:\n";

    cout << "Name: ";
    cin >> s.name;

    cout << "Group: ";
    cin >> s.group;

    cout << "Ticket: ";
    cin >> s.ticket;

    cout << "Displaying info: ";

    cout << "Name: " << s.name << endl;
    cout << "Group: " << s.group << endl;
    cout << "Ticket: " << s.ticket << endl;

    return 0;
}
