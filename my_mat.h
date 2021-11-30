# include <stdlib.h>

int A(int arr[][10]);                             // the function to insert new matrix values and modify it to shortest paths (FloydWarshall)
void B(int arr[][10], int start, int end);        // prints true if graph has edge between i to j otherwise prints false;
void C(int arr[][10], int start, int end);        // prints the shortest path from i to j, if path doesn't exist prints -1;
