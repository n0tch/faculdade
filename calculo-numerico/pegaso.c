#include<stdio.h>
#include<math.h>

float f(float x){
	return 3*x-cos(x);
//	return 5-x*exp(x);
}


void main(){
	int k=0, flg = 1;
	//x[0] -> xk-1
	//x[1] -> xk
	//x[2] -> xk+1
	float x[3], func[3], erro;
	float a,b;

	printf("k\txk-1\t\tf(xk-1)\t\txk\t\tf(xk)\t\txk+1\t\tf(xk+1)\t\tE\n");
	while(flg){
		if(k==0){
			x[0] = 0;
			func[0] = f(x[0]);
			x[1] = 0.5;
			func[1] = f(x[1]);
			x[2] = (x[0]*func[1]-x[1]*func[0] ) / (func[1]-func[0]);
			func[2] = f(x[2]);
			erro = fabs( (x[1]-x[2])/x[2] );
		}else{
			if(func[2]*func[1] < 0){
				x[0] = x[1];
				func[0] = f(x[0]);
			}else{
				func[0] = func[0] * ( func[1]/(func[1]+func[2]) );
			}
			x[1] = x[2];
			func[1] = f(x[1]);

			x[2] = (x[0]*func[1]-x[1]*func[0] ) / (func[1]-func[0]);
			func[2] = f(x[2]);
			erro = fabs( (x[1]-x[2])/x[2] );
		}

		printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n", k, x[0], func[0], x[1], func[1], x[2], func[2], erro);

		k++;
		if(erro <= pow(10, -3)){
			flg = 0;
		}
	}
}
