//
//  Path.h
//  Airport
//
//  Created by Mark Kleback on 3/5/12.
//  Copyright (c) 2012 Kleebtronics, Inc. All rights reserved.
//

#ifndef Airport_Path_h
#define Airport_Path_h

#include "ofMain.h"


class Path {
public:	
    // A Path is an vector of ofPoints
    vector<ofPoint> points;
    
    // A path has a radius, i.e how far is it ok for the boid to wander off
    float radius;
    
    bool debug;
    
    Path();
    void addPoint(float x, float y);
    void draw();
	
	
    static float mag(ofPoint* p) {
        return sqrt(p->x*p->x + p->y*p->y + p->z*p->z);
    }
    
    static ofPoint normalize(ofPoint* p) {
        float m = mag(p);
        if (m != 0 && m != 1) {
            *p/=m;
        }	
    }
    
    static float dotproduct(ofPoint a, ofPoint b) {
        return a.x*b.x + a.y*b.y + a.z*b.z;
    }
	
};

#endif
