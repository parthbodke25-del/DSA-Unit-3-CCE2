#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, edges;

    cout << "Enter number of students: ";
    cin >> n;

    vector<string> students(n);
    vector<vector<int>> adj(n);

    // Input student names
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i];
    }

    cout << "Enter number of friendships: ";
    cin >> edges;

    // Create friendships
    for (int i = 0; i < edges; i++) {
        int u, v;

        cout << "\nEnter student numbers for friendship (1 to "
             << n << "): ";
        cin >> u >> v;

        if (u >= 1 && u <= n && v >= 1 && v <= n && u != v) {
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        } else {
            cout << "Invalid student numbers!\n";
            i--;
        }
    }

    // Display all students and their friends
    cout << "\n--- Student Friendship Graph ---\n";

    for (int i = 0; i < n; i++) {
        cout << students[i] << " -> ";

        for (int j : adj[i]) {
            cout << students[j] << " ";
        }

        cout << endl;
    }

    // Find friends of selected student
    int selected;
    cout << "\nEnter student number to find friends: ";
    cin >> selected;

    if (selected >= 1 && selected <= n) {
        cout << "Friends of " << students[selected - 1]
             << ": ";

        if (adj[selected - 1].empty()) {
            cout << "No friends";
        } else {
            for (int j : adj[selected - 1]) {
                cout << students[j] << " ";
            }
        }

        cout << endl;
    } else {
        cout << "Invalid student number!\n";
    }

    return 0;
}
