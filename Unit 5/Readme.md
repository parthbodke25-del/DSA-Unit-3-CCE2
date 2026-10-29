# Student Friendship Graph Using Adjacency List

## 1. Project Title
**Implement a Graph Using an Adjacency List to Represent Students and Their Friendships, and Display the Friends Connected to a Selected Student.**

## 2. Introduction
This project represents students and their friendships using a graph data structure in C++. Each student is represented as a vertex, and each friendship is represented as an edge. An adjacency list is used to store the connections between students.

## 3. Objectives
- To implement a graph using an adjacency list.
- To represent students and their friendships.
- To display all students and their friends.
- To find the friends connected to a selected student.
- To understand the practical application of graphs in data structures.

## 4. Technologies Used
- **Programming Language:** C++
- **Data Structure:** Graph
- **Graph Representation:** Adjacency List
- **Header Files:** `iostream`, `vector`, `string`

## 5. Features
- Accepts student names from the user.
- Creates friendships between students.
- Stores friendships using an adjacency list.
- Displays the complete student friendship graph.
- Displays the friends of a selected student.
- Validates student numbers entered by the user.

## 6. Working Principle
1. The program accepts the number of students and their names.
2. It creates an adjacency list to store friendships.
3. The user enters the pairs of students who are friends.
4. Each friendship is stored in both students' lists because friendship is mutual.
5. The program displays all students and their connected friends.
6. The user selects a student number to display that student's friends.

## 7. Example

**Input:**
- Students: Parth, Rahul, Amit, Sneha
- Friendships: Parth–Rahul, Parth–Amit, Rahul–Sneha

**Output:**
```text
--- Student Friendship Graph ---
Parth -> Rahul Amit
Rahul -> Parth Sneha
Amit -> Parth
Sneha -> Rahul

Friends of Parth: Rahul Amit
```

## 8. Advantages
- Easy to understand and implement.
- Efficient for storing friendships in sparse graphs.
- Makes it easy to find the friends of a student.
- Can represent social networks and student relationships.

## 9. Applications
- Social networking applications.
- Student friendship networks.
- Community relationship mapping.
- Contact and connection management.
- Network analysis.

## 10. Conclusion
This project demonstrates how a graph can be implemented using an adjacency list in C++. It helps represent student friendships and display the friends connected to a selected student. Through this project, we understand the use of graphs in real-world social networks and learn an important concept of data structures.
