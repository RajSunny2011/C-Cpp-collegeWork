#include <stdio.h>

void Merge(int a[], int p, int q,int r){
    int n1=q-p+1; //left subarray
    int n2=r-q;
    int l[n1],m[n2];
    int i=0,j=0;
    int k=p; //for merging into initial array
    for(i=0;i<n1;i++){
        l[i]=a[p+1];
    }
    for(j=0;j<n2;j++){
        m[j]=a[q+1+j];
    }
    j = 0;
    i = 0;
    while(i<n1 && j<n2){
        if(l[i]<=m[j]){
            a[k]=l[i];
            i++;
        }
        else if(m[j]<=l[i]){
            a[k]=m[j];
            j++;
        }
        k++;   
    }
    while(i<n1){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=m[j];
        j++;
        k++;
    }
}

void Msort(int a[],int p,int r){
    int q = (p + (r - p))/2;
    if(p>r){
        return;}
    
    else if(p<r){
    Msort(a,p,q);
    Msort(a,q+1,r);
    Merge(a,p,q,r);}
}

int main(){
    int i,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Msort(a,0,n-1);
    printf("The array is:\n ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}