/*
# Anton and Digits

## 题面翻译

Anton最近找到了一个装着一些数字的盒子，其中有k2个2，k3个3，k5个5,k6个6；

Anton最喜欢的两个数字是32和256，他想用盒子里的数字来组成他喜欢的数字，并且他想让组成的这些数字之和最大，请帮助他完成这个问题

每个数字都不能重复使用，意思就是组成的数字所包含的2，3，5，6数量不能多于总共2，3，5，6所有的数量，当然了，没有参与的数字并不算入总数内

原文：Recently Anton found a box with digits in his room. There are k_{2} k 
2
​	  digits 2 2 , k_{3} k 
3
​	  digits 3 3 , k_{5} k 
5
​	  digits 5 5 and k_{6} k 
6
​	  digits 6 6 .

Anton's favorite integers are 32 32 and 256 256 . He decided to compose this integers from digits he has. He wants to make the sum of these integers as large as possible. Help him solve this task!

Each digit can be used no more than once, i.e. the composed integers should contain no more than k_{2} k 
2
​	  digits 2 2 , k_{3} k 
3
​	  digits 3 3 and so on. Of course, unused digits are not counted in the sum.

## 题目描述

Recently Anton found a box with digits in his room. There are $ k_{2} $ digits $ 2 $ , $ k_{3} $ digits $ 3 $ , $ k_{5} $ digits $ 5 $ and $ k_{6} $ digits $ 6 $ .

Anton's favorite integers are $ 32 $ and $ 256 $ . He decided to compose this integers from digits he has. He wants to make the sum of these integers as large as possible. Help him solve this task!

Each digit can be used no more than once, i.e. the composed integers should contain no more than $ k_{2} $ digits $ 2 $ , $ k_{3} $ digits $ 3 $ and so on. Of course, unused digits are not counted in the sum.

## 输入格式

The only line of the input contains four integers $ k_{2} $ , $ k_{3} $ , $ k_{5} $ and $ k_{6} $ — the number of digits $ 2 $ , $ 3 $ , $ 5 $ and $ 6 $ respectively ( $ 0<=k_{2},k_{3},k_{5},k_{6}<=5·10^{6} $ ).

## 输出格式

Print one integer — maximum possible sum of Anton's favorite integers that can be composed using digits from the box.

## 样例 #1

### 样例输入 #1

```
5 1 3 4
```

### 样例输出 #1

```
800
```

## 样例 #2

### 样例输入 #2

```
1 1 1 1
```

### 样例输出 #2

```
256
```

## 提示

In the first sample, there are five digits $ 2 $ , one digit $ 3 $ , three digits $ 5 $ and four digits $ 6 $ . Anton can compose three integers $ 256 $ and one integer $ 32 $ to achieve the value $ 256+256+256+32=800 $ . Note, that there is one unused integer $ 2 $ and one unused integer $ 6 $ . They are not counted in the answer.

In the second sample, the optimal answer is to create on integer $ 256 $ , thus the answer is $ 256 $ .
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int number2,number3,number5,number6,answer;
int main()
{
    cin>>number2>>number3>>number5>>number6>>answer;
    int a=min(number2,number5),b=min(a,number6);
    answer+=256*b;
    answer+=32*min(number2-b,number3);
    cout<<answer<<endl;
}
