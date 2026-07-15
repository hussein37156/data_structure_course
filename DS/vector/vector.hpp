#include <iostream>
namespace ds
{
    class vector
    {
    private:
        int size = 0;
        int *ptr = nullptr;

    public:
        vector(int size);
        ~vector();
        int get(int index);
        void set(int value, int index);
        void print();
        int find(int value);
        int get_front();
        int get_back();
        void push_back(int value);
    };
} // namespace ds
