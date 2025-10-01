/*
Shrish Kushwaha
10/1/2025
Extra: Used an array to store the responses.
*/

#include <iostream>
using namespace std;


int main(){
 //array and variables
int moodTrack = 0;
string responses[6] = {"Always try to stay happy when things are tough.", "Cheer up! Or the THE Rian will come for you."
, "What are you so excited for?", "I hope you feel a little better.(Just a little!)",
 "Try to breathe a little more deeper.", "Huh, that wasn't on the list!"};
 //asking and getting input
cout << "What is your mood? 1-Happy, 2-Sad, 3-Excited, 4-Sick, 5-Nervous.";
cin >> moodTrack;
 //switch statement
 switch (moodTrack){
    case 1:
        cout << responses[0] << endl;
        break;
    case 2:
        cout << responses[1] << endl;
        break;
    case 3:
        cout << responses[2] << endl;
        break;
    case 4:
        cout << responses[3] << endl;
        break;
    case 5:
        cout << responses[4] << endl;
        break;
    default:
        cout << responses[5];
 }




    return 0;

}

