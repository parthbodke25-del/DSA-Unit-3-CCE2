#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node {
    string name;
    vector<Node*> children;
};

Node* createNode(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    return newNode;
}

// Display tree with level
void displayTree(Node* root, int level = 0) {
    if (root == NULL)
        return;

    cout << "Level " << level << " : " << root->name << endl;

    for (Node* child : root->children) {
        displayTree(child, level + 1);
    }
}

// Find node
Node* findNode(Node* root, string name) {
    if (root == NULL)
        return NULL;

    if (root->name == name)
        return root;

    for (Node* child : root->children) {
        Node* result = findNode(child, name);
        if (result != NULL)
            return result;
    }

    return NULL;
}

// Find parent
Node* findParent(Node* root, string name) {
    if (root == NULL)
        return NULL;

    for (Node* child : root->children) {
        if (child->name == name)
            return root;

        Node* result = findParent(child, name);
        if (result != NULL)
            return result;
    }

    return NULL;
}

// Display ancestors
void displayAncestors(Node* root, string name) {
    Node* parent = findParent(root, name);

    if (parent == NULL) {
        cout << "No ancestors found." << endl;
        return;
    }

    cout << "Ancestors of " << name << ": ";

    while (parent != NULL) {
        cout << parent->name << " ";
        parent = findParent(root, parent->name);
    }

    cout << endl;
}

// Display descendants
void displayDescendants(Node* node) {
    if (node == NULL)
        return;

    for (Node* child : node->children) {
        cout << child->name << " ";
        displayDescendants(child);
    }
}

// Display siblings
void displaySiblings(Node* root, string name) {
    Node* parent = findParent(root, name);

    if (parent == NULL) {
        cout << "No siblings found." << endl;
        return;
    }

    cout << "Siblings of " << name << ": ";

    bool found = false;

    for (Node* child : parent->children) {
        if (child->name != name) {
            cout << child->name << " ";
            found = true;
        }
    }

    if (!found)
        cout << "No siblings";

    cout << endl;
}

int main() {

    // Create college organization tree

    Node* principal = createNode("Principal");

    Node* dean = createNode("Dean");
    Node* registrar = createNode("Registrar");

    Node* hodENTC = createNode("HOD-ENTC");
    Node* hodCSE = createNode("HOD-CSE");
    Node* hodME = createNode("HOD-Mechanical");

    Node* teacher1 = createNode("ENTC Teacher");
    Node* teacher2 = createNode("CSE Teacher");
    Node* teacher3 = createNode("Mechanical Teacher");

    // Build tree
    principal->children.push_back(dean);
    principal->children.push_back(registrar);

    dean->children.push_back(hodENTC);
    dean->children.push_back(hodCSE);
    dean->children.push_back(hodME);

    hodENTC->children.push_back(teacher1);
    hodCSE->children.push_back(teacher2);
    hodME->children.push_back(teacher3);

    // Display organization chart
    cout << "\n--- COLLEGE ORGANIZATION TREE ---\n";
    displayTree(principal);

    string searchName;

    cout << "\nEnter node name: ";
    getline(cin, searchName);

    Node* selectedNode = findNode(principal, searchName);

    if (selectedNode == NULL) {
        cout << "Node not found!" << endl;
        return 0;
    }

    // Display descendants
    cout << "\nDescendants of " << searchName << ": ";
    displayDescendants(selectedNode);
    cout << endl;

    // Display ancestors
    displayAncestors(principal, searchName);

    // Display siblings
    displaySiblings(principal, searchName);

    return 0;
}