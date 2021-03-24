## pair

1. 作用类似于`map`，就是将两个数据合成一体
2. 在`#include<utility>`头文件



#### 常见用法

#### 1.创建和初始化

```cpp
pair<int,string> p;

pair<int,string> p(1,"ha");

pair<int,string> p(p1);

pair<int,string> p;
p=make_pair(1,"haha");

typedef pair<int,string> Author;
Author p(1,"haha");
Author q(2,"heihei");

q=p; //赋值
```

#### 2.访问

```cpp
pair<int,string> p(1,"haha");
cout<< p.first<< " "<<p.second<<endl;
```

