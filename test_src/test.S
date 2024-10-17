.org 0x0
.global _start
_start:
    ori      x1, x1, 4   #x1=4
    ori      x2, x2, 10  #x2=10
    sub      x3, x1, x2  #x3=-6
    add      x4, x3, x1  #x4=-2
    or       x5, x2, x1  #x5=14
    sll      x6, x3, x1  #x6=-98
    slt      x7, x2, x4  #x7=0
    sltu     x8, x2, x4  #x8=1
    xor      x9, x5, x1  #x9=10
    srl      x10, x3, x1 #0x0ffff
    sra      x11, x3, x1 #0xffff
    and      x12, x5, x1 #x12=4