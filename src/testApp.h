#pragma once

#include "ofMain.h"
#include "Boid.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "Path.h"
#include "Blob.h"
#include "totalBlobs.h"



class testApp : public ofBaseApp{

    int startX, startY;
    
	public:
		void setup();
		void update();
		void draw();
       // void exit();
    
        void kinectImage();
    
        void drawPointCloud();
		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void newPath();
    
    
        vector<Boid> boids;
        vector<Blob> blobs;
    
    ofImage i;
       
    totalBlobs tblobs;
    
    Path* path;
    
    ofPoint mouse;
    
    
               
private:
    void capture();
    bool doCapture;
    int framenum;
};
