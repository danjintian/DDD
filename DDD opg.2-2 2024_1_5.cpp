#include <bits/stdc++.h>
using namespace std; 
int n,sum=1;
int x=0;
int y=0;
int a[10000]={0};
vector<vector<int>> b(x+1,vector<int>(y+1,1));

int cmp(int x,int y){
    return x>y;
}

int main()
{
    cin >> n;
    int flag=1;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    b.resize(a[0]+1, std::vector<int>(a[0]+1, 0));
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
                    if(b[x][y+1]==1){
                        y++;
                        continue;
                    }    
                        b[x][y+1]=1;
                        y++;
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
                    if(b[x][y-1]==1){
                        y--;
                        continue;
                    }    
                        b[x][y-1]=1;
                        y--;
                        sum++;
                        flag=1;
                    
                }
            }
    }
    cout << sum <<endl;
    /*
  for (const auto& row : b) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }*/
    return 0;
}
