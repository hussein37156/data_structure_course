#include "linked_list.hpp"
#include <iostream>
ds::node::node(int data) : data(data)
{
}
void ds::node::print()
{
    node *ptr = this;
    while (ptr != nullptr)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}