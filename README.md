Activity 7 EEL

Develop a C program to calculate the sum of the first 10 numbers using
recursive function calls and pointers. The program should define a recursive
function that takes a pointer to an integer as an argument and returns the
sum of the first 10 numbers. Within the function, recursion should be used
to compute the sum iteratively. Finally, the program should display the
calculated sum.

Research:

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.
A recursive algorithm takes one step toward solution and then recursively calls itself to further move. The algorithm stops once we reach the solution.
Since the called function may further call itself, this process might continue forever. So it is essential to provide a base case to terminate this recursion process.

Advantages of Recursion: 
Recursion provides a clean and simple way to write code.

Disadvantages of Recursion:
Recursive programs typically have more space requirements and also more time to maintain the recursion call stack.
Recursion can make the code more difficult to understand and debug, since it requires thinking about multiple levels of function calls.


References: 
https://technicalnishan2.blogspot.com/2024/03/recursion-function-recursion-in-c.html
https://www.geeksforgeeks.org/dsa/introduction-to-recursion-2



Analyse:

Steps to implement recursion: 
Step 1 - Define a base case: Identify the simplest (or base) case for which the solution is known or trivial. This is the stopping condition for the recursion, as it prevents the function from infinitely calling itself.
Step 2 - Define a recursive case: Define the problem in terms of smaller subproblems. Break the problem down into smaller versions of itself, and call the function recursively to solve each subproblem.
Step 3 - Ensure the recursion terminates: Make sure that the recursive function eventually reaches the base case, and does not enter an infinite loop.
Step 4 - Combine the solutions of the subproblems to solve the original problem.

Common Applications of Recursion
Tree and Graph Traversal: Used for systematically exploring nodes/vertices in data structures like trees and graphs.
Sorting Algorithms: Algorithms like quicksort and merge sort divide data into subarrays, sort them recursively, and merge them.
Divide-and-Conquer Algorithms: Algorithms like binary search break problems into smaller subproblems using recursion.
Fractal Generation: Recursion helps generate fractal patterns, such as the Mandelbrot set, by repeatedly applying a recursive formula.
Backtracking Algorithms: Used for problems requiring a sequence of decisions, where recursion explores all possible paths and backtracks when needed.
Memoization: Involves caching results of recursive function calls to avoid recomputing expensive subproblems.








A dry run of a recursive function for addition of n numbers: 


Ideate:

Develop a C program which sorts a given array of whole numbers in ascending order. Make a recursive function for sorting it and use insertion sort to sort the given numbers.

Build:

#include <stdio.h>

void insertion_sort(int arr[], int n);

int main(){
    int arr[10] = {9, 5, 7, 2, 3, 6, 10, 1, 8, 4};

    insertion_sort(arr, 10);

    printf("The sorted array is: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}


void insertion_sort(int arr[], int n){
    if(n <= 1){
        return;
    }

    insertion_sort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}


Test:

The sorted array is: 1 2 3 4 5 6 7 8 9 10 


