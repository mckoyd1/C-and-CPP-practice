/**==========================================
 * ============ Linked Lists ================
 * ==========================================
 */

/**Basic usage of linked list library (not primitive)
 * "list name".push_back() - places data at back of list(tail).
 * "list name".push_front() - places data at front of list(head).
 */

 #include <list>
 #include <iostream>

 using namespace std;

 int main(){

    list<int> myList {1, 7, 3, 4, 9, 12};

    myList.push_back(3);
    myList.push_front(20);

    /**auto keyword tells the compiler to automatically configure the datatype at compile time.
     * "list name".begin() basically intializes and places a cursor at some specified point in the list. 
     */
    auto iterator = myList.begin(); 
    
    advance(iterator, 2);                   //advances the iterator (cursor) by specified number.

    myList.insert(iterator, 24);            //insert specified values at current iterator(cursor) position.

    cout << "List in forward direction: ";
    for(auto &element : myList){

        cout << element << " ";
    }

    cout << endl << endl;



    /**Here we remove the first and last elements of linked list
     * "list name".pop_back() - removes last element of list.
     * "list name".pop_front() - removes first element of list. 
     * "list name".reverse() - reverses the list order. 
     * "list name".sort() -  puts list in order from least to greatest.
     */

    myList.pop_back();
    myList.pop_front();
    myList.reverse();

    cout << "Updated and reversed list: " << " ";

    for( auto &element : myList ){
        
        cout << element << " ";
    }

    cout << endl << endl;


    cout << "Sorted list: " << " ";

    myList.sort();

    for( auto &element : myList ){
        
        cout << element << " ";
    }

    cout << endl << endl;

    return 0; 
 }