#include <iostream>
#include <string>

#ifndef _move_h_
    #define _move_h_
    class Move
    {
        private:
            int *data;

        public:
            //Constructor
            Move(int d)
            {
                data = new int;
                *data = d;
                std::cout << "Constructor for: " << d << std::endl;
            }

            //Copy Constructor
            Move(const Move &source)
                : Move {*source.data}
            {
                std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
            }

            //Move Constructor
            Move (Move &&source) noexcept
                : data {source.data}
            {
                source.data = nullptr;
                std::cout << "Move constructor - moving resource: " << *data << std::endl;
            }

            //Destructor
            ~Move()
            {
                if (data != nullptr)
                {
                    std::cout << "Destructor freeing data for: " << *data << std::endl;
                }
                else
                {
                    std::cout << "Destructor freeing data for nullptr" << std::endl;
                }

                delete data;
            }
    };
#endif