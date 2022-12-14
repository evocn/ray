#ifndef RAY_H
#define RAY_H

#include "vec3.h"

struct ray
{
	ray() {}
	ray(const point3& origin, const vec3& direction)
	{
		orig = origin;
		dir = direction;
	}

	point3 origin() const { return orig; }
	point3 direction() const { return dir; }

	point3 at(double t) const {
		return orig + t * dir;
	}

    // Fields
	point3 orig;
	vec3 dir;
};

#endif
