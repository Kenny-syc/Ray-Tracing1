#ifndef RAY_H
#define RAY_H

#include "vec3.h"


class ray               //射线（向量）
{

public:
    ray(){};
    ray(const point3& origin,const vec3& direction,double time=0.0)
        : orig(origin),dir(direction), tm(time)
    {}

    point3 origin() const{return orig;}
    vec3 direction() const{return dir;}
    double time() const    { return tm; }

    point3 at(double t)const{
        return orig + t * dir;                  //终点
    }

    


public:
    point3 orig;        //点
    vec3 dir;           //方向
    double tm;
};

#endif