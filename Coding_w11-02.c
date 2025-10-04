#include<stdio.h>

float average(int a, int b, int c);

int main(){
    int Math, Physics, Chemistry;
    printf("Enter Math score : ");
    scanf("%d", &Math);
    printf("Enter Physics score : ");
    scanf("%d", &Physics);
    printf("Enter Chemistry score : ");
    scanf("%d", &Chemistry);

    float result = average(Math, Physics, Chemistry);
    printf("\nMath = %d\nPhysics = %d\nChemistry = %d\nAverage = %.2f", Math, Physics, Chemistry, result);

}

float average(int a, int b, int c){
    float av;
    av = (a+b+c)/3.0;
    return av;
}
/*
บรรทัดที่ 1 เรีบกใช้ไลบารี stdio.h
บรรทัดที่ 3 ประกาศฟังก์ชัน float average(int a, int b, int c); ไว้ก่อน main()
บรรทัดที่ 5 ประกาศฟังก์ชัน main()
บรรทัดที่ 6 ประกาศตัวแปรชนิดจำนวนเต็มชื่อ Math, Physics, Chemistry
บรรทัดที่ 7 แสดงผลหน้าจอ Enter Math score :
บรรทัดที่ 8 เก็บค่าชนิดจำนวนเต็มลงในตัวแปร Math
บรรทัดที่ 9 แสดงผลหน้าจอ Enter Physics score :
บรรทัดที่ 10 เก็บค่าชนิดจำนวนเต็มลงในตัวแปร Physics
บรรทัดที่ 11 แสดงผลหน้าจอ Enter Chemistry score :
บรรทัดที่ 12 เก็บค่าชนิดจำนวนเต็มลงในตัวแปร Chemistry
บรรทัดที่ 14 สร้างตัวแปรชนิดทศนิยม ชื่อ result โดยให้มีค่าเท่ากับ ฟังก์ชัน average โดยดึงค่าจาก Math, Physics, Chemistry ที่เรียกเก็บค่ามา
บรรทัดที่ 15 แสดงผลหน้าจอ \nMath = %d\nPhysics = %d\nChemistry = %d\nAverage = %.2f โดยเรียกค่ามาจากตัวแปร Math, Physics, Chemistry, result และแสดงค่าเป็นจำนวนเต็ม จำนวนเต็ม จำนวนเต็ม ทศนิยมตามลำดับ
บรรทัดที่ 19 สร้างฟังก์ชัน float average(int a, int b, int c) โดยมีการเรียกใช้ค่าสามตัวแปรเป็นชนิดจำนวนเต็ม
บรรทัดที่ 20 สร้างตัวแปรภายในฟังก์ชันชนิดทศนิยม ชื่อ av
บรรทัดที่ 21 กำหนดให้ av = (a+b+c)/3
บรรทัดที่ 22 คืนค่า av
*/