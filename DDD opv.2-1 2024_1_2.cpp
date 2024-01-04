#include <bits/stdc++.h>
using namespace std;
int n,num=0,sum=0,sum1=0;
int b[100]={0};
string a[100][100]={"."};
int cmp(int x,int y){
    return x>y;
}
int up(int i){
    sum1=0;
    for(int j=b[num];j>0;j--){
        a[j][n-b[num]]="x";
        sum1++;
    }
    return sum1;
}
int down(int i){
    sum1=0;
    for(int j=0;j<b[num];j++){
        a[j][n-b[num]]="x";
        sum1++;
    }
    return sum1;
}
int left(int i){
    sum1=0;
    for(int j=b[num];j>0;j--){
        a[n-b[num]][j]="x";
        sum1++;
    }
    return sum1;
}
int right(int i){
    sum1=0;
    for(int j=0;j<b[num];j++){
        a[n-b[num]][j]="x";
        sum1++;
    }
    return sum1;
}
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(b,b+n,cmp);
    for(int i=0;i<n;i++){
        if(i==b[num]){
            sum+=left(i);
        }else if(i==b[num+1]){
            sum+=down(i);
        }else if(i==b[num+2]){
            sum+=right(i);
        }else if(i==b[num+3]){
            sum+=up(i);
        }else{
            num++;
        }
    }
    cout << sum;
    return 0;
}
