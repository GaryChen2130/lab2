#include "lab2_class.h"

Rating::Rating(int ra,int rb,int k){
	setRate(ra,rb);
	setK(k);
	setE(ra,rb);
}

void Rating::setRate(int rsa,int rsb){
	rateA = rsa;
	rateB = rsb;
}

int Rating::getRateA(){
	return rateA;
}

int Rating::getRateB(){
	return rateB;
}

void Rating::setK(int ks){
	K = ks;
}

int Rating::getK(){
	return K;
}

void Rating::setE(int a,int b){

	float pa = (float)(b - a)/400.0,pb = (float)(a - b)/400.0;
	
	EA = 1.0/(1.0 + pow((float)10,pa));
	EB = 1.0/(1.0 + pow((float)10,pb));

}

float Rating::getEA(){
	return EA;
}

float Rating::getEB(){
	return EB;
}



