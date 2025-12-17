# Cours du 17 décembre

- [ ] Pointeurs
  - [ ] Tableaux
  - [ ] Le passage par adresse
- [ ] Fonctions

```basic

10 LET C
15 LET T
20 LET A = 1
30 LET B = 1
40  
50 DO
60 C = A + B
70 T = A
80 A = B
90 B = T
95 WHILE T < 500
100 SUB FIB

200 END SUB

400 GOSUB FIB
```

## Pile mémoire

```c
char stack[8192];
int stack_pointer = 0;

stack[stack_pointer] = 42;
stack_pointer++;

int a;
int b;
int c; 

void add() {
    c = a + b;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    int ma_variable = add(5, 3);
}
```


```

0x0000001    push    rbp
0x0000002        mov     rbp, rsp
        mov     dword ptr [rbp - 4], edi
        mov     dword ptr [rbp - 8], esi
        mov     eax, dword ptr [rbp - 4]
        add     eax, dword ptr [rbp - 8]
        pop     rbp
        ret
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     edi, 5
        mov     esi, 3
        call    0x0000001
        mov     dword ptr [rbp - 4], eax
        xor     eax, eax
        add     rsp, 16
        pop     rbp
        ret