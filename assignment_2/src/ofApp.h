#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		/*
		float tickSpeed = 0;
		int colorsIndex;

		ofSoundPlayer gimmeAudio;
		ofVideoPlayer discoVideo;

		ofColor color1;
		ofColor color2;
		ofColor color3;
		ofColor color4;
		ofColor color5;

		ofColor colors[5];
		*/

		float tickSpeed = 0;
		ofSoundPlayer gimmeAudio;
		ofVideoPlayer discoVideo;
		
};
