#include <stdio.h>
#include "ofMain.h"

#include "boid.h"


class Triangle :public Boid {
private:
	ofVec3f color;
	int a;
public:
	Triangle();
	void draw();
};
