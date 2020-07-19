#include <iomanip> 
#include <iostream> 
using namespace std;

struct Student
{
    string name;
    string address;
    string zip;
    float gpa; 
};  

Student input(Student& user, int number) // lots of trouble shooting, re read chapters of book to find out meaning of * and &
{ 
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
    cout << "gpa: ";
    cin >> user.gpa;
    cin.ignore(1000, 10);
    return user;
}
void output(Student user, int number) 
{
    cout << "Output for Student " << number << endl; 
    cout << "name: " << user.name << endl;
    cout << "address: " << user.address << endl;
    cout << "zip code: " << user.zip << endl;
    cout << "gpa: " << user.gpa << endl << endl;

}
int main()
{
    const int students = 1; 
    Student list[students];
    for (int i = 0; i < students; i++) input(list[i], i + 1);
    for (int i = 0; i < students; i++) output(list[i], i + 1);

}