/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>

int main() {
    char chars[4];
    
    printf("กรอกค่า 4 ตัวอักขระ: ");
    scanf("%c %c %c %c", &chars[0], &chars[1], &chars[2], &chars[3]);
    
    printf("ผลลัพธ์: %c %c %c %c\n", chars[3], chars[2], chars[1], chars[0]);
    
    return 0;
}