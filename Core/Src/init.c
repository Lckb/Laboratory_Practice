 #include<stdint.h>
// UPDATES TEST TEXT CHANGES
void GPIO_Init(void){
    *(uint32_t*)(0x40023800UL + 0x30UL) |= 0x02;
    *(uint32_t*)(0x40020400UL + 0x00UL) |= 0x4000;
    *(uint32_t*)(0x40020400UL + 0x08UL) |= 0x4000;
    *(uint32_t*)(0x40020400UL + 0x0CUL) |= 0x00;
    if((*(uint32_t*)(0x40020400UL + 0x10UL) & 0x80UL) != 0);
    *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x800000; // bit reset
    *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x80; // bit set
}