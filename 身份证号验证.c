/*
 @title:���֤��֤����
 @author:����
 @date:2020.2.24
*/
//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
//����
int check(char id_1[18]);  //��麯��
//������
int main() {
    char id[18];
    int i=0;//����ϵ��
    int a, sum = 0;//��¼ϵ���ͼ�����ֵ
    printf("���������֤�Ű��س�������\n");//��ʾ
    for (i; i < 18; i++) {
        scanf_s("%c",&id[i]);
    }
    if (check(id) == 1) {//������ϴ�ӡ��ʾ�����ϴ�ӡ��ʾ
        printf("���֤����ȷ��\n");
    }
    else {
        printf("���֤�Ŵ���\n");
    }
    printf("��i�鿴��ϸ��Ϣ,������������˳���\n");//��û����

   
    
}
//��麯��
int check(char id_1[18]) {
    int i,sum=0;//ϵ�� �ۼ�
    int id_2[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };//Ȩ��
    for (i = 0; i < 17; i++) {//��˳���Ȩ��֮��
        sum += (id_1[i] - '0') * id_2[i];
    }
    sum = sum % 11;//��11ȡ��
    sum = 12 - sum;//12������
    sum = sum % 11;//����11ȡ��
    if (sum == 10) {//��������У������Ƚ� �����10��������X��ʾ
        if (id_1[17] == 'X' || id_1[17] == 'x') {
            return 1;
        }
        else
            return 0;
    }
    else {//�������10��������У����
        if (sum == (id_1[17] - '0')) {
            return 1;
        }
        else {
            return 0;
        }
    }

}
//��ϸ��Ϣ(��ûд)
void information(char id[18]) {
    system("cls");

}