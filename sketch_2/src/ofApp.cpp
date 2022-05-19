#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground((0, 0, 0));
	gui.setup();
	gui.add(size.setup("thickness", 5, 1, 30));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofSetCircleResolution(128);

	//body
	ofPushStyle();

	ofSetColor(100, 100, 100); 
	ofDrawRectangle(ofGetWidth() / 2 - 350, ofGetHeight() / 2 + 150, 300, 600);

	ofPopStyle();
	
	//head
	ofPushStyle();

	ofSetColor(128, 128, 128);
	ofEllipse(ofGetWidth() / 2 -200, ofGetHeight() / 2, 340, 360);

	ofPushStyle();

	//goggles
	ofPushStyle();

	ofSetColor(192, 192, 192);
	ofDrawRectangle(ofGetWidth() / 2 - 300 , ofGetHeight() / 2 + 20, 300, 50);

	ofPopStyle();

	//mouth
	ofPushStyle();

	ofSetColor(0, 0, 0);
	ofEllipse(ofGetWidth() / 2 - 160, ofGetHeight() / 2 + 130, 60, 55);

	ofPopStyle();
	
	ofSetColor(169, 17, 17);
	ofSetLineWidth(size);
	ofDrawLine(ofGetWidth() / 2 - 250, ofGetHeight() / 2 + 45, ofGetWidth(), ofGetHeight() / 2 + 45);
	gui.draw();
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
