#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[20],lis[20],LIS[20],m=0,k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        lis[i]=1;
    }
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if((a[i]>a[j]) && (lis[j]+1>lis[i])){
                lis[i]=lis[j]+1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(m<lis[i]){
            m=lis[i];
        }
    }
    cout << m << endl;
    k=m;
    for(i=n-1;i>=0;i--){
        if(lis[i]==m){
            LIS[m-1]=a[i];
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
