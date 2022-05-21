#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	
	//ofBackground(136, 212, 195, 80);
	
	ofBackground(30);

	z = 10;
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	//stars
	ofPushStyle();

	float now = ofGetElapsedTimef();

	ofSetCircleResolution(100);

	if (now > tickSpeed) {

		ofSetColor(239, 239, 232);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);
		ofDrawCircle(ofRandom(1400), ofRandom(1400), 2);

		tickSpeed = now + 0.1;
	}

	ofPopStyle();
	

	ofSetCircleResolution(z);
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	ofPushStyle();
	ofPushMatrix();

	if (counter == 2) {
		float earTime = ofGetElapsedTimef();
		float earTimeScale = 0.8;
		float earNoise = ofSignedNoise(earTime * earTimeScale) * 200.0;
		ofRotate(earNoise);
	}

	//ears
	ofSetColor(alienr, alieng, alienb);
	ofEllipse(120, -140, 30, 90);
	ofEllipse(-120, -140, 30, 90);
	ofSetColor(alienr, alieng, alienb, 70);
	ofEllipse(120, -140, 30, 90);
	ofEllipse(-120, -140, 30, 90);

	ofSetColor(128, 134, 181);
	ofEllipse(120, -140, 20, 60);
	ofEllipse(-120, -140, 20, 60);

	ofPushStyle();
	ofPushMatrix();

	if (counter == 2) {
		float headTime = ofGetElapsedTimef();
		float headTimeScale = 1;
		float headNoise = ofSignedNoise(headTime * headTimeScale) * 100.0;
		ofRotate(headNoise);
	}

	//head
	ofSetColor(alienr, alieng, alienb);
	ofEllipse(0, 0, 340, 360);

	ofPopStyle();
	ofPopMatrix();
	//ofPopMatrix();


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
	ofPopMatrix();

	ofPushStyle();
	ofPushMatrix();

	float time = ofGetElapsedTimef();
	float timeScale = 0.8;
	float noise = ofSignedNoise(time * timeScale) * 50.0;
	ofRotate(noise);

	//candy 
	ofSetCircleResolution(3);
	ofSetColor(72, 53, 124);
	ofDrawCircle(0, 280, 30);
	ofSetColor(72, 53, 124);
	ofDrawCircle(350, -130, 30);
	ofSetColor(82, 63, 134);
	ofDrawCircle(-350, -130, 30);
	ofSetColor(82, 63, 134);
	ofDrawCircle(350, 130, 30);
	ofSetColor(62, 43, 114);
	ofDrawCircle(-350, 130, 30);
	ofSetColor(62, 43, 114);
	ofDrawCircle(0, -280, 30);

	ofPopMatrix();
	ofPopStyle();


}



//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	
	if (key == ' ') {
		cout << counter << endl;

		x = ofRandom(-30, 30);
		y = ofRandom(-5, 45);
		
		if (counter >= 3) {
			z = counter;
		}
		counter--;
	}

	if (key == 'm') {
		x = ofRandom(-30, 30);
		y = ofRandom(-5, 45);
		z = counter;
		counter++;
	}

	if (counter == 10) {
		alienr = 146;
		alieng = 213;
		alienb = 177;
	}
	if (counter == 9) {
		alienr = 146;
		alieng = 213;
		alienb = 201;
	}
	if (counter == 8) {
		alienr = 146;
		alieng = 191;
		alienb = 213;
	}
	if (counter == 7) {
		alienr = 146;
		alieng = 167;
		alienb = 213;
	}
	if (counter == 6) {
		alienr = 146;
		alieng = 146;
		alienb = 213;
	}
	if (counter == 5) {
		alienr = 164;
		alieng = 146;
		alienb = 213;
	}
	if (counter == 4) {
		alienr = 130;
		alieng = 107;
		alienb = 191;
	}
	if (counter == 3) {
		alienr = 110;
		alieng = 91;
		alienb = 162;
	}
	if (counter == 2) {
		alienr = 72;
		alieng = 53;
		alienb = 124;
	}

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
