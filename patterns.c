print(1112,3222,3334)

#include <stdio.h>
int main() {
  int n,count=1;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      if(i%2==0){
      for(int j=0;j<n;j++){
         printf("%d",count);}
         printf("%d\n",++count);}
      else{
          printf("%d",++count);
          count--;
          for(int j=0;j<n;j++){
              printf("%d",count);}
              count++;
              printf("\n");
          }
      }
      return 0;
}
