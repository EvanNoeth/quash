#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    bool exit = 0;
    string userIn, command;
    cout << "welcome..." << endl;
    while (exit != 1){
        cout << "[QUASH]$ ";
        getline(cin, userIn);

        command = "";
        for (char c : userIn){
            if (c != ' '){
               command += c; 
            } else{
                break;
            }
        }

        if (userIn == "exit"){
            exit = 1;
        } else if (command == "echo"){
            for (int i = 4; i < userIn.length(); i++){
                cout << userIn[i];
            } 
            cout << endl;
        }
    }

    return 0;
}