#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#define pf printf
#define sf scanf

using namespace std;

main(){
	
	int n,x;
	int sudoku[9][9]={{2,1,5,3,0,9,0,6,4},
				      {9,0,6,1,2,4,3,0,7},
				      {7,3,4,8,5,6,0,1,0},
				      {4,5,0,7,8,0,6,9,3},
				      {8,6,9,5,0,3,1,0,2},
				      {3,7,0,6,9,2,0,8,5},
				      {5,2,7,4,1,8,0,0,6},
				      {6,0,8,9,3,7,0,2,1},
				      {1,9,0,2,0,5,7,4,8},
					    };
	
	system("color 09");
	
	cout<<"----------Bienvenid@ al Sudoku loko----------\n";
	cout<<"*Para completar este bonito Sudoku, completa las casillas vacias como se te pida :p*\n";
	pf("INSTRUCCIONES DE LLENADO: Se te pedir%c el valor para las coordenadas faltantes, que son las que tienen un 0\n\n",160);
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			pf("%i\t",sudoku[i][j]);
		}
		cout<<"\n\n";
	}
	
	pf("Para la posici%cn (1,5): ",162); cin>>x; sudoku[0][4]=x; 
	pf("Para la posici%cn (1,7): ",162); cin>>x; sudoku[0][6]=x; 
	pf("Para la posici%cn (2,2): ",162); cin>>x; sudoku[1][1]=x; 
	pf("Para la posici%cn (2,8): ",162); cin>>x; sudoku[1][7]=x; 
	pf("Para la posici%cn (3,7): ",162); cin>>x; sudoku[2][6]=x; 
	pf("Para la posici%cn (3,9): ",162); cin>>x; sudoku[2][8]=x; 
	pf("Para la posici%cn (4,3): ",162); cin>>x; sudoku[3][2]=x; 
	pf("Para la posici%cn (4,6): ",162); cin>>x; sudoku[3][5]=x; 
	pf("Para la posici%cn (5,5): ",162); cin>>x; sudoku[4][4]=x; 
	pf("Para la posici%cn (5,8): ",162); cin>>x; sudoku[4][7]=x; 
	pf("Para la posici%cn (6,3): ",162); cin>>x; sudoku[5][2]=x; 
	pf("Para la posici%cn (6,7): ",162); cin>>x; sudoku[5][6]=x; 
	pf("Para la posici%cn (7,7): ",162); cin>>x; sudoku[6][6]=x; 
	pf("Para la posici%cn (7,8): ",162); cin>>x; sudoku[6][7]=x; 
	pf("Para la posici%cn (8,2): ",162); cin>>x; sudoku[7][1]=x; 
	pf("Para la posici%cn (8,7): ",162); cin>>x; sudoku[7][6]=x; 
	pf("Para la posici%cn (9,3): ",162); cin>>x; sudoku[8][2]=x; 
	pf("Para la posici%cn (9,5): ",162); cin>>x; sudoku[8][4]=x; 
	
	pf("Su sudoku es...\n");
	
	if(sudoku[0][4]==7 && sudoku[0][6]==8 && sudoku[1][1]==8 && sudoku[1][7]==5 && sudoku[2][6]==2 && sudoku[2][8]==9 && sudoku[3][2]==2 && sudoku[3][5]==1 && sudoku[4][4]==4 && sudoku[4][7]==7 && sudoku[5][2]==1 && sudoku[5][6]==4 && sudoku[6][6]==9 && sudoku[6][7]==3 && sudoku[7][1]==4 && sudoku[7][6]==5 && sudoku[8][2]==3 && sudoku[8][4]==6)
	{
	  	pf("CORRECTOOOOO!!!!\n\n");
	  	for(int i=0;i<9;i++){
	 	for(int j=0;j<9;j++){
			pf("%i\t",sudoku[i][j]);
		}
		cout<<"\n\n";
	}
	system("PAUSE");
	}else{
	  	pf("Incorrecto, ni modo, no le sabes U_U\n\n",130);
	  }
	  
	system("PAUSE");
	return 0;
}
