#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofDisableAlphaBlending();
    ofEnableDepthTest();
//    ofEnableLighting();
    ofDisableArbTex();
    mySphere = ofSpherePrimitive(320, 100);
    eyeTex = ofImage("eye2.jpg");
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
    float t = ofGetElapsedTimef();
    ofBackground(0, 0, 0);
    ofClear(0, 0, 0);
    
    cam.begin();

    ofRotateXRad(PI/8*ofSignedNoise(t*0.7));
    ofRotateYRad(PI+PI/8*ofSignedNoise(t*0.5));
//    ofRotateZRad(t/3);
    
    eyeTex.bind();
    mySphere.draw();
//    mySphere.drawWireframe();
    eyeTex.unbind();
    
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
