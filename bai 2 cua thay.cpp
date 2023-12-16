#include<stdio.h>
#include<math.h>
int main(){
	int n;
	for(int i = 0; i < n; i++){
	
	int x1, y1;
	printf("nhap gia tri x1 va y1", x1, y1);
	scanf("%d%d", &x1, &y1);
	//return 1;
	int x2, y2;
	printf("nhap gia tri cua x2 y2", x2, y2);
	scanf("%d%d", &x2, &y2);
	//return 1;
	int x3, y3;
	printf("nhap gia tri cua x3 y3", x3, y3);
	scanf("%d%d", &x3,&y3);

	int ab, bc,ac;
	ab=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	ac=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	bc=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	if(ab + ac > bc && ac+bc < ab && bc + ab < ac){
		printf("la mot tam giac");
	}
	else{
		printf("ko phai tam giac");
	}
}
	}huynhtandinh
