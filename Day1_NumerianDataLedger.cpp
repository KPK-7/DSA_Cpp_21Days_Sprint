/* 
Problem Statement: Numerian Data Ledger
In the great Archive of Numeria, the royal scribe is tasked with recording all types of data exactly as they appear. Each entry in the ledger may contain a mix of numbers, characters, and real values - and the scribe must write down each value on a separate scroll so they can be referenced easily by the Grand Sage.

Your task is to assist the scribe by reading a single line of data containing one value of each of the following types:

An int

A long long

A char

A float

A double

Then, print each of these values on a new line in the same order as input.

Challenge
Write a C++ program that reads a line containing an int, a long long, a char, a float, and a double - all space-separated - and prints each value on a new line, in the same order.

Input
A single line containing five space-separated values in this order:

An int

A long long

A char

A float

A double

Example Input:

3 12345678912345 a 334.23 14049.30493
Output
Print each value on a new line in the same order as received.

Note: For float and double, output will be handled in standard C++ floating-point formatting (may display minor rounding).

Example Output:

3
12345678912345
a
334.23
14049.3
Constraints
−2,147,483,648≤int≤2,147,483,647
* 

−2 
63
 ≤long long≤2 
63
 −1
char: valid ASCII characters

float and double: Standard IEEE 754 values

Instructions
Values should be printed each on a new line, matching exactly the input order.

Do not print extra spaces or newlines at the end.
*/

#include <iostream>
using namespace std;

int main() {
    // Your code starts here
    // Declare the variables
    int i;
    long long j;
    char a;
    float b;
    double c;
    
    // take input 
    cin >> i;
    cin >> j;
    cin >> a;
    cin >> b;
    cin >> c;
    
    // printing those variable for output and ending with endl
    cout << i << endl;
    cout << j << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}
