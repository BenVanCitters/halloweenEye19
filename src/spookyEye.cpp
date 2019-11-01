#include "spookyEye.h"

spookyEye::spookyEye()
{
	ofDisableArbTex();
	mySphere = ofSpherePrimitive(320, 100);
	eyeTex = ofImage("eye2.jpg");
}


spookyEye::~spookyEye()
{
}


void spookyEye::update()
{

}
void spookyEye::render()
{

	float t = ofGetElapsedTimef();
	ofRotateXRad(PI / 8 * ofSignedNoise(t*0.7));
	ofRotateYRad(PI + PI / 8 * ofSignedNoise(t*0.5));
	//    ofRotateZRad(t/3);

	eyeTex.bind();
	mySphere.draw();
	//    mySphere.drawWireframe();
	eyeTex.unbind();

}