/**Code finds duplicate numbers in an array. 
 * Prints the amount of duplicates plus duplicate values. 
 */

#include <iostream>

//Global variables
int Arr1[] = {2, 3, 4, 2, 200, 300, 10, 33, 200, 11, 21, 36, 400, 21};
int Arr2[] = {500, 500, 500, 10, 10, 2, 3, 4, 5, 7, 8, 99, 98, 97, 95, 94, 99};

//Function prototypes
void FindDuplicates( int Arr[] );

int main(){

    std::cout << "Array1" << std::endl;
    FindDuplicates(Arr1);

    std::cout << std::endl;

    std::cout << "Array2" << std::endl;
    FindDuplicates(Arr2);

    std::cout << std::endl;

    return 0;
}

/**==================================================
 * ============ Function definition ================
 * ==================================================*/
void FindDuplicates( int Arr[] ){
int length = 0;
int DuplicateCnt = 0; 
int Duplicates[20];

while( Arr[length] != '\0'){
    length++;
}

for(int i = 0; i < length; i++){

    for(int j = (i + 1); j < length; j++){

        if (Arr[i] == Arr[j]){
            Duplicates[DuplicateCnt] = Arr[i];

            std::cout << Duplicates[DuplicateCnt] << ", ";

            DuplicateCnt++;

        }

    }

}

std::cout << "Found "<< DuplicateCnt << " duplicate numbers: " << std::endl;

}