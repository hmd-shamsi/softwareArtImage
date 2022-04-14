#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofSeedRandom();

	//set color rgb values to a sunset palette from:https://www.schemecolor.com/sunset-tones.php
	color1.set(8, 24, 58);
	color2.set(21, 40, 82);
	color3.set(75, 61, 96);
	color4.set(253, 94, 83);
	color5.set(252, 156, 84);
	color6.set(255, 227, 115);

	//set each color in its corresponding array
	colors[0] = color1;
	colors[1] = color2;
	colors[2] = color3;
	colors[3] = color4;
	colors[4] = color5;
	colors[5] = color6;

	//random function to generate different colors
	colorIndex = ofRandom(6);

	ofBackground(colors[colorIndex]);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	//set origin to be in the center
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	
	ofSetCircleResolution(100);

	//draw three different circles with three different colors that change on every run
	ofSetColor(colors[(colorIndex + 1) % 6]);
	ofCircle(-330, 0, 130);
	ofSetColor(colors[(colorIndex + 2) % 6]);
	ofCircle(0, 0, 130);
	ofSetColor(colors[(colorIndex + 3) % 6]);
	ofCircle(+330, 0, 130);

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
