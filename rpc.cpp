#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

string comp_ans();
void judgement(string, string);
//multiple words?

int main() {

    string choice;
    string comp;

    cout << "Now Playing: Rock, Paper, Scissors!!!" << endl;
    cout << "Please select your option: ";
    cin >> choice;

    while (choice != "Exit" && choice != "exit" && choice != "EXIT") {

        while (choice != "Rock" && choice != "Paper" && choice != "Scissors") {
            cout << "Please select a valid option: ";
            cin >> choice;
        }

        cin.ignore();
        cout << endl;

        comp = comp_ans();
        judgement(choice, comp);

        cout << "Please select your option: ";
        cin >> choice;
    }

    return 0;
}


string comp_ans() {
    string ans;
    int num;

    srand(unsigned(time(0)));
    num = rand();

    if (num % 3 == 0) {
        ans = "Rock";
    }
    else if (num % 3 == 1) {
        ans = "Paper";
    }
    else if (num % 3 == 2) {
        ans = "Scissors";
    }
    return ans;
}


void judgement(string choice, string comp) {

    cout << "--- (You  vs Computer) ---" << endl;

    //Comp == Rock
    if (comp == "Rock") {
        if (choice == "Rock" || choice == "ROCK" || choice == "rock") {
            cout << choice << " vs " << comp << " : TIE" << endl;
        }
        else if (choice == "Paper" || choice == "PAPER" || choice == "paper") {
            cout << choice << " vs " << comp << " : YOU WIN" << endl;
        }
        else if (choice == "Scissors" || choice == "SCISSORS" || choice == "scissors") {
            cout << choice << " vs " << comp << " : YOU LOSE" << endl;
        }
    }

    //Comp == Paper
    else if (comp == "Paper") {
        if (choice == "Rock" || choice == "ROCK" || choice == "rock") {
            cout << choice << " vs " << comp << " : YOU LOSE" << endl;
        }
        else if (choice == "Paper" || choice == "PAPER" || choice == "paper") {
            cout << choice << " vs " << comp << " : TIE" << endl;
        }
        else if (choice == "Scissors" || choice == "SCISSORS" || choice == "scissors") {
            cout << choice << " vs " << comp << " : YOU WIN" << endl;
        }
    }

    //Comp == Scissors
    else if (comp == "Scissors") {
        if (choice == "Rock" || choice == "ROCK" || choice == "rock") {
            cout << choice << " vs " << comp << " : YOU WIN" << endl << endl;
        }
        else if (choice == "Paper" || choice == "PAPER" || choice == "paper") {
            cout << choice << " vs " << comp << " : YOU LOSE" << endl << endl;
        }
        else if (choice == "Scissors" || choice == "SCISSORS" || choice == "scissors") {
            cout << choice << " vs " << comp << " : TIE" << endl << endl;
        }
    }
}