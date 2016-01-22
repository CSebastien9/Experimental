****************************************
Author:		     C.F. Sebastien Dalencourt
Class				         Discrete Structures
Instructor:			         Alexei Nikolaev
Date Created:                 05/17/2015
****************************************


I.Program Description: 
- First of all, this program is in an experimental mode
  and has not yet been fully completed. This program is intended
  to only work with Eulerian graphs. As of right now, it can only
  output Euler cycles and Euler paths from a given Eulerian graph.

II.Run Instructions && Usage:

Create a txt file for graph data:
Step1: Put the total number of nodes on the first line
Step2: Put the total number of edges on the second line
Step3: Enter each single relation of the nodes from the graph on a seperate line.

For example, Let's take a square for simplicity. You
would enter:

4   //# of nodes (A square has 4 nodes)			Step 1
4   //# of edges (A square also has 4 edges)	Step 2
0 1 //(Meaning 0 is connected to 1) 			Step 3 and so on
0 3 //(Meaning 0 is connected to 3)
1 2 //(Meaning 1 is connected to 2)
2 3 //(Meaning 2 is connected to 3)

Output would look like this:
YOUR GRAPH:
[0]-> 1,3
[1]-> 0,2
[2]-> 1,3
[3]-> 0,2
CYCLES IN YOUR GRAPH:
Cycle(1): 0-> 1-> 2-> 3-> 0 (Meaning 0 is connected to 1, 1 is connected to 2 and so forth)

Important: Note that the order in which you enter the relation of the graph does not matter.
           Also, note that it is not necessary to enter the relation of an edge twice.
           For example, if you entered 0 1 (Meaning 0 is connected to 1), you do not need to include
           1 0 (Meaning 1 is connected to 0) as well, and vice versa.

-UNIX ENVIRONMENT: COMPILATION & EXECUTION
Step1: Compilation
  g++ -o [name of executable of your choice] EulerCycles.cpp
  for example:  g++ -o TestCycles EulerCycles.cpp
Step2: Execution
	./[name of executable chosen] < [name of file containing graph data]
	e.g.: ./TestCycles < graph_file


III. Input/Output Files:
- Input:
  a. Total number of nodes from graph
  b. Total number of edges from graph
  c. Relation of nodes
- Output:
  a. Relation between nodes in graph
  b. Euler circuits/Cycles in given graph

