/**==========================================
 * ========== Navigation System =============
 * ==========================================
 */

/**Function that uses doubly linked lists to create a navigation system
 * single linked list or forward_list - points to a forward node.
 * double linked list or list - points to both forward and previous nodes. 
 */

 #include <list>
 #include <iostream>

 using namespace std;

 class Route_template{
    private: 
        list<string> stops;
        list<string>::iterator current;     //preset function that creates a variable that points to the address of the current element in the list. 
    public:
        Route_template(){
            current = stops.end();
        }

        void add_stop(const string &stop){

            stops.push_back(stop);

            if (current == stops.end()){
                
                current = stops.begin();
            }
        }

        void next_stop(){

            if(!stops.empty()){

                ++current;

                if(current == stops.end()){

                    current = stops.begin();
                }
            }
        }

        void prev_stop(){

            if(!stops.empty()){

                if(current == stops.begin()){

                    current = stops.end();
                }

                --current;    
            }
        }

        void current_stop(){

           if(!stops.empty()){

                cout << "Current stop: " << *current << endl;       //remember * placed in front of a pointer dereferrences the variable. 
           } 

           else {

                cout << " No stops in the route" << endl;
           }
        }

        


 };

 int main(){

    Route_template MyRoute;
    
    MyRoute.add_stop("Los Angeles");
    MyRoute.add_stop("Las Vegas");
    MyRoute.add_stop("Columbus");
    MyRoute.add_stop("Hawaii");

    MyRoute.current_stop();   //current stop: Los Angeles
    MyRoute.next_stop();

    MyRoute.current_stop();   //current stop: Las Vegas
    MyRoute.next_stop();

    MyRoute.current_stop();   //current stop: Columbus
    MyRoute.next_stop();

    MyRoute.current_stop();   //current stop: Hawaii
    MyRoute.prev_stop();

    MyRoute.current_stop();   //current stop: Columbus



 }