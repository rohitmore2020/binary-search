#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the array elements \n");
    scanf("%d",&n);
    int num;
    int found=0;
printf ("please enter in sorted manner\n");
    for (int i=0;i<n;i++){
        printf("enter the array number at position %d\t",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("enter the number to search\n");
    scanf("%d",&num);
      
    int high=n;
    int low =0;
    int mid =( low +high)/2;

while(low<=high){

    if(a[mid]==num){
        printf("%d number is at %d position\n",num,mid+1);
        found++;
        break;
    }
    else if ( a[mid]> num){
        high = mid-1;
        mid = (high +low) /2;
    }
    else if(a[mid] < num ){
        low = mid +1;
        mid =(low +high )/2;
    }
}
if(found == 0){
    printf("please enter the correct number\n");
}
return 0;
}