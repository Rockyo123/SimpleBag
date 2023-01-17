#include "bag.hpp"


// empty implementation                                                                                                     
template <typename T> Bag<T>::Bag() 
{
  
}

//deletes bag
template <typename T> Bag<T>::~Bag() 
{
    items.clear();
}

//Returns current size of bag
template <typename T> std::size_t Bag<T>::getCurrentSize() const 
{ 
    return items.size(); 
}

//Returns True if bag is empty, else returns False
template <typename T> bool Bag<T>::isEmpty() const
{
    if(items.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//adds entry to bag at end
template <typename T> bool Bag<T>::add(const T& entry) 
{ 
    items.push_back(entry);
    return true;
}

//removes entry from bag, returns True if found and removed. Returns False if not found
template <typename T> bool Bag<T>::remove(const T& entry) 
{
    bool rem = false;
    for(int i = 0; i< items.size(); i++)
    {
        if (items.at(i) == entry)
        {
            items.erase(items.begin()+i);
            rem = true;
            break;
        }
    }
    return rem;
}

//empties bag
template <typename T> void Bag<T>::clear() 
{
    items.clear();
}

//Returns frequency of entry in Bag. Returns 0 if entry not in bag
template <typename T> std::size_t Bag<T>::getFrequencyOf(const T& entry) const 
{ 
    std::size_t freq = 0;
    for(int i = 0; i< items.size(); i++)
    {
        if (items.at(i) == entry)
        {
            freq++;
        }
    }
    return freq; 
}

//checks if bag contains entry, returns True if yes, False if no
template <typename T> bool Bag<T>::contains(const T& entry) const 
{
    for(int i = 0; i< items.size(); i++)
    {
        if (items.at(i) == entry)
        {
           return true;
        }
    }
    return false; 
}

