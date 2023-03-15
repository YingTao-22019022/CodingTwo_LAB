#include "ofApp.h"
#include <cstdlib>
#include <ctime>

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	hue = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	particle newParticle(mouseX, mouseY, hue);
	particles.push_back(newParticle);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	hue = ofRandom(255);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

////--------------------------------------------------------------
//void ofApp::mouseEntered(int x, int y){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseExited(int x, int y){
//
//}
//
////--------------------------------------------------------------
//void ofApp::windowResized(int w, int h){
//
//}
//
////--------------------------------------------------------------
//void ofApp::gotMessage(ofMessage msg){
//
//}
//
////--------------------------------------------------------------
//void ofApp::dragEvent(ofDragInfo dragInfo){ 
//
//}

particle::particle(int startX, int startY, int hue) {
	position = glm::vec2(startX, startY);
	force = glm::vec2(0, 0.02);
	direction = glm::vec2(ofRandom(-2.0, 2.0), ofRandom(-2.0, 2.0));
	size = 20;
	color.setHsb(hue, 255, 255, 200);
}

particle::~particle() {

}

void particle::update() {
	position += direction;
	direction += force;
	if (size > 1) {
		size -= 0.07;
	}
	float brightness = color.getBrightness();
	float myHue = color.getHue();

	if (brightness > 20) {
		color.setHue(myHue -= 0.5);
	}
}

void particle::draw() {
	int num = rand() % 100;
	ofSetColor(color);
	ofDrawRectangle(position, size, size);
}