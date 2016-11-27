//
//  main.cpp
//  LightingVectors
//
//  Created by Laura del Pino Díaz on 27/11/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include <iostream>


using namespace std;



float calculateDotProduct(float surfaceNormal[], float ray[]){
    
    return surfaceNormal[0]*ray[0]+surfaceNormal[1]*ray[1]+surfaceNormal[2]*ray[2];
}



void calculateRay(float destiny[], float lightSource[],float* result){
    
    for (int i = 0; i < 3; i++) {
        result[i] = lightSource[i] - destiny[i];
    }
    
}

int main(int argc, const char * argv[]) {
   
    
    float normal2surface[3] = {0,1,0};
    float illuminatedPoint[3] = {0,10,0};
    float lightSource[3] = {20,20,40};
    
    float ray[3];
    calculateRay(illuminatedPoint,lightSource,ray);
    
    float intensityOfLight = calculateDotProduct(normal2surface,ray);
    
    cout << intensityOfLight << endl;
    
    return 0;
}
