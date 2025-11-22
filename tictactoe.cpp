#include <bits/stdc++.h>
using namespace std;
void drawboard(char *spaces){
cout<<"     |     |     "<<'\n';
cout<<"  "<<spaces[0]<<"  |"<<"  "<<spaces[1]<<"  |"<<"  "<<spaces[2]<<'\n';
cout<<"     |     |     "<<'\n';
cout<<"------------------"<<'\n';
cout<<"     |     |     "<<'\n';
cout<<"  "<<spaces[3]<<"  |"<<"  "<<spaces[4]<<"  |"<<"  "<<spaces[5]<<'\n';
cout<<"     |     |     "<<'\n';
cout<<"------------------"<<'\n';
cout<<"     |     |     "<<'\n';
cout<<"  "<<spaces[6]<<"  |"<<"  "<<spaces[7]<<"  |"<<"  "<<spaces[8]<<'\n';
cout<<"     |     |     "<<'\n';
}
void playermove(char *spaces ,char player_turn,int num){
    bool executed=false;
    do{
cout<<"Enter Any Number From(1-9): ";
cin>>num;
num--;
if(spaces[num]==' '){
    spaces[num]=player_turn;
    executed=true;
}
else{
    cout<<"Already Taken"<<endl;
}
    }while(executed==false);
}
void compmove(char *spaces ,char comp_turn,int num){
    srand(time(NULL));
    bool executed=false;
    do{
    num=rand()%9;
    if(spaces[num]==' '){
        spaces[num]=comp_turn;
        executed=true;
    }
}while(executed==false);
}
bool checkwinner(char *spaces ,char player_turn,char comp_turn,bool &running,bool &done){
   
   
    
if((spaces[0]!=' ')&&(spaces[0]==spaces[1])&&(spaces[1]==spaces[2])&&(spaces[0]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
        return running=false;
}
else if((spaces[3]!=' ')&&(spaces[3]==spaces[4])&&(spaces[4]==spaces[5])&&(spaces[3]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[6]!=' ')&&(spaces[6]==spaces[7])&&(spaces[7]==spaces[8])&&(spaces[6]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
   return running=false;
}
else if((spaces[0]!=' ')&&(spaces[0]==spaces[3])&&(spaces[3]==spaces[6])&&(spaces[0]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
    return running=false;
}
else if((spaces[1]!=' ')&&(spaces[1]==spaces[4])&&(spaces[4]==spaces[7])&&(spaces[1]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[2]!=' ')&&(spaces[2]==spaces[5])&&(spaces[5]==spaces[8])&&(spaces[2]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
    return running=false;
}
else if((spaces[0]!=' ')&&(spaces[0]==spaces[4])&&(spaces[4]==spaces[8])&&(spaces[0]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
  return running=false;
}
else if((spaces[2]!=' ')&&(spaces[2]==spaces[4])&&(spaces[4]==spaces[6])&&(spaces[2]==player_turn)){
    cout<<"!!!YOU WON!!!"<<endl;
    done=true;
     return running=false;
}
if((spaces[0]!=' ')&&(spaces[0]==spaces[1])&&(spaces[1]==spaces[2])&&(spaces[0]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[3]!=' ')&&(spaces[3]==spaces[4])&&(spaces[4]==spaces[5])&&(spaces[3]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[6]!=' ')&&(spaces[6]==spaces[7])&&(spaces[7]==spaces[8])&&(spaces[6]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[0]!=' ')&&(spaces[0]==spaces[3])&&(spaces[3]==spaces[6])&&(spaces[0]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
    return running=false;
}
else if((spaces[1]!=' ')&&(spaces[1]==spaces[4])&&(spaces[4]==spaces[7])&&(spaces[1]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[2]!=' ')&&(spaces[2]==spaces[5])&&(spaces[5]==spaces[8])&&(spaces[2]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
     return running=false;
}
else if((spaces[0]!=' ')&&(spaces[0]==spaces[4])&&(spaces[4]==spaces[8])&&(spaces[0]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
    return running=false;
}
else if((spaces[2]!=' ')&&(spaces[2]==spaces[4])&&(spaces[4]==spaces[6])&&(spaces[2]==comp_turn)){
    cout<<"!!!YOU LOSE!!!"<<endl;
    done=true;
  return running=false;
}
return running=true;
    }
   



int main(){
char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char player_turn='X';
char comp_turn='O';
int num;
bool done=false;
int cnt=0;
bool running=true;

drawboard(spaces);
while(running==true && cnt!=9){
    
playermove(spaces,player_turn,num);
cnt++;
cout<<endl;
cout<<endl;
if(cnt<9){
compmove(spaces,comp_turn,num);
cnt++;
}
drawboard(spaces);

checkwinner(spaces,player_turn,comp_turn,running,done);
}
if(done==false){
    cout<<"!!!TIE!!!";
}




    

    return 0;
}