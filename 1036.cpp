#include <bits/stdc++.h>

using namespace std;

int main(){
	double a, b, c, r1, r2, delta;
	
	cin >> a >> b >> c;
	
	delta = (pow(b, 2) -(4.0 * a * c));
	if(delta < 0 || a == 0)
	{
		printf("Impossivel calcular\n");
	} else {
		r1 = (-b + sqrt(delta))/(2.0*a);
		r2 = (-b - sqrt(delta))/(2.0*a);
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);
	}
	
}
