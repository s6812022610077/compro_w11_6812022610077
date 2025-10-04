#include<stdio.h>

void inputScores(float arr[3][3]);
void printTable(float arr[3][3]);
void printAverage(float arr[3][3]);

int main(){
    float scores[3][3];
    inputScores(scores);
    printTable(scores);
    printAverage(scores);
    return 0;
}

void inputScores(float arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        printf("Enter scores for Student %d :\n", i+1);
        printf("   Math : ");
        scanf("%f", &arr[i][0]);
        printf("   Physics : ");
        scanf("%f", &arr[i][1]);
        printf("   Chemistry : ");
        scanf("%f", &arr[i][2]);
    }
}

void printTable(float arr[3][3]){
    printf("Score Table :\n");
    printf("Student    Math    Physics    Chemistry\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%-10d %-7.2f %-10.2f %-8.2f\n", i+1, arr[i][0], arr[i][1], arr[i][2]);
    }
    
}

void printAverage(float arr[3][3]){
    printf("Average per subject:\n");
    printf("Math : %.2f\n", (arr[0][0]+arr[1][0]+arr[2][0])/3.0);
    printf("Physics : %.2f\n", (arr[0][1]+arr[1][1]+arr[2][1])/3.0);
    printf("Chemistry : %.2f\n", (arr[0][2]+arr[1][2]+arr[2][2])/3.0);
}
/*
บรรทัดที่ 1 เรียกใช้ไลบารี stdio.h
บรรทัดที่ 3 เรียกใช้ฟังก์ชัน inputScores ไว้ก่อน main โดยมีการเรียกใช้ค่าตัวแปรชนิดทศนิยม ชื่อ arr[3][3] โดยกำหนดขนาดเป็น 3*3
บรรทัดที่ 4 เรียกใช้ฟังก์ชัน printTable โดยมีการเรียกใช้ค่าตัวแปรชนิดทศนิยม ชื่อ arr[3][3] โดยกำหนดขนาดเป็น 3*3
บรรทัดที่ 5 เรียกใช้ฟังก์ชัน printAverage โดยมีการเรียกใช้ค่าตัวแปรชนิดทศนิยม ชื่อ arr[3][3] โดยกำหนดขนาดเป็น 3*3
บรรทัดที่ 7 ประกาศฟังก์ชัน main()
บรรทัดที่ 8 ประกาศตัวแปรชนิดทศนิยมที่เป็นarray ชื่อ scores[3][3] มีขนาด 3*3;
บรรทัดที่ 9 เรียกใช้ฟังก์ชัน inputScores โดยมีการเรียกค่าจากตัวแปร scores
บรรทัดที่ 10 เรียกใช้ฟังก์ชัน printTable โดยมีการเรียกค่าจากตัวแปร scores
บรรทัดที่ 11 เรียกใช้ฟังก์ชัน printAverage โดยมีการเรียกค่าจากตัวแปร scores
บรรทัดที่ 12 คืนค่าโปรแกรมเป็น 0
บรรทัดที่ 15 สร้างฟังก์ชัน void inputScores(float arr[3][3]) คือจะมีการเรียกใช้ค่าที่เป็นทศนิยมและเป็นarray
บรรทัดที่ 16 คำสั่ง for loop ให้ i เริ่มต้นเท่ากับ 0 เงื่อนไขการวนซ้ำคือ i < 3 และค่า i เพิ่มขึ้นทีละหนึ่ง
บรรทัดที่ 18 แสดงผลหน้าจอ Enter scores for Student %d :\n โดยเรียกค่ามาจาก i+1
บรรทัดที่ 19 แสดงผลหน้าจอ    Math : 
บรรทัดที่ 20 เก็บค่าเป็นชนิดทศนิยมในตัวแปร arr[i][0]
บรรทัดที่ 21 แสดงผลหน้าจอ    Physics : 
บรรทัดที่ 22 เก็บค่าเป็นชนิดทศนิยมในตัวแปร arr[i][1]
บรรทัดที่ 23 แสดงผลหน้าจอ    Chemistry : 
บรรทัดที่ 24 เก็บค่าเป็นชนิดทศนิยมในตัวแปร arr[i][2]
บรรทัดที่ 28 สร้างฟังก์ชัน printTable โดยจะมีการเรียกใช้ค่าตัวแปร arr[3][3]
บรรทัดที่ 29 แสดงผลหน้าจอ Score Table :
บรรทัดที่ 30 แสดงผลหน้าจอ Student    Math    Physics    Chemistry\n
บรรทัดที่ 31 คำสั่ง for loop โดยให้ i เริ่มต้น = 0 เงื่อนไขการวนซ้ำ คือ i น้อยกว่า 3 และให้ค่า i เพิ่มขึ้นทีละ 1
บรรทัดที่ 33 แสดงผลหน้าจอ %-10d %-7.2f %-10.2f %-8.2f\n โดยเรียกค่ามาจากตัวแปร i+1, arr[i][0], arr[i][1], arr[i][2] ตามลำดับ
บรรทัดที่ 38 สร้างฟังก์ชัน printAverage โดยมีการเรียกใช้ค่าตัวแปร arr[3][3]
บรรทัดที่ 39 แสดงผลหน้าจอ Average per subject:\n
บรรทัดที่ 40 แสดงผลหน้าจอ Math : %.2f\n โดยเรียกค่ามาจากตัวแปร (arr[0][0]+arr[1][0]+arr[2][0])/3.0
บรรทัดที่ 41 แสดงผลหน้าจอ Physics : %.2f\n โดยเรียกค่ามาจากตัวแปร (arr[0][1]+arr[1][1]+arr[2][1])/3.0
บรรทัดที่ 42 แสดงผลหน้าจอ Chemistry : %.2f\n โดยเรียกค่ามาจากตัวแปร (arr[0][2]+arr[1][2]+arr[2][2])/3.0
*/