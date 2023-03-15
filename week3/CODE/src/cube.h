#include <stdio.h>
#include "ofMain.h"

#include "boid.h"


class Cube :public Boid {
private:
	ofVec3f color;
public:
	Cube();
	void draw();
};
