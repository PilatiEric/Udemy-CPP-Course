#include <iostream>
#include <string>

#ifndef _shallow_h_
    #define _shallow_h_
    class Shallow
    {
        private:
            int *data;                                  //POINTER
        
        public:
            void set_data_value(int d) { *data = d; }
            int get_data_value() { return *data; }

            


            Shallow(int d)                              //CONSTRUCTOR
            {
                data = new int;                         //Allocated storage
                *data = d;
            }
            
            Shallow(const Shallow &source)              //COPY CONSTRUCTOR
                : data(source.data)
            {
                std::cout << "Copy constructor - Shallow" << std::endl;
                //PROBLEM: source and the newly created object BOTh point to the SAME data area
                //Can cause the program to crash
            }

            //Destructor
            ~Shallow()
            {
                delete data;
                std::cout << "Destructor freeing data" << std::endl;
            }
    };
#endif