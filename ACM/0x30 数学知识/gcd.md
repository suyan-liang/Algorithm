#### gcd

```cpp
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
```





#### lcm

a*b/最大公约数

```cpp
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
```

