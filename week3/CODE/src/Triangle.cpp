#include "ofMain.h"
#include "Triangle.h"

Triangle::Triangle() {
	separationWeight = 1.0f;
	cohesionWeight = 0.2f;
	alignmentWeight = 0.1f;

	separationThreshold = 15;
	neighbourhoodSize = 100;

	position = ofVec3f(ofRandom(600, 800), ofRandom(500, 900));
	velocity = ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1));
	color = ofVec3f(200, 124, 95);

	a = 8;
}

void Triangle::draw()
{
	ofSetColor(color.x, color.y, color.z);
	ofTriangle(position.x - a / 2,position.y - (sqrt(3) / 2) * a,position.x + a / 2, position.y - (sqrt(3) / 2)*a,position.x,position.y+ (sqrt(3) / 2) * a) ;
}