// C_Melody.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
//#include <windows.h>  //linux不可
//#include <conio.h>
#include <string>
using namespace std;
//---------声明区域---------
void Melody();
void _ldouble();
int _ver();
int _download();
void _dir();
void _install();
void _cls();
void _testcmd();
void _badapple();
void _auto();
void _badappleform();
void _help();
void _timer(unsigned int Delay); /*延时器*/
//---------声明结束---------
int main()
{
	//int _pause;/*暂停*/
	char commands[21];/*指令存储数组*/
	//SetConsoleTitle(L"Miku@Miku-PC:~"); // 获取窗口标题LINUX不可用
	printf("Hatsune Miku System Command-line Mode [Version 2.0c]\nCopyright (c) 2007 Crypton Media Future.\n\nType 'help' for help.\n\n");
restart://重新开始，意思是重新出现命令输入符
	printf("Miku@Miku-PC:~$");
	gets(commands);/*获得一个字符串*/
//--------------命令区域----------------------
	if(!strcmp(commands,"version")) _ver();
	else if(!strcmp(commands,"./Melody")) Melody();
	else if(!strcmp(commands,"exit"))goto sysend;
	else if(!strcmp(commands,"download")) _download();
	else if(!strcmp(commands,"ls")) _dir();
	else if(!strcmp(commands,"clear")) _cls();
	else if(!strcmp(commands,"make")) _install();
	else if(!strcmp(commands,"testcmd")) _testcmd();
	else if(!strcmp(commands,"badapple")) _badapple();
	else if(!strcmp(commands,"auto")) _auto();
	else if(!strcmp(commands,"help")) _help();
	//else if(!strcmp(commands,"calc")) _ldouble();  //linux中文乱码
	else if(strcmp(commands,""))printf("No command: Can not find command \"%s\" in this system.\n",commands);
//------------命令区域结束--------------------
	//printf("%d",strcmp(commands,"version"));
	//printf("测试指令1");
	//_timer(2000);/*调用延时器，延时2000ms*/
	//printf("测试指令2\n");
	//printf("\n");
	goto restart;
	//_pause=getchar();
sysend:;//程序的结束
}
//==========メロディー==========
void Melody()
{
	int i;
	//SetConsoleTitle(L"A:\\Melody.exe"); // 获取窗口标题
	printf("V");_timer(100);printf("o");_timer(100);printf("c");_timer(100);printf("a");_timer(100);printf("l");_timer(100);printf("o");_timer(100);printf("i");_timer(100);printf("d\n");_timer(1000);printf("V");_timer(100);printf("e");_timer(100);printf("r");_timer(100);printf("s");_timer(100);printf("i");_timer(100);printf("o");_timer(100);printf("n");_timer(100);printf(" ");_timer(100);printf("2\n");_timer(1000);printf("C");_timer(100);printf("o");_timer(100);printf("d");_timer(100);printf("e");_timer(100);printf(" ");_timer(100);printf("0");_timer(100);printf("1\n");_timer(1000);printf("Miku Hatsune\n");
	_timer(5000);
	printf("Loading data...");
	_timer(1000);//延时器函数延时1000ms
	for(i=0;i<=45;i++)//处理进度条
	{
		printf(".");//进度条符号“=”
		//printf("%d,",rand());`	
		_timer(150);//每个符号延时150ms
	}
	printf("[OK]\n");//进度条完毕输出OK并换行
	printf("Setting system configuration...");
	_timer(1000);
	for(i=0;i<=29;i++)
	{
		printf(".");
		_timer(250);
	}
	printf("[OK]\n");
		printf("Vocaloiding data...");
	_timer(1000);
	for(i=0;i<=41;i++)
	{
		printf(".");
		_timer(550);
	}
	printf("[OK]\n");
	for(i=0;i<=79;i++)//随机输出特殊效果
	{
		if(rand()%2==0) printf("_");
		else if(rand()%2!=0) printf("-");
		_timer(250);
	}
	printf("[OK]\n[All commands has been finished!]\n");
	_timer(4000);
	_badapple();//调用烂苹果函数
}
//==========长双精浮点运算========
void _ldouble()//无聊测试下中文支持能力 linux乱码
{
	long double b,c,d,e;
	int i;
	char a[5];
	printf("您确定运行这个计算程序？(是/否)：");//提示信息的输出
	gets(a);
	if(strcmp(a,"是")) goto end;//如果输入是继续执行否则退出
	b=1;c=1;d=2;//定义变量
	for(i=0;i<=32767;i++)//循环32767次
	{
		e=c*d;//做浮点型运算
		c++;
		b*b;
		printf("%8.0f",e);//整屏输出
		b--;
	}
	printf("\n");//换行
end:;
}
//==========显示版本信息==========
int _ver()
{
	printf("Hatsune Miku System Command-line Mode [Version 2.0c]\nCopyright (c) 2007 Crypton Media Future.\nby dfc643\n\n");
	return(0);
}
//============清屏函数============
void _cls()
{
	system("clear");//调用系统清屏函数
}
//===========文件查看命令========
void _dir()
{//目录dir仿真函数  //ls仿真
	printf("Total 10229Y\n");
	printf("drwx------ 2 Miku Miku  7239Y 9月  4  2013 Hatsune Miku\n");
	printf("-rw-rw-rw- 1 Miku Miku  951Y  3月  9  2010 201039.mro\n");
	printf("-rwxrw-rw- 1 Miku Miku  2039Y 3月  9  2010 Melody\n");
}
//==========下载仿真函数==========
int _download()
{
	int i;
	printf("Connecting to the Internet...");
	for(i=0;i<10;i++)
	{
		printf(".");
		_timer(250);
	}
	printf("OK\n");
	printf("Downloading from Server39...\n[");
	for(i=0;i<30;i++)
	{
		printf("#");
		_timer(500);
	}
	printf("] OK\nDownloaded:~/Hatsune Miku/download/voice.mod\n");
	printf("Please run 'make' command to install.\n");
	return(0);
}
void _install()
{
	int i;//文件复制仿真函数
	printf("Copying files...\n[");
	for(i=0;i<30;i++)
	{
		printf("#");
		_timer(150);
	}
	printf("] OK\n");
}
//==========延时器函数==========
void _timer(unsigned int Delay)
{ 
	char  buffer[128]; //Linux采用Sleep比较准
	sprintf(buffer, "sleep %g", (float)(Delay/3165.0));//读取关键帧
	system(buffer);
}
//==============BADAPPLE========
void _badapple()
{
	char  buffer[128];
	//linux表示不要预热
	/*for(int i=1;i<=75;i++)//逐帧输出关键帧
	{
		sprintf(buffer, "cat ./rena2/%d.bin", i);//读取关键帧
		system(buffer);
		_timer(250);//延时用于和音频同步
		//预热用于使播放流畅
		printf("前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！前75帧为预热！\n");
	}*/
	system("mpg123 ./rena2/badapple.mp3&");//启动播放器播放音乐
	for(int i=1;i<=2594;i++)//逐帧输出关键帧
	{
		sprintf(buffer, "clear;cat ./rena2/%d.bin", i);//读取关键帧
		system(buffer);
		_timer(250);
	}
	_badappleform();//还原窗口
}
void _badappleform()//窗口还原函数
{
    //Linux不可用
}
//============AUTO&HELP=============
void _auto()//批处理命令
{
	_download();
	_install();
	_dir();
	Melody();
}
void _help()//帮助信息
{
	printf("commands:auto,download,make,ls,clear,calc\nprograms:Melody\n\n");
}
//=======FORTEST===============
void _testcmd()//系统测试命令
{
	system("cat /proc/cpuinfo");
}
//by dfc643
//date 09/10/2011 teachers' day

//rebuild in linux by dfc643
//date 05/28/2013 University
