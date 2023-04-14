
Install gcc 32-bit:
```
sudo apt-get install gcc-multilib
```

Then, compile assembler and c++, and link them:

```
gcc -m32 -c asm4.s -o asm4.o
gcc -m32 -c asm4.c -o asm4main.o
gcc -m32 asm4main.o asm4.o
```
Now, run produced executable:
```
./a.out
```