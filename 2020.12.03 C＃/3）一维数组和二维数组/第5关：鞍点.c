#include <stdio.h>
const int N=11;
int AnDian(int a[N][N],int n,int m,int *r,int *c);
int main(void)
{
 int a[N][N],r,c; 
 int n,m;
 
 scanf("%d %d",&n,&m);
 
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=m;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 int res=AnDian(a,n,m,&r,&c);
 if(res)
 {
  printf("Array[%d][%d]=",r-1,c-1);
  printf("%d",a[r][c]);
 }
 else
 {
  printf("None");
 }
 return 0;
}
int AnDian(int a[N][N],int n,int m,int *r,int *c)
{
 int flag=0; 
 for(int row=1;row<=n;row++)
 {
  int col=1;
  int j;
  for(j=2;j<=m;j++)
  {
   if(a[row][j]>a[row][col])
   {
    col=j;
   }
  }
  for(j=1;j<=n;j++)
  {
   if(a[j][col]<a[row][col])
   {
    break;
   }
  }
  if(j==n+1)
  {
   flag=1;
   *r=row;
   *c=col; 
   break;
  }
 } 
 return flag; 
}
