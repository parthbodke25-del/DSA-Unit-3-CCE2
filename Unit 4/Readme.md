# College Organization Chart Using Tree

## Aim
To build a college organization chart using a tree data structure and display the level, ancestors, descendants, and siblings of a given node.

## Objectives
- To understand the concept of a tree data structure.
- To represent a college organizational hierarchy using a tree.
- To display the level of each node.
- To find the ancestors and descendants of a given node.
- To find the siblings of a given node.

## Problem Statement
Build a college organization chart as a tree. Display the level of every node and find the ancestors, descendants, and siblings of a given node.

## Introduction
A tree is a non-linear data structure consisting of nodes connected by edges. It represents hierarchical relationships between elements.

In this project, a college organization chart is represented using a tree. The Principal is the root node, followed by the Dean and Registrar. The Dean manages different department heads, and each department head has a teacher under them.

The program allows the user to search for a node and display its ancestors, descendants, and siblings.

## Data Structure Used
**General Tree**

Each node contains:
- Name of the node.
- A vector of pointers to its child nodes.

## Concepts Used
- Tree Data Structure
- General Tree
- Structures in C++
- Pointers
- Dynamic Memory Allocation
- Recursion
- Vectors
- Tree Traversal
- Searching

## Algorithm
1. Start the program.
2. Create the Principal node as the root.
3. Create the Dean and Registrar nodes.
4. Add department heads under the Dean.
5. Add teachers under their respective department heads.
6. Display the organization tree with the level of each node.
7. Accept a node name from the user.
8. Search for the specified node.
9. If the node exists, display its descendants.
10. Find and display its ancestors.
11. Find and display its siblings.
12. Stop the program.

## Sample Organization Tree

Principal
├── Dean
│   ├── HOD-ENTC
│   │   └── ENTC Teacher
│   ├── HOD-CSE
│   │   └── CSE Teacher
│   └── HOD-Mechanical
│       └── Mechanical Teacher
└── Registrar

## Sample Output

```text
--- COLLEGE ORGANIZATION TREE ---
Level 0 : Principal
Level 1 : Dean
Level 2 : HOD-ENTC
Level 3 : ENTC Teacher
Level 2 : HOD-CSE
Level 3 : CSE Teacher
Level 2 : HOD-Mechanical
Level 3 : Mechanical Teacher
Level 1 : Registrar

Enter node name: HOD-ENTC

Descendants of HOD-ENTC: ENTC Teacher
Ancestors of HOD-ENTC: Dean Principal
Siblings of HOD-ENTC: HOD-CSE HOD-Mechanical
