#include <iostream>
using namespace std;
int calAge(int);

int yearCount;
int yearIn;
int thisYear = 2563;

int main(){
    cout << "Welcome to MUTIPLE age calculate program" << endl << endl;
    cout << "Please determine how many year you want to calculate[BE]: "; 
        cin >> yearCount;
    cout << "-----------------------------------------------------------" << endl;
        //Year Loop
        for (int i=1; i<= yearCount; i++)
        {
            cout << "Insert year " << i << ": ";
                cin >> yearIn;
            cout << "Age " << i << ": " << calAge(yearIn) << endl; 

        }
    cout << endl << "Thank you." << endl;
    system("pause");
    return 0;
}


int calAge(int yearIn){
    thisYear = 2563 - yearIn;
    return thisYear;
}

