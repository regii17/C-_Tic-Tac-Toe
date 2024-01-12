#include<iostream>
using namespace std;

void disp (char inp[3][3]){
	for(int a=0;a<3;a++){
		cout<<"---------------"<<endl;
	for(int b=0;b<3;b++){

			cout<<"| "<<inp[a][b]<<" |";
	}
	cout<<endl;
	}
	cout<<"---------------"<<endl;
}
void convert(char ch, int per, char cnv, char inp[3][3] ){
	for(int a=0;a<3;a++){
		for(int c=0;c<3;c++){
			if(per%2==0){
				ch='O';
				per++;
			}
			else{
				ch='X';
				per++;
			}
			if(cnv==inp[a][c]){
				inp[a][c]=ch;
			}
		}
	}
	
}
void terisi(char cnv, char inp[3][3]){
	char a=cnv;
	char b=inp[0][0];
	if (a==1){
		if (b=='X'||b=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
		else{
			cout<<"okk";
		}
	}
	else if (cnv==2){
		if(inp[0][1]=='X'||inp[0][1]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==3){
		if(inp[0][2]=='X'||inp[0][2]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==4){
		if(inp[1][0]=='X'||inp[1][0]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==5){
		if(inp[1][1]=='X'||inp[1][1]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==6){
		if(inp[1][2]=='X'||inp[1][2]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==7){
		if(inp[2][0]=='X'||inp[2][0]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==8){
		if(inp[2][1]=='X'||inp[2][1]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	else if (cnv==9){
		if(inp[2][2]=='X'||inp[2][2]=='O'){
			cout<<"Ini sudah terisi, silahkan masukkan ulang"<<endl;
		}
	}
	
}
//void winner(){
//	if(inp[0][0]=='X')
//}

int main(){
	char inp[3][3]={'1','2','3','4','5','6','7','8','9'};
	int ply = 1;
	char cnv;
	char ch;
	int per=1;
	


	for(int a=0;a<3;a++){
		for(int c=0;c<3;c++){
			

//			system("cls");
			disp (inp);
			

			if(ply%2==0){
				ply++;
				cout<<"input b : ";
				cin>>cnv;	
			}else{
				ply++;
				cout<<"input a : ";
				cin>>cnv;
				
			}
			terisi(cnv, inp);
			convert(ch, per, cnv, inp);
//			system("cls");
			disp (inp);
			
		}
		
	}
	
}
