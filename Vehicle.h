#include <math.h>
#pragma once
class Vehicle
{
private:
	float L;	// vehicle length
	float R;	// rotation radius 
	float v;	// vehicle speed
	float w;	// rotation rate
	float lambda; // vehicle steering angle
public:
	// constructor 
	Vehicle() {
		L = 4.84;
		lambda = 0; 
		R = set_rotation_radius(L,lambda);
		v = set_velocity(0);
		w = set_rotation_rate(v, R);
	}

	float set_rotation_radius(float L,float lambda) {
		if (lambda == 0)
		{
			return 1 * 10 ^ 6;
		}
		else
		{
			return L / tan(lambda);
		}
		
	}
	float set_velocity(float vel) {
		return vel;
	}
	float set_rotation_rate(float vel, float R) {
		return vel/R;
	}
};

