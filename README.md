# Bit Hacks
A compilation of bit hacks for computation.
> C legacy

## List

- [Swapping integers](#Swap)
- [Finding min of 2 integers](#Min)
- [Fast modulo](#Mod)
- [Check if pow of 2](#Pow2)
- [Check if number is odd/even](#OddEven)
- [Set ith bit](#Setting ith Bit)
- [Unset ith bit](#Unsetting ith Bit)

## Swap  
 To swap integers x and y.
```cpp
x = x ^ y;
y = x ^ y;
x = x ^ y;
```

## Min
To find miniumum of integers x and y.
```cpp
min = y ^ ((x ^ y) & -(x < y));
```

## Mod
To compute (x + y) mod n, given 0 <= x < n & 0 <= y < n.
```cpp
res = z - (n & -(z >= n));
```
## Pow2
To check if x is pow of 2.
```cpp
if(!(x & (x - 1))) cout << "Pow of 2\n";
```

## OddEven
To check if x is odd/even.
```cpp
if(x&1) cout << "Odd!\n";
else cout << "Even!\n";
```

## Setting ith Bit
```cpp
x = (1<<i) | x;
```

## Unsetting a Bit
```cpp
x = !(1<<i) & x;
```
