#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"    
#else
	#include <cmath>
#endif
#include <iostream>

int main() { 


#ifdef USE_TRIGONOMETRY_DEGREE
std::cout<<"Using degrees\n";
double result = degreemath::sin(45.0); 

#else
std::cout<<"Using radians\n";
double result=std::sin(M_PI/4);

#endif

std::cout<<result<<std::endl;    

}