/**Function that takes in a string and prints out in reverse
 * This code uses only primitive C/C++
*/

#include <iostream>

//Function prototype
void ReverseString(char A[]);

int main(){

    char String[] = "Darryll Mckoy II";

    ReverseString(String);

    std::cout << "String is: " << String << std::endl;

    return 0;
}




/**==================================================
 * ============ Function definition ================
 * ==================================================*/
void ReverseString(char A[]){
  int length = 0;
  char ReversedString[32];

/**
 * while loop finds the length of string
 */
    while( A[length] != '\0'){
        length++;
    }

    const int num = length;

    std::cout << "String length: " << length << std::endl; 

    /**copies elements of given string from last element to first into a
     * new variable called ReversedString. 
     */
    for(int i = 0; i <= num; i++ ){
        ReversedString[i] = A[length - 1];
        length--;
    }
    
    std::cout << "string in reverse is: " << ReversedString << std::endl;
}



