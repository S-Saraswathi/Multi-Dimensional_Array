#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1, r2, c2;
    int ar[r1][c1], t[r2][c2];
    cout<<"Enter number of rows & column: ";
    cin>>r1>>c1;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Enter element-"<<i+1<<j+1<<":";
            cin>>ar[i][j];
        }
    }
    r2=c1;
    c2=r1;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            t[i][j]=ar[j][i];
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
}