#include<stdio.h>
#include<stdbool.h>
int matrix[4][4]={
    {0,1,0,0},
    {0,0,0,0},
    {0,1,0,0},
    {0,1,0,0}
};
bool knows (int i,int j){
    return matrix[i][j]== 1;
}
int findthecelebrity(int n){
    int celebrity=-1; 
    for(int i=0;i<n;i++){
         bool knows_anyone=false;
     bool everyone_knows=true;

        for(int j=0;j<n;j++){
            if(knows(i,j)){
                knows_anyone=true;
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(i!=j && !knows(j,i)) {
                everyone_knows=false;
                break;
            }
        } 
        if (!knows_anyone&&everyone_knows){
                celebrity=i;
                break;
        }
    }
    return celebrity;
}
int main(){
 int n=4;
 int celebrity=findthecelebrity(n);
 if(celebrity==-1){
    printf("celebrity not found!");
 }else{
    printf("celebrity found at index : %d\n", celebrity);
 }

}