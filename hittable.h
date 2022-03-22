#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"
#include "rtweekend.h"

class material;

struct hit_record
{
    point3 p;                               //终点
    vec3 normal;                            //单位圆上的坐标
    shared_ptr<material> mat_ptr;           //材料类
    double t;                               //时间
    bool front_face;

    inline void set_face_normal(const ray& r,const vec3& outward_normal){
        front_face = dot(r.direction(),outward_normal)<0;                       //入射光线与表面法线点积
        normal = front_face ? outward_normal : -outward_normal;                 //>0同向:inside,<0反向:outside
    }
};

class hittable{
    public:

        virtual bool hit(const ray& r,double t_min,double t_max,hit_record& rec) const=0;
    
};


#endif 