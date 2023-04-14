

COMMAND:
x /32xb $ecx

x → print
/32 → number of bytes
x → in hex format
b → single byte
$ecx address taken from ecx registrer


COMMAND:
b *0x80d3400 → this puts breakpoint at given memory address, you can find it in 'disas' lub using Ghidara disassembler

