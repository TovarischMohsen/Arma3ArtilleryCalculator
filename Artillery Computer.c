#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Made By [SGT] Tovarisch Mohsen For Arma 3 Artillery Calculations. */
/* Find Me in Social Media @TovarischMohsen. */
int main(int argc, char *argv[]) {
	
	int F,X,Y,Z,A,B,C,K,M,O,V,ED,TD,LD,LDE,HD,HDE,HDD,LDD;
		start:
			
			printf("REMEMBER TO CHECK THE ARTILLERY RANGETABLE.\n");
			printf("\n");
			printf("Type Elevation Difference:\n");
			scanf("%d",&ED );
			printf("Type distance To Taget:\n");
			scanf("%d",&TD );
			printf("Type nearest distance to target from rangetable:\n");
			scanf("%d",&LD );
			printf("Type nearest distance's elevation from rangetable:\n");
			scanf("%d",&LDE );
			printf("Type nearest distance's -D ELV from rangetable:\n");
			scanf("%d",&LDD);
			printf("Type furthest distance from rangetable:\n");
			scanf("%d",&HD );
			printf("Type furthest distance's elevation from rangetable:\n");
			scanf("%d",&HDE );
			printf("Type Furthest distance's -D ELV from rangetable:\n");
			scanf("%d",&HDD);
			
			X=TD-LD;
			/*printf("X= %d\n",X);*/
			
			Y=HD-LD;
			/*printf("Y= %d\n",Y);*/
			
			V=LDE-HDE;
			/*printf("V= %d\n",V);*/
			
			Z=V*X/Y;
			/*printf("Z= %d\n",Z);*/
			
			A=LDE-Z;
			/*printf("A= %d\n",A);*/
			
			C=HDD-LDD;
			/*printf("C= %d\n",C);*/
			
			M=LDE-A;
			/*printf("M= %d\n",M);*/
			
			K=C*M/V;
			/*printf("K= %d\n",K);*/
			
			B=LDD+K;
			/*printf("B= %d\n",B);*/
			
			O=B*ED/100;
			/*printf("O= %d\n",O);*/
			
			F=A-O;
			printf("F= %d\n",F);
			
		
		goto start;
	return 0;
}