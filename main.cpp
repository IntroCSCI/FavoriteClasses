#include <iostream>
using namespace std;

const int NUM_COURSES = 5;

int main(){
    string courses[NUM_COURSES];

    for(int i=0; i < NUM_COURSES; i++){
        cout << "Your ";
        if( i>0 ){
            cout << "next ";
        }
        cout << "favorite course: ";
        getline(cin, courses[i]);
    }
    cout << "RANKING\n";
    for(int i=0; i < NUM_COURSES; i++){
        cout << i+1 << ") " << courses[i] << endl;
    }
    return 0;
}