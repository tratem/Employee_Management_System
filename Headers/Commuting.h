#ifndef COMMUTING_H
#define COMMUTING_H
#include <iostream>

using namespace std;

template <typename T>
class Commuting
{
private:
    bool car_owner;
    T distance_to_work;
public:
    Commuting();
    ~Commuting();
    void set_car_owner(bool co);
    void set_distance_to_work(T dtw);
    bool get_car_owner();
    T get_distance();
};


#endif


