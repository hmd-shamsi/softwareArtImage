#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	/*
	ofSeedRandom();

	ofBackground(0);
	
	gimmeAudio.load("gimmeAudio.wav");
	gimmeAudio.setVolume(0.5);
	gimmeAudio.play();
	gimmeAudio.setLoop(true);
	gimmeAudio.setSpeed(1);
	
	discoVideo.load("discoVid.mp4");
	discoVideo.setVolume(0);
	discoVideo.play();

	color1.set(15, 192, 252, 100);
	color2.set(123, 29, 175, 100);
	color3.set(255, 47, 185, 100);
	color4.set(212, 255, 71, 100);
	color5.set(27, 54, 73, 100);

	colors[0] = color1;
	colors[1] = color2;
	colors[2] = color3;
	colors[3] = color4;
	colors[4] = color5;

	colorsIndex = ofRandom(5);
	*/

	ofBackground(0);
	gimmeAudio.load("gimmeAudio.wav");
	gimmeAudio.setVolume(0.5);
	gimmeAudio.play();
	gimmeAudio.setLoop(true);
	gimmeAudio.setSpeed(1);
	discoVideo.load("discoVid.mp4");
	discoVideo.setVolume(0);
	discoVideo.play();

	

}

//------------------------------------------------------------	--
void ofApp::update() {
	
	/*
	discoVideo.update();
	*/

	discoVideo.update();

}

//--------------------------------------------------------------
void ofApp::draw() {

	/*	
	float now = ofGetElapsedTimef();

	discoVideo.draw(0, 0);

	ofSetCircleResolution(100);

	if (now > tickSpeed) {

		ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

		ofPushStyle();

		ofSetColor(colors[(colorsIndex) % 5]);
		ofCircle(ofRandom(-200, 200), ofRandom(-100, 100), 72);

		ofSetColor(colors[(colorsIndex + 1) % 5]);
		ofCircle(ofRandom(-200, 200) + 150, ofRandom(-100, 100), 72);

		ofSetColor((colorsIndex + 2) % 5);
		ofCircle(ofRandom(-200, 200) - 150, ofRandom(-100, 100), 72);

		ofSetColor((colorsIndex + 3) % 5);
		ofCircle(ofRandom(-200, 200), ofRandom(-100, 100) + 150, 72);

		ofSetColor((colorsIndex + 4) % 5);
		ofCircle(ofRandom(-200, 200), ofRandom(-100, 100) - 150, 72);

		ofPopStyle();

		tickSpeed = now + 0.32;
		}
		*/

	float now = ofGetElapsedTimef();

	discoVideo.draw(0, 0);

	ofSetCircleResolution(100);

	if (now > tickSpeed) {

		ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

		ofPushStyle();

		ofSetColor(255, 47, 185, 100);
		ofCircle(ofRandom(-200, 200), ofRandom(-100, 100), 72);

		ofSetColor(123, 29, 175, 100);
		ofCircle(ofRandom(-200, 200) + 150, ofRandom(-100, 100), 72);

		ofSetColor(15, 192, 252, 100);
		ofCircle(ofRandom(-200, 200) - 150, ofRandom(-100, 100), 72);

		ofSetColor(212, 255, 71, 100);
		ofCircle(ofRandom(-200, 200), ofRandom(-100, 100) + 150, 72);

		ofSetColor(27, 54, 73, 100);
		ofCircle(ofRandom(-200, 200), ofRandom(-100, 100) - 150, 72);

		ofPopStyle();

		tickSpeed = now + 0.32;
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
