#include <iostream>
#include <cmath>
using namespace std;

void showSelection() 
{
	cout << "*****************************************" << endl;
	cout <<"Welcome to Black Scholes Option Pricer Program" << endl;
	cout << "1. Calculate Call Price" << endl;
	cout << "2. Calculate Put  Price" << endl;
	cout << "3. Exit" << endl;
	cout << "*****************************************" << endl;
}

double normalDistribution(double x)
{
  static const double RT2PI = sqrt(4.0*acos(0.0));
  static const double SPLIT = 10./sqrt(2);
  static const double a[] = {220.206867912376,221.213596169931,112.079291497871,33.912866078383,6.37396220353165,0.700383064443688,3.52624965998911e-02};
  static const double b[] = {440.413735824752,793.826512519948,637.333633378831,296.564248779674,86.7807322029461,16.064177579207,1.75566716318264,8.83883476483184e-02};
  
  const double z = fabs(x);
  double Nz = 0.0;
  
  // if z outside these limits then value effectively 0 or 1 for machine precision
  if(z<=37.0)
  {
    // NDash = N'(z) * sqrt{2\pi}
    const double NDash = exp(-z*z/2.0)/RT2PI;
    if(z<SPLIT)
    {
      const double Pz = (((((a[6]*z + a[5])*z + a[4])*z + a[3])*z + a[2])*z + a[1])*z + a[0];
      const double Qz = ((((((b[7]*z + b[6])*z + b[5])*z + b[4])*z + b[3])*z + b[2])*z + b[1])*z + b[0];
      Nz = RT2PI*NDash*Pz/Qz;
    }
    else
    {
      const double F4z = z + 1.0/(z + 2.0/(z + 3.0/(z + 4.0/(z + 13.0/20.0))));
      Nz = NDash/F4z;
    }
  }
  return x>=0.0 ? 1-Nz : Nz;
}

void blackscholes(int u);

int main(){
	
	int o;
	do{
		showSelection();
		cout << "Option: " << endl;
		cin >> o;
		
		switch(o){
			case 1: blackscholes(o); break;
			case 2: blackscholes(o); break;
		}}while(o != 3);
		

	return 0;
}

void blackscholes(int u)
{	
	double  s, k, t, v, r, d1, d2, Vc, Vp;
	cout << "Please enter Spot Price E.g. 120.0" << endl;
	cin >> s;
	cout << "Please enter Strike Price E.g. 100.0" << endl;
	cin >> k;
	cout << "Please enter time to expiration(days) E.g. 40" << endl;
	cin >> t;
	cout << "Please enter Volatility E.g. 0.32" << endl;
	cin >> v;
	cout << " Please enter riskfree rate E.g. 0.05" << endl;
	cin >> r;
	d1 = (log(s/k) + (r + 0.5*v*v)*(t/365))/(v*sqrt(t/365));
	d2 = d1 - (v*(sqrt(t)));
	Vc = s*normalDistribution(d1) - normalDistribution(d2)*k*exp(-r*(t/365));
	Vp = Vc + (k*exp(-r*(t/365)))-s;
	if (u == 1){
		cout << "Call Price: " << Vc << endl;}
	else if (u == 2){
		cout << "Put Price: " << Vp << endl;}
	else {}

	
}

