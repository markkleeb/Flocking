/*
 *  Boid.h
 *  boid
 *
 *  Created by Jeffrey Crouse on 3/29/10.
 *  Copyright 2010 Eyebeam. All rights reserved.
 *
 */

#ifndef BOID_H
#define BOID_H

#include "ofMain.h"
#include <list>
#include "ofxCvBlob.h"
#include "ofxCvContourFinder.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "Path.h"
#include "Blob.h"
#include "totalBlobs.h"


class Boid {
    
    int objAvoidScalar;
    ofImage i;
    int counter;
    bool avoidObject;
    
public:
	Boid();
	
	void update();
	void draw();
    void seek(ofPoint target);
    void arrive(ofPoint target);
    void wander();
	
	ofPoint loc;
	ofPoint vel;
	ofPoint acc;
    
    ofPoint normal;
    ofPoint target;
    ofPoint predictLoc;
    ofPoint heading;
    ofPoint dir;
	float r;
	float maxforce;
	float maxspeed;
    float wandertheta;
    float record;
    
    void follow(Path* p);
    ofPoint getNormalPoint(ofPoint a, ofPoint b, ofPoint c);
    
    bool projected;
    bool debug;
    bool _wander;
    
   // ofxCvContourFinder contourFinder;
    
    
    vector<ofPoint> p;
    
 
  //  ofPoint overlap(ofxCvBlob b1, ofxCvBlob b2);
    
    ofPoint steer(ofPoint target, bool slowdown);
    
    
    void intersects(totalBlobs& tblobs, Path* _path);
};

#endif