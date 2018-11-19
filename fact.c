#include <stdio.h>

int main(int argc, char *argv[]) {

	int a,b,c;
	int x;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	x=0;
	if(a*a==b*b + c*c){
		x=1;
	}
	
	
             
    if(b*b==a*a+c*c){
    	x=1;
	}
	   
	if (c*c==a*a+b*b){
	x=1;			   
	}


	if(x==1){
			printf("YES");
	}			    
	else{	
			printf("NO");
	}
	
    return 0;

}
