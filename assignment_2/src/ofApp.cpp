#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

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
	discoVideo.update();
}

//--------------------------------------------------------------
void ofApp::draw() {

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
