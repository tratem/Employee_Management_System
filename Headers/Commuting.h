#ifndef COMMUTING_H
#define COMMUTING_H
#include <iostream>

using namespace std;

class Commuting
{
protected:
    bool car_owner;
    float distance_to_work;
public:
    Commuting();
    ~Commuting();
    void set_car_owner(bool co);
    void set_distance_to_work(float dtw);
    bool get_car_owner();
    float get_distance();
};


#endif


