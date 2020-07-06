#include <iomanip> 
#include <iostream> 
using namespace std;

struct Student
{
    string name;
    string address;
    string zip;

};  

Student check(Student& user, int number) {
    cout << "Enter for Student " << number << endl;
    cout << "Name: ";
    cin >> user.name;
    cin.ignore(1000, 10);
    cout << "Adress: ";
    cin >> user.address;
    cin.ignore(1000, 10);
    cout << "Zip: ";
    cin >> user.zip;
    cin.ignore(1000, 10);
    return user;
}
void output(Student& user) {
    cout << user.name << endl;
    cout << user.address << endl;
    cout << user.zip << endl;

}
int main()
{
    Student robert, joe, moma, cuh;
    check(robert, 1);
    check(joe, 2);
    check(moma, 3);
    check(cuh, 4);
    output(robert);
    output(joe);
    output(moma);
    output(cuh);

}
