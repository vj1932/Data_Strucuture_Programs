#include<stdio.h>
void main(){
    int i,n,j,swap = 0;
    printf("Enter Size");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
            for(j=i+1;j<n;++j)
            {
                if(a[i] > a[j])
                {
                   swap = a[i];
                   a[i] = a[j];
                   a[j] = swap;
                }
            }
    }
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }

}
