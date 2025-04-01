#include <iostream>
#include <string>

#ifndef _deep_h_
    #define _deep_h_
    class Deep
    {
        private:
            int *data;

        public:
            void set_data_value(int d) { *data = d; }
            int get_data_value() { return *data; }

            Deep(int d)
            {
                data = new int;             //allocated storage
                *data = d;
            }

            // Deep(const Deep &source)             This is one way of doing this
            // {
            //     data = new int;             //allocated storage
            //     *data = *source.data;       //These lines create new storage and copy values
            //     std::cout << "Copy constructor - deep" << std::endl;
            // }

            Deep(const Deep &source)            //This does the same thing as above but with the better method
                : Deep {*source.data}
            {
                std::cout << "Copy constructor - deep" << std::endl;
                //Delegate to Deep(int) and pass in the int (*source.data) source is pointing to
            }

            ~Deep()
            {
                delete data;                //Frees allocated memory
                std::cout << "Destructor freeing data" << std::endl;
            }
    };
#endif