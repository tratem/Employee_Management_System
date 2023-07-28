#include "../Headers/Commuting.h"

template <typename T>
Commuting<T>::Commuting()
{
    car_owner = false;
    distance_to_work = 0;
}

template <typename T>
Commuting<T>::~Commuting()
{
}

template <typename T>
void Commuting<T>::set_car_owner(bool co)
{
    car_owner = co;
}

template <typename T>
void Commuting<T>::set_distance_to_work(T dtw)
{
    distance_to_work = dtw;
}

template <typename T>
bool Commuting<T>::get_car_owner()
{
    return car_owner;
}

template <typename T>
T Commuting<T>::get_distance()
{
    return distance_to_work;
}
