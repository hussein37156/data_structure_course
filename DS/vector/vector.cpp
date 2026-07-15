#include "vector.hpp"

ds::vector::vector(int size)
{
    this->size = size;
    this->capacity = this->size + 30000;
    this->ptr = new int[this->capacity];
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
    std::cout << std::endl;
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
    if (this->size == this->capacity)
    {
        this->capacity_expand();
    }
    this->ptr[this->size++] = value;
}
void ds::vector::capacity_expand()
{
    this->capacity *= 2;
    int *temp = new int[this->capacity];
    for (int i = 0; i < this->size; i++)
    {
        temp[i] = this->ptr[i];
    }

    std::swap(this->ptr, temp);
    delete[] temp;
}