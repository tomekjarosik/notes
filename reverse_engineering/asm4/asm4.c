#include <stdio.h>

int asm4(char* s);

void main()
{
  int result = asm4("picoCTF_724a2");
  printf("0x%x\n", result);
}
