#pragma once

#include "ofMain.h"

class spookyEye
{
public:
	spookyEye();
	~spookyEye();
	void update();
	void render();
private:
	ofSpherePrimitive mySphere;
	ofImage eyeTex;

};

