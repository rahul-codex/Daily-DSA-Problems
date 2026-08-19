/*
====================================================================
Problem: Multiplication Table from 2 to 10
Platform: DSA / C++
Difficulty: Easy

Problem Statement:
Write a program to print the multiplication tables of numbers from
2 to 10. Each row represents the multiplication of a number from
2 to 10 with values from 1 to 10.

Input:
No input is required.

Output:
Print the multiplication results in tabular form.

Example Output:
2   4   6   8   10  12  14  16  18  20
3   6   9   12  15  18  21  24  27  30
...
10  20  30  40  50  60  70  80  90  100

====================================================================
Approach:

Use nested loops.

- The outer loop represents the multiplier from 1 to 10.
- The inner loop represents the numbers from 2 to 10.
- Multiply both values and print the result.
- Use a tab character to keep the output in table format.

====================================================================
Algorithm:

1. Start the program.
2. Run an outer loop from 1 to 10.
3. For each outer-loop value, run an inner loop from 2 to 10.
4. Multiply the two loop variables.
5. Print the result followed by a tab.
6. Move to the next line after completing each row.
7. End the program.

====================================================================
Complexity:

Time Complexity:
O(100) = O(1)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    // Print multiplication tables from 2 to 10
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 2; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}
