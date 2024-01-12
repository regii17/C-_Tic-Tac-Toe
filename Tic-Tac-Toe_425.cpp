#include<iostream>
#include <conio.h>

using namespace std;

void add(char a[3][3], char inp, char ch) {
    int num = inp - 49;
    int row = num / 3;
    int col = num % 3;
    a[row][col] = ch;
}

void disp(char a[3][3], char num[3][3]) {
	cout<<"TIC TAC TOE GAME BY REGIANA HERMAWAN - 2338018425\n";
	cout<<"=================================================\n";
    cout << "\nTekan esc untuk keluar dari game\n\n";
    for (int i = 0; i < 3; i++) {
        cout << "-------------\n";
        for (int j = 0; j < 3; j++) {
        	if (a[i][j] == 'a'){
                cout << "| "<<num[i][j]<< " ";
        	}else
                cout << "| " << a[i][j] << " ";
       		}
        cout << "|\n";
    }
    cout << "-------------\n";
}

int check(char a[3][3], char inp) {
    int num = inp - 48;
    
    if (num <= 0 || num >= 10)
        return 0;
    num--;
    
    int row = num / 3;
    int col = num % 3;
    if (a[row][col] == 'a')
        return 1;
    else
        return 0;
}

char gameover(char a[3][3]) {
    char winner = 'a';
    
    if (a[0][0] == a[0][1] && a[0][0] == a[0][2] && a[0][0] != 'a')
        	winner = a[0][0];
    else if (a[1][0] == a[1][1] && a[1][0] == a[1][2] && a[1][0] != 'a')
       		 winner = a[1][0];
    else if (a[2][0] == a[2][1] && a[2][0] == a[2][2] && a[2][0] != 'a')
       		 winner = a[2][0];
    else if (a[0][0] == a[1][0] && a[0][0] == a[2][0] && a[0][0] != 'a')
       		 winner = a[1][0];
    else if (a[0][1] == a[1][1] && a[0][1] == a[2][1] && a[0][1] != 'a')
       		 winner = a[1][0];
    else if (a[0][2] == a[1][2] && a[0][2] == a[2][2] && a[0][2] != 'a')
       		 winner = a[1][0];
    else if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] != 'a')
       		 winner = a[0][0];
    else if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] != 'a')
       		 winner = a[0][2];

    return winner;
}

int draw(char a[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (a[i][j] == 'a')
                return 0;
    return 1;
}



int main(){
	string player1, player2;
	char num[3][3]={'1','2','3','4','5','6','7','8','9'}, a[3][3], turn[2] = {'X', 'O'}, ch = 'X', inp, winner, res;
    int count = 0,re=1;
    
    
	cout<<"TIC TAC TOE GAME BY REGIANA HERMAWAN - 2338018425\n";
	cout<<"=================================================\n";

	cout<<"Masukkan nama player 1 : ";
		getline(cin,player1);
	cout<<"Masukkan nama player 2 : ";
		getline(cin,player2);
	
	cout<<player1 <<" adalah X dan "<<player2<<" adalah O\n";
   	 cout << "\nTic Tac Toe\nTekan tombol apa saja untuk melajutkan";
    getch();
	system("cls");

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = 'a';
            
    system("cls");
    while (1) {
        disp(a,num);
        if(re%2==0){
        	cout << "\n" << player2 << " Memasukkan input\n";
        	re++;
		}else{
			cout << "\n" << player1 << " Memasukkan input\n";	
			re++;
		}

        inp = getch();
        if (inp == 27)
            break;
    
    	system("cls");

        if (inp <= 48 || inp >= 58 || !check(a, inp)) {
            cout << "\n" << ch << "Sudah terisi\n";
            cout << "MASUKKAN ULANG!!\n\n";
        } else {
            add(a, inp, ch);
            winner = gameover(a);
            
            if (winner == 'a') {
                if (draw(a)) {
                    cout << "\nMatch Drawn!\n";
                    break;
                }
                ch = turn[(++count) % 2];
            } else {
            	if(winner=='X'){
					cout << "\n" << player1 << " Menang!\n";
               		break;
				}
				else if(winner=='O'){
					cout << "\n" << player2 << " Menang!\n";
               		break;
				}
                
            }
        }
    }

    getch();
    system("cls");
    cout << "\nWant to play more?";


	

	
}
