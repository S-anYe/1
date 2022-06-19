		#include <stdio.h>
	                #include <stdlib.h>
	                #include <time.h>
	                void SJSCS ();//‘void’函数，表示空类型，或者不明确类型时使用
		void RJJH ();// 
		int main(){
		RJJH();//函数调用 
		return 0;
		}
		//人机互交 
		void RJJH()
		{
		int ch;/*‘int’格式的数据，在内存中存储的ASCLL，跟 ‘char ’是一样的，输出字符%c，%d输出整数。 
				‘ch’字符变量，即整数变量*/ 
		do/*‘do’执行某代码块。’do...while‘循环，执行方式与’while循环‘十分相似，区别于它先执行一次
		循环体。*/ 
		{
		SJSCS();//函数调用 
		printf("继续吗(1/2):/n");//
		scanf("%d",& ch);//键盘上获取一个整数。 c	前面必须有一个空格 
		}
		while(1==ch);
		}
		//随机数产生 
		void SJSCS()
		{
		srand(time(NULL));/*随机数发生器的初始化函数。原型void srand(unsigned seed).
		此处用法：使用1来初始化种子，（为了防止随机数的重复，使用系统时间来初始化），
		即使用time函数来获得系统时间，它的返回值为从00：00：00 GMT,January 1,1970到现在所持续的秒读，
		然后将time_t型数据转化为（unsigned）型再传给srand函数，即：srand((unsygned)time(&t)). */
		int i,j;
		int num;
		printf("输入范围:/n");
		scanf("%d",&i);
		for(i=0;i<j;i++)
		{
		num=rand()%(j+1);
		//j个随机数，此处写j++ 
		}
		printf("\n");
		printf("本次抽取的随机数为:%d\n",num);
		} 
