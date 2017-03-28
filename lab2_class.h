#include <iostream>
#include <math.h>
using namespace std;

class Rating{

	public:
		Rating(int ra,int rb,int k);
		void setRate(int rsa,int rsb);
		int getRateA();
		int getRateB();
		void setK(int ks);
		int getK();
		void setE(int a,int b);
		float getEA();
		float getEB();

	private:
		int K;
		int rateA,rateB;
		float EA,EB;

};

