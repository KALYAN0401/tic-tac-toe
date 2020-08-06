#include<iostream>
using namespace std;
 char mat[3][3]={'1','2','3','4','5','6','7','8','9'};
 char player='X';

void draw(){
    cout<<"tic tac toe game"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
   

}
void input(){
    int a;
    cout<<"plz enter the number"<<endl;
    cin>>a;
    if(a==1){
        mat[0][0]=player;
    }
    else if(a==2){
        mat[0][1]=player;
    }
    else if(a==3){
        mat[0][2]=player;
    }
    else if(a==4){
        mat[1][0]=player;
    }
    else if(a==5){
        mat[1][1]=player;
    }
    else if(a==6){
        mat[1][2]=player;
    }
    else if(a==7){
        mat[2][0]=player;
    }
    else if(a==8){
        mat[2][1]=player;
    }
    else if(a==9){
        mat[2][2]=player;
    }

}
void sp(){
    if(player=='X'){
        player='O';
    }
    else
    {
        player='X';
    }

    
   
}
char win(){
    if(mat[0][0]=='X'&&mat[0][1]=='X'&&mat[0][2]=='X')
    return 'X';
     if(mat[1][0]=='X'&&mat[1][1]=='X'&&mat[1][2]=='X')
    return 'X';
     if(mat[2][0]=='X'&&mat[2][1]=='X'&&mat[2][2]=='X')
    return 'X';
     if(mat[0][0]=='X'&&mat[1][0]=='X'&&mat[2][0]=='X')
    return 'X';
     if(mat[0][1]=='X'&&mat[1][1]=='X'&&mat[2][1]=='X')
    return 'X';
     if(mat[0][2]=='X'&&mat[1][2]=='X'&&mat[2][2]=='X')
    return 'X';
     if(mat[0][0]=='X'&&mat[1][1]=='X'&&mat[2][2]=='X')
    return 'X';
    if(mat[0][2]=='X'&&mat[1][1]=='X'&&mat[2][0]=='X')
    return 'X';



    /*second player */
     if(mat[0][0]=='O'&&mat[0][1]=='O'&&mat[0][2]=='O')
    return 'O';
     if(mat[1][0]=='O'&&mat[1][1]=='O'&&mat[1][2]=='O')
    return 'O';
     if(mat[2][0]=='O'&&mat[2][1]=='O'&&mat[2][2]=='O')
    return 'O';
     if(mat[0][0]=='O'&&mat[1][0]=='O'&&mat[2][0]=='O')
    return 'O';
     if(mat[0][1]=='O'&&mat[1][1]=='O'&&mat[2][1]=='O')
    return 'O';
     if(mat[0][2]=='O'&&mat[1][2]=='O'&&mat[2][2]=='O')
    return 'O';
     if(mat[0][0]=='O'&&mat[1][1]=='O'&&mat[2][2]=='O')
    return 'O';
    if(mat[0][2]=='O'&&mat[1][1]=='O'&&mat[2][0]=='O')
    return 'O';

    return '/';

}

int main(){
    draw();
    while(1){
        input();
        if(win()=='X'){
            cout<<"x wins!";
            break;
        }else if(win()=='O'){
            cout<<"O wins!";
            break;
        }
        draw();
        sp();
    }
    system("pause");

}