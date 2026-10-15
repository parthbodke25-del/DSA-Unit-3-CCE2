#include <iostream>
using namespace std;

struct Node {
    int movieId;
    string movieName;
    int screenNo;
    string movieTime;

    Node *prev;
    Node *next;
};

int main() {
    Node *head = NULL, *tail = NULL, *newNode, *temp;

    // Create 3 movie nodes
    for(int i = 0; i < 3; i++) {
        newNode = new Node;

        cout << "\nEnter Movie ID: ";
        cin >> newNode->movieId;

        cout << "Enter Movie Name: ";
        cin >> newNode->movieName;

        cout << "Enter Screen No: ";
        cin >> newNode->screenNo;

        cout << "Enter Movie Time: ";
        cin >> newNode->movieTime;

        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Forward Navigation
    cout << "\n===== Movies in Forward Direction =====\n";
    temp = head;

    while(temp != NULL) {
        cout << "Movie ID: " << temp->movieId
             << " | Movie: " << temp->movieName
             << " | Screen No: " << temp->screenNo
             << " | Time: " << temp->movieTime << endl;

        temp = temp->next;
    }

    // Backward Navigation
    cout << "\n===== Movies in Backward Direction =====\n";
    temp = tail;

    while(temp != NULL) {
        cout << "Movie ID: " << temp->movieId
             << " | Movie: " << temp->movieName
             << " | Screen No: " << temp->screenNo
             << " | Time: " << temp->movieTime << endl;

        temp = temp->prev;
    }

    return 0;
}