//
//  Blob.h
//  Airport
//
//  Created by Mark Kleback on 2/25/12.
//  Copyright (c) 2012 Kleebtronics, Inc. All rights reserved.
//

#ifndef Airport_Blob_h
#define Airport_Blob_h


#include "ofMain.h"


class Blob {
public:
	Blob();
	
	void update();
	void draw();
	ofPoint centroid;
	float r;
    vector<ofPoint> points;
    
    void setImage(ofImage * _img);
    void setPosition(int x, int y);
    
    
    ofImage * img;
    
    
};



#endif
