#include <bits/stdc++.h>
int n,sum=1;
int a[10000]={0};
//int b[10000][10000]={0};
using namespace std; 
int rows=10000;
int columns=10000;
int initialvalue=0;
vector<vector<int>> b(rows,vector<int>(columns,initialvalue));
int main()
{
    cin >> n;
    int flag=1;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x=5000;
    int y=5000;
    b[x][y]=1;
    for(int num=0;num<n;num++){
            if(flag==1){
                for(int i=1;i<=a[num];i++){
                    if(b[x+1][y]==1){
                        x++;
                        continue;
                    }    
                        b[x+1][y]=1;
                        x++;
                        sum++;
                        flag=2;
                    
                }    
            }else if(flag==2){
                for(int i=1;i<=a[num];i++){
                    if(b[x][y-1]==1){
                        y--;
                        continue;
                    }    
                        b[x][y-1]=1;
                        y--;
                        sum++;
                        flag=3;
                    
                }
            }else if(flag==3){
                for(int i=1;i<=a[num];i++){
                    if(b[x-1][y]==1){
                        x--;
                        continue;
                    }    
                        b[x-1][y]=1;
                        x--;
                        sum++;
                        flag=4;
                    
                }
            }else if(flag==4){
                for(int i=1;i<=a[num];i++){
                    if(b[x][y+1]==1){
                        y++;
                        continue;
                    }    
                        b[x][y+1]=1;
                        y++;
                        sum++;
                        flag=1;
                    
                }
            }
    }
    cout << sum;
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }*/
    return 0;
}
