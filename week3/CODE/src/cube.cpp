#include "ofMain.h"
#include "cube.h"

Cube::Cube() {
	separationWeight = 0.4f;
	cohesionWeight = 0.3f;
	alignmentWeight = 0.4f;

	separationThreshold = 30;
	neighbourhoodSize = 250;

	position = ofVec3f(ofRandom(100, 200), ofRandom(100, 200));
	velocity = ofVec3f(ofRandom(-3, 3), ofRandom(-3, 3));
	color = ofVec3f(255, 124, 255);
}

void Cube::draw()
{
	ofSetColor(color.x, color.y, color.z);
	ofCircle(position.x, position.y, 6);
	ofSetColor(23,125,36);
	ofRect(position.x-2, position.y, 4, 60);
}