# DSA-Unit-3-CCE2
# Movie Management System Using Doubly Linked List

## 1. Introduction

The Movie Management System is a C++ program that uses a
Doubly Linked List to store and display movie information.
It stores movie ID, movie name, screen number, and movie time.

The program displays movie records in both forward and
backward directions using `next` and `prev` pointers.

## 2. Problem Statement

To develop a Movie Management System using a Doubly Linked
List in C++. The system stores details of three movies and
displays the records in forward and backward directions.

## 3. Objectives

- To understand the concept of a Doubly Linked List.
- To store movie information using linked list nodes.
- To perform forward traversal.
- To perform backward traversal.
- To understand the use of previous and next pointers.

## 4. Features

- Stores Movie ID.
- Stores Movie Name.
- Stores Screen Number.
- Stores Movie Time.
- Displays movies in forward direction.
- Displays movies in backward direction.

## 5. Data Structure Used

The program uses a Doubly Linked List.

Each node contains the following fields:

- `movieId`: Stores the movie ID.
- `movieName`: Stores the movie name.
- `screenNo`: Stores the screen number.
- `movieTime`: Stores the movie show time.
- `prev`: Points to the previous node.
- `next`: Points to the next node.

## 6. Algorithm

1. Start the program.
2. Define a Node structure containing movie details.
3. Initialize head and tail pointers to NULL.
4. Create three movie nodes.
5. Accept movie details from the user.
6. Connect each node using prev and next pointers.
7. Traverse from head to tail to display movies.
8. Traverse from tail to head to display movies in reverse.
9. Stop the program.

## 7. Sample Input

Enter the following movie details:

Movie 1:
- Movie ID: 101
- Movie Name: Pushpa
- Screen No: 1
- Movie Time: 10AM

Movie 2:
- Movie ID: 102
- Movie Name: Jawan
- Screen No: 2
- Movie Time: 2PM

Movie 3:
- Movie ID: 103
- Movie Name: Dunki
- Screen No: 3
- Movie Time: 6PM

## 8. Sample Output

```text
===== Movies in Forward Direction =====
Movie ID: 101 | Movie: Pushpa | Screen No: 1 | Time: 10AM
Movie ID: 102 | Movie: Jawan | Screen No: 2 | Time: 2PM
Movie ID: 103 | Movie: Dunki | Screen No: 3 | Time: 6PM

===== Movies in Backward Direction =====
Movie ID: 103 | Movie: Dunki | Screen No: 3 | Time: 6PM
Movie ID: 102 | Movie: Jawan | Screen No: 2 | Time: 2PM
Movie ID: 101 | Movie: Pushpa | Screen No: 1 | Time: 10AM
