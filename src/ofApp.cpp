#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofDisableAlphaBlending();
    ofEnableDepthTest();
//    ofEnableLighting();

}

//--------------------------------------------------------------
void ofApp::update()
{
    //    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    //    ofLight l;
    //    l.setPointLight();
    //    l.enable();
    //    l.setPosition(500*cos(t), 500*sin(t),0);
    //    l.setAttenuation(.9);
}

//--------------------------------------------------------------
void ofApp::draw()
{

	int t = (int)ofGetElapsedTimef()%3;
    ofClear(0, 0, 0);
	switch (t)
	{
	case 0:
    ofBackground(0, 0, 0);
		break;
	case 1:
	ofBackground(255, 100, 0);
		break;
	case 2:
	ofBackground(255,255, 0);
		break;
	default:
		break;

	}
    
    cam.begin();

	eye.render();
    cam.end();
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
