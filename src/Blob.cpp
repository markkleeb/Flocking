//
//  Blob.cpp
//  Airport
//
//  Created by Mark Kleback on 2/25/12.
//  Copyright (c) 2012 Kleebtronics, Inc. All rights reserved.
//

#include <iostream>
#include "Blob.h"
#include "ofxCvBlob.h"


Blob::Blob() {
    
}

void Blob::update(){
    
}

void Blob::setPosition(int x, int y){
    
    centroid.x = x;
    centroid.y = y;
    
    
    ofPoint p1, p2, p3, p4;
    p1.set(centroid.x+15, centroid.y);
    p2.set(centroid.x, centroid.y+20);
    p3.set(centroid.x-15, centroid.y);
    p4.set(centroid.x, centroid.y-20);
    
    
    
    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);
    points.push_back(p4);
    
}

void Blob::setImage(ofImage *_img)
{
    img = _img;
}

void Blob::draw(){
    
    ofPushMatrix();
    ofNoFill();
    ofTranslate(centroid.x, centroid.y);
    
    /*
    ofNoFill();
    
    ofSetColor(0, 0, 255);
    ofFill();
   
    ofBeginShape();
    
    for(int i = 0; i<points.size(); i++){
        ofVertex(points[i]);
    }
             
    ofEndShape();
   */ 
    //img->loadImage("shiffman.png");
   // img->resize(30,40);
    img->setAnchorPoint(15, 20);
    img->draw(0,0);
    ofPopMatrix();
    
    
    
}