		#include <stdio.h>
	                #include <stdlib.h>
	                #include <time.h>
	                void SJSCS ();//��void����������ʾ�����ͣ����߲���ȷ����ʱʹ��
		void RJJH ();// 
		int main(){
		RJJH();//�������� 
		return 0;
		}
		//�˻����� 
		void RJJH()
		{
		int ch;/*��int����ʽ�����ݣ����ڴ��д洢��ASCLL���� ��char ����һ���ģ�����ַ�%c��%d��������� 
				��ch���ַ�����������������*/ 
		do/*��do��ִ��ĳ����顣��do...while��ѭ����ִ�з�ʽ�롯whileѭ����ʮ�����ƣ�����������ִ��һ��
		ѭ���塣*/ 
		{
		SJSCS();//�������� 
		printf("������(1/2):/n");//
		scanf("%d",& ch);//�����ϻ�ȡһ�������� c	ǰ�������һ���ո� 
		}
		while(1==ch);
		}
		//��������� 
		void SJSCS()
		{
		srand(time(NULL));/*������������ĳ�ʼ��������ԭ��void srand(unsigned seed).
		�˴��÷���ʹ��1����ʼ�����ӣ���Ϊ�˷�ֹ��������ظ���ʹ��ϵͳʱ������ʼ������
		��ʹ��time���������ϵͳʱ�䣬���ķ���ֵΪ��00��00��00 GMT,January 1,1970�������������������
		Ȼ��time_t������ת��Ϊ��unsigned�����ٴ���srand����������srand((unsygned)time(&t)). */
		int i,j;
		int num;
		printf("���뷶Χ:/n");
		scanf("%d",&i);
		for(i=0;i<j;i++)
		{
		num=rand()%(j+1);
		//j����������˴�дj++ 
		}
		printf("\n");
		printf("���γ�ȡ�������Ϊ:%d\n",num);
		} 
