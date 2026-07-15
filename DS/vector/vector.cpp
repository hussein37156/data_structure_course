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
    std::cout<<std::endl;
}
int ds::vector::get_front()
{
    return this->ptr[0];
}
int ds::vector::get_back()
{
    return this->ptr[this->size - 1];
}
void ds::vector::push_back(int value)
{
    int* temp=new int[this->size+1];
    for (int i = 0; i < this->size; i++)
    {
        temp[i]=this->ptr[i];
    }
    temp[this->size++]=value;
    std::swap(this->ptr,temp);
    delete[] temp;
    
}