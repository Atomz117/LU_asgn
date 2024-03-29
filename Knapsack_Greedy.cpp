/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
 
// Structure for an item which stores weight and
// corresponding value of Item
struct Item {
    int value, weight;
 
    // Constructor
    Item(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};
 
// Comparison function to sort Item
// according to val/weight ratio
static bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
 
// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int N)
{
    // Sorting Item on basis of ratio
    sort(arr, arr + N, cmp);
 
    double finalvalue = 0.0;
 
    // Looping through all items
    for (int i = 0; i < N; i++) {
         
        // If adding Item won't overflow,
        // add it completely
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            finalvalue += arr[i].value;
        }
 
        // If we can't add current Item,
        // add fractional part of it
        else {
            finalvalue
                += arr[i].value
                   * ((double)W / (double)arr[i].weight);
            break;
        }
    }
 
    // Returning final value
    return finalvalue;
}
 
// Driver code
int main()
{
    int W = 50;
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << fractionalKnapsack(W, arr, N);
    return 0;
}
