/**Function that takes in a string and prints out in reverse
 * This code uses the stack. Faster option then using loops. 
 * The stack stores data last in first out (LIFO).
 * push() - addes an element to the top of the stack
 * pop() - removes the top element
 * top() - return the top element without removing it.
 * "stackname".empty() - checks if stack is empty. If you try to access the stack while empty this will cause an error. 
 * "stackname".size() - Return size of stack. 
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

//function prototypes
string ReverseString(const string &input);

int main(){

    string name = "Darryll Mckoy";
    string ReversedString = ReverseString(name);

    cout << "String is: " << name << endl;
    cout << "Reversed string is: " << ReversedString << endl;

    return 0;
}

//Function definitions
string ReverseString(const string &input){
    
    //first we must create the stack
    stack<char> myStack;

    //this type of for loop will iterate within the range of the input
    for(char c : input){  

        myStack.push(c);
    }

    string ReversedString;

    while (!myStack.empty()){

        ReversedString += myStack.top();        //Adds char from stack to a new element each iteration. 
        myStack.pop();
    }

    return ReversedString;
}