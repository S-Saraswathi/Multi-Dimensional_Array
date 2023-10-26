//PRN: 22070123102
//Exp-9
//Program-1

#include<iostream>
using namespace std;

int main() {
    int temp[3][3], i, j, k, l;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter element-("<<i<<j<<"): ";
            cin>>temp[i][j];
        }
    }

    for(k=0;k<3;k++) {
        for(l=0;l<3;l++) {
            cout<<temp[k][l];
            cout<<"  ";
        }
        cout<<endl;
    }
}
/*OUTPUT
PS D:\Sem-3> cd "d:\Sem-3\Exp9\" ; if ($?) { g++ exp9_1.cpp -o exp9_1 } ; if ($?) { .\exp9_1 }
Enter element-(00): 4
Enter element-(01): 7
Enter element-(02): 1
Enter element-(10): 8
Enter element-(11): 4
Enter element-(12): 6
Enter element-(20): 0
Enter element-(21): 7
Enter element-(22): 2
4  7  1  
8  4  6  
0  7  2   */
