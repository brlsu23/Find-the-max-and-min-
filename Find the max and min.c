#include<stdio.h>

int main(){
	int x,y,z,max,min;
	printf("Enter a three numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	//largest
	if(x > y && x > z){
		max= x;
		
	}else if(y > x && y > z){
		max = y;
		
		
	}else{
		max = z;
	}
	
	//least
	if(x < y && x < z){
		min= x;
	
	}else if(y < x && y < z){
		min = y;
				
	}else{
		min = z;
	}
	printf("The Largest Number: %d\n",max);
	printf("The Least Number: %d",min);
	
	return 0;
}
