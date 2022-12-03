/*
# 【深基3.例8】三位数排序

## 题目描述

给出三个整数 $a,b,c(0\le a,b,c \le 100)$，要求把这三位整数从小到大排序。

## 输入格式

输入三个整数 $a,b,c$，以空格隔开。

## 输出格式

输出一行，三个整数，表示从小到大排序后的结果。

## 样例 #1

### 样例输入 #1

```
1 14 5
```

### 样例输出 #1

```
1 5 14
```

## 样例 #2

### 样例输入 #2

```
2 2 2
```

### 样例输出 #2

```
2 2 2
```
*/

#include <iostream>
using namespace std;
int main(){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)swap(a,b);//冒泡排序详见：https://zh.wikipedia.org/wiki/冒泡排序
        if(b>c)swap(b,c);
        if(a>b)swap(a,b);
        cout<<a<<' '<<b<<' '<<c;
       //不需要return 0！
}
