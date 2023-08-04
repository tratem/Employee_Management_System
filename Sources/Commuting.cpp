#include "../Headers/Commuting.h"

Commuting::Commuting()
{
    car_owner = false;
    distance_to_work = 0;
}

Commuting::~Commuting()
{
}

void Commuting::set_car_owner(bool co)
{
    car_owner = co;
}

void Commuting::set_distance_to_work(float dtw)
{
    distance_to_work = dtw;
}

bool Commuting::get_car_owner()
{
    return car_owner;
}

float Commuting::get_distance()
{
    return distance_to_work;
}
