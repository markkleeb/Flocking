//
//  Path.cpp
//  Airport
//
//  Created by Mark Kleback on 3/5/12.
//  Copyright (c) 2012 Kleebtronics, Inc. All rights reserved.
//

#include <iostream>
#include "Path.h"


Path::Path() {
	// Arbitrary radius of 20
	radius = 100;
	debug = true;
}

// Add a point to the path
void Path::addPoint(float x, float y) {
	ofPoint point;
	point.x = x;
	point.y = y;
	points.push_back(point);
}

// Draw the path
void Path::draw() {
	
	// Draw the radius as thick lines and circles
	if (false) {
		ofEnableAlphaBlending();
		ofSetColor(200, 200, 200, 200);
		
		// Draw end points
		for (int i = 0; i < points.size(); i++) {
            ofSetColor(175, 175, 175);
			ofEllipse(points[i].x,points[i].y,radius*2,radius*2);
		}
		
		// Draw Polygon around path
		for (int i = 0; i < points.size()-1; i++) {
			ofPoint start = points[i];
			ofPoint end = points[i+1];
			ofPoint line = end - start;
			ofPoint normal;
			normal.x = line.y;
			normal.y = -line.x;
			normalize(&normal);
			normal *= radius;
			
			// Polygon has four vertices
			ofPoint a = start + normal;
			ofPoint b = end + normal;
			ofPoint c = end - normal;
			ofPoint d = start - normal;
			
			ofSetColor(175, 175, 175);
			ofBeginShape();
			ofVertex(a.x,a.y);
			ofVertex(b.x,b.y);
			ofVertex(c.x,c.y);
			ofVertex(d.x,d.y);
			ofEndShape();
		}
		ofDisableAlphaBlending();
	}
	
	// Draw Regular Line
	ofSetColor(0,0,0);
	ofNoFill();
	ofBeginShape();
	for (int i = 0; i < points.size(); i++) {
		ofVertex(points[i].x, points[i].y);
	}
	ofEndShape();
	
}