#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double func(double x) 
{   
    double x2=x*x; 
    return x-(x*x + 2*x + 1)/(2*x + 2);  
} // funcd = func' 


int main(){
	//double N0=100;
	double iteration_times;
	//double TOL=1E-9;
	double presicion;
	double TOL = pow(10,-presicion);
	double i; 
	double p;
	double p0;
	double interation_counter = 0;

	cout << "input start point x: ";
	cin >> p0;
	cout << "input loop times : ";
	cin >> iteration_times;
	cout << "input setprecision after decimal point: ";
	cin >> presicion;

	cout << "start : " <<p0 << endl;
while(interation_counter <= iteration_times) {
	p=func(p0);

	cout << setprecision(presicion) <<endl; 
	cout << "iteration times = " << interation_counter << "	";
	cout << "p0 = " <<p0 << "	";
	cout << "p = " << p << endl;

//	cout << "the answer is: x = " << func(p) << endl;

        if ( (abs(p-p0)) < pow(10,-presicion) )
        {
	cout << "the answer is: x = " <<func(p) << endl;
}
        else{
        p0=p;
}
	interation_counter = interation_counter + 1;
}

return 0; 
}
