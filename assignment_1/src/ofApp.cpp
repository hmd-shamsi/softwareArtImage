#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(136,212,195, 80);

	z = 10;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetCircleResolution(z);

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	//ears
	ofPushStyle();

	ofSetColor(182, 244, 134);
	ofEllipse(120, -140, 30, 90);
	ofEllipse(-120, -140, 30, 90);
	ofSetColor(182, 244, 134,70);
	ofEllipse(120, -140, 30, 90);
	ofEllipse(-120, -140, 30, 90);

	ofSetColor(136, 212, 195);
	ofEllipse(120, -140, 20, 60);
	ofEllipse(-120, -140, 20, 60);

	ofPushStyle();


	//head
	ofPushStyle();

	ofSetColor(182, 244, 134);
	ofEllipse(0, 0, 340, 360);

	ofPushStyle();

	//eye
	ofPushStyle();
	
	ofSetColor(255);
	ofSetLineWidth(100);
	ofEllipse(0, 20, 130, 130);
	ofSetColor(0);
	ofEllipse(x, y, 55, 75);
	
	ofPopStyle();

	//mouth
	ofPushStyle();

	ofSetColor(0, 0, 0);
	ofEllipse(0, 120, 40, 35);

	ofPopStyle();

	//candy
	ofPushStyle();

	ofSetColor(168, 174, 221);
	ofDrawCircle(350, -130, 30);
	ofSetColor(64, 14, 99);
	ofDrawCircle(-350, -130, 30);
	ofSetColor(64, 14, 99);
	ofDrawCircle(350, 130, 30);
	ofSetColor(168, 174, 221);
	ofDrawCircle(-350, 130, 30);
	ofSetColor(135, 105, 182);
	ofDrawCircle(0, -280, 30);
	ofSetColor(135, 105, 182);
	ofDrawCircle(0, 280, 30);

	ofPopStyle();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if (key == ' ') {
		x = ofRandom(-30, 30);
		y = ofRandom(-5, 45);
	}

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
	
	if (button == 0) {
		z = ofRandom(3, 10);
	}
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
