#include <iostream>
#include <fstream>
#include "lab2_class.h"
using namespace std;

int main(){

int ra,rb,k;
float score,na,nb;

ifstream inFile("file.in");
ofstream outFile("file.out",ios::out);
if(!inFile)cout << "Opening failed.\n" ;

inFile >> k >> ra >> rb;
Rating rt(ra,rb,k);

outFile << ra << " "<< rb << endl << endl;

while(inFile >> score){

	na = (float)ra + rt.getK()*(score - rt.getEA());
	nb = (float)rb + rt.getK()*((1.0 - score) - rt.getEB());
	ra = na;
	rb = nb;
	if(na - 0.5 >= (float)ra)ra += 1;
	if(nb - 0.5 >= (float)rb)rb += 1;

	outFile << ra << " " << rb << "\n\n";

	rt.setRate(ra,rb);
	rt.setE(ra,rb);

}

return 0;


}


