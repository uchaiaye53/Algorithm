#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,ary[20],lis[20],m=0,LIS[20];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ary[i];
    }
    for(i=0;i<n;i++){
        lis[i]=1;
    }
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if((ary[i]>ary[j]) && (ary[i]%2!=0) && (lis[j]+1>lis[i])){
                lis[i]=lis[j]+1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(m<lis[i]){
            m=lis[i];
        }
    }
    int k =m;
    cout << k << " " << endl;

    for(i=n-1;i>=0;i--){
        if(lis[i]==m){
                LIS[m-1]=ary[i];
                m--;
        }
        if(m==0){
            break;
        }
    }
    for(i=0;i<k;i++){
            printf("%d ",LIS[i]);
    }
    return 0;
}

