// comsc 210 | Lab 18 Movie Reviews | Robert Stonemetz


#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


//structure to represent a single movie review

struct Review{
    double rating;
    string comments;
    Review* next;

    //initialize a review
    Review(double r, string c) : rating(r), comments(c), next(nullptr){}
};



int main(){
    int choice;

    //ask user which insertion to use
    cout << "Which linked list method should we use?" << endl;
         << "    [1] New nodes are added at the head of thelinked list." << endl;
         << "    [2] New nodes are added at the tailof the linked list." << endl;
         << "    choice: ";
    cin >> choice;

    cin.ignore (10000, '\n'); //clears input.

}
