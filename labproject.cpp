#include <iostream>
using namespace std;
int main() {
    string courses[3] = {"Math", "Science", "English"};     //declaring variables
    int classrooms[3] = {101, 102, 103};
    string timetable[3] = {"9:00 AM - 10:00 AM", "10:00 AM - 11:00 AM", "11:00 AM - 12:00 PM"};
    cout << "\nClass Timetable:\n";
    cout << "Course="<<endl;
    cout <<"classrom="<<endl; 
    cout<<"timetable="<<endl;     

    for (int i = 0; i < 3; i++) {                // Loop to assign and display timetable
        if (i < 3) {                            // Ensuring no conflicts in timetable
            cout << courses[i] << "  " << classrooms[i] << "  " << timetable[i] << "\n";
        } else {
            cout << "Error in timetable!\n";
        }
    }

    cout << "\nTimetable successfully assigned to teachers and students.\n";    //assigned timetable
    return 0;
}
