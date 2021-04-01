#include<stdio.h>
void main() {
 int i, s = 1;
 for (i = 0;i < 9;i++)//因为到第十天还剩一个，所以循环9次
 {
  s = (s + 1) * 2;//倒序求出每天的数量
 }
 printf("原有%d个桃子", s);//输出结果
}
