// C_Melody.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
//#include <windows.h>  //linux����
//#include <conio.h>
#include <string>
using namespace std;
//---------��������---------
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
void _timer(unsigned int Delay); /*��ʱ��*/
//---------��������---------
int main()
{
	//int _pause;/*��ͣ*/
	char commands[21];/*ָ��洢����*/
	//SetConsoleTitle(L"Miku@Miku-PC:~"); // ��ȡ���ڱ���LINUX������
	printf("Hatsune Miku System Command-line Mode [Version 2.0c]\nCopyright (c) 2007 Crypton Media Future.\n\nType 'help' for help.\n\n");
restart://���¿�ʼ����˼�����³������������
	printf("Miku@Miku-PC:~$");
	gets(commands);/*���һ���ַ���*/
//--------------��������----------------------
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
	//else if(!strcmp(commands,"calc")) _ldouble();  //linux��������
	else if(strcmp(commands,""))printf("No command: Can not find command \"%s\" in this system.\n",commands);
//------------�����������--------------------
	//printf("%d",strcmp(commands,"version"));
	//printf("����ָ��1");
	//_timer(2000);/*������ʱ������ʱ2000ms*/
	//printf("����ָ��2\n");
	//printf("\n");
	goto restart;
	//_pause=getchar();
sysend:;//����Ľ���
}
//==========���ǥ��`==========
void Melody()
{
	int i;
	//SetConsoleTitle(L"A:\\Melody.exe"); // ��ȡ���ڱ���
	printf("V");_timer(100);printf("o");_timer(100);printf("c");_timer(100);printf("a");_timer(100);printf("l");_timer(100);printf("o");_timer(100);printf("i");_timer(100);printf("d\n");_timer(1000);printf("V");_timer(100);printf("e");_timer(100);printf("r");_timer(100);printf("s");_timer(100);printf("i");_timer(100);printf("o");_timer(100);printf("n");_timer(100);printf(" ");_timer(100);printf("2\n");_timer(1000);printf("C");_timer(100);printf("o");_timer(100);printf("d");_timer(100);printf("e");_timer(100);printf(" ");_timer(100);printf("0");_timer(100);printf("1\n");_timer(1000);printf("Miku Hatsune\n");
	_timer(5000);
	printf("Loading data...");
	_timer(1000);//��ʱ��������ʱ1000ms
	for(i=0;i<=45;i++)//���������
	{
		printf(".");//���������š�=��
		//printf("%d,",rand());`	
		_timer(150);//ÿ��������ʱ150ms
	}
	printf("[OK]\n");//������������OK������
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
	for(i=0;i<=79;i++)//����������Ч��
	{
		if(rand()%2==0) printf("_");
		else if(rand()%2!=0) printf("-");
		_timer(250);
	}
	printf("[OK]\n[All commands has been finished!]\n");
	_timer(4000);
	_badapple();//������ƻ������
}
//==========��˫����������========
void _ldouble()//���Ĳ���������֧������ linux����
{
	long double b,c,d,e;
	int i;
	char a[5];
	printf("��ȷ����������������(��/��)��");//��ʾ��Ϣ�����
	gets(a);
	if(strcmp(a,"��")) goto end;//��������Ǽ���ִ�з����˳�
	b=1;c=1;d=2;//�������
	for(i=0;i<=32767;i++)//ѭ��32767��
	{
		e=c*d;//������������
		c++;
		b*b;
		printf("%8.0f",e);//�������
		b--;
	}
	printf("\n");//����
end:;
}
//==========��ʾ�汾��Ϣ==========
int _ver()
{
	printf("Hatsune Miku System Command-line Mode [Version 2.0c]\nCopyright (c) 2007 Crypton Media Future.\nby dfc643\n\n");
	return(0);
}
//============��������============
void _cls()
{
	system("clear");//����ϵͳ��������
}
//===========�ļ��鿴����========
void _dir()
{//Ŀ¼dir���溯��  //ls����
	printf("Total 10229Y\n");
	printf("drwx------ 2 Miku Miku  7239Y 9��  4  2013 Hatsune Miku\n");
	printf("-rw-rw-rw- 1 Miku Miku  951Y  3��  9  2010 201039.mro\n");
	printf("-rwxrw-rw- 1 Miku Miku  2039Y 3��  9  2010 Melody\n");
}
//==========���ط��溯��==========
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
	int i;//�ļ����Ʒ��溯��
	printf("Copying files...\n[");
	for(i=0;i<30;i++)
	{
		printf("#");
		_timer(150);
	}
	printf("] OK\n");
}
//==========��ʱ������==========
void _timer(unsigned int Delay)
{ 
	char  buffer[128]; //Linux����Sleep�Ƚ�׼
	sprintf(buffer, "sleep %g", (float)(Delay/3165.0));//��ȡ�ؼ�֡
	system(buffer);
}
//==============BADAPPLE========
void _badapple()
{
	char  buffer[128];
	//linux��ʾ��ҪԤ��
	/*for(int i=1;i<=75;i++)//��֡����ؼ�֡
	{
		sprintf(buffer, "cat ./rena2/%d.bin", i);//��ȡ�ؼ�֡
		system(buffer);
		_timer(250);//��ʱ���ں���Ƶͬ��
		//Ԥ������ʹ��������
		printf("ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\n");
	}*/
	system("mpg123 ./rena2/badapple.mp3&");//������������������
	for(int i=1;i<=2594;i++)//��֡����ؼ�֡
	{
		sprintf(buffer, "clear;cat ./rena2/%d.bin", i);//��ȡ�ؼ�֡
		system(buffer);
		_timer(250);
	}
	_badappleform();//��ԭ����
}
void _badappleform()//���ڻ�ԭ����
{
    //Linux������
}
//============AUTO&HELP=============
void _auto()//����������
{
	_download();
	_install();
	_dir();
	Melody();
}
void _help()//������Ϣ
{
	printf("commands:auto,download,make,ls,clear,calc\nprograms:Melody\n\n");
}
//=======FORTEST===============
void _testcmd()//ϵͳ��������
{
	system("cat /proc/cpuinfo");
}
//by dfc643
//date 09/10/2011 teachers' day

//rebuild in linux by dfc643
//date 05/28/2013 University
