/*
 @title:身份证验证程序
 @author:刘欢
 @date:2020.2.24
*/
//头文件
#include<stdio.h>
#include<stdlib.h>
//声明
int check(char id_1[18]);  //检查函数
//主函数
int main() {
    char id[18];
    int i=0;//计算系数
    int a, sum = 0;//记录系数和计算总值
    printf("请输入身份证号按回车键结束\n");//提示
    for (i; i < 18; i++) {
        scanf_s("%c",&id[i]);
    }
    if (check(id) == 1) {//如果符合打印提示不符合打印提示
        printf("身份证号正确！\n");
    }
    else {
        printf("身份证号错误！\n");
    }
    printf("按i查看详细信息,按其他任意键退出！\n");//还没开发

   
    
}
//检查函数
int check(char id_1[18]) {
    int i,sum=0;//系数 累计
    int id_2[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };//权重
    for (i = 0; i < 17; i++) {//按顺序乘权重之和
        sum += (id_1[i] - '0') * id_2[i];
    }
    sum = sum % 11;//和11取余
    sum = 12 - sum;//12减余数
    sum = sum % 11;//再与11取余
    if (sum == 10) {//最后的数和校验码向比较 如果是10则用罗马X表示
        if (id_1[17] == 'X' || id_1[17] == 'x') {
            return 1;
        }
        else
            return 0;
    }
    else {//如果不是10则是其他校验码
        if (sum == (id_1[17] - '0')) {
            return 1;
        }
        else {
            return 0;
        }
    }

}
//详细信息(还没写)
void information(char id[18]) {
    system("cls");

}