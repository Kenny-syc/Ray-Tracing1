#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray               //射线（向量）
{

public:
    ray(){};
    ray(const point3& origin,const vec3& direction)
        : orig(origin),dir(direction)
    {}

    point3 origin() const{return orig;}
    vec3 direction() const{return dir;}

    point3 at(double t)const{
        return orig + t * dir;                  //终点
    }

    


public:
    point3 orig;        //点
    vec3 dir;           //方向
};

vec3 random_unit_vector(){
        return unit_vector(random_in_unit_sphere());
}

#endif