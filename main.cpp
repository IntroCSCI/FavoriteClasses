#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> courses;
    string entry;
    do {
        cout << "Your favorite course: ";
        getline(cin, entry);
    } while( entry != "quit" );

    courses.pop_back();

    cout << "RANKING\n";
    for(size_t i=0; i < courses.size(); i++){
        cout << i+1 << ") " << courses.at(i) << endl;
    }
    return 0;
}