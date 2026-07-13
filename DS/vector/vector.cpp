#include "vector.hpp"

ds::vector::vector(int size)
{
    this->size = size;
    this->ptr = new int[this->size];
}
ds::vector::~vector()
{
    delete[] this->ptr;
    this->ptr = nullptr;
}
int ds::vector::get(int index)
{
    return this->ptr[index];
}
void ds::vector::set(int value, int index)
{
    this->ptr[index] = value;
}
int ds::vector::find(int value)
{
    for (int i = 0; i < this->size; i++)
    {
        if (this->ptr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
void ds::vector::print()
{
    for (int i = 0; i < this->size; i++)
    {
        std::cout << this->ptr[i] << " ";
    }
}