// C_Melody.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
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
	SetConsoleTitle(L"C:\\Windows\\system32\\cmd.exe"); // ��ȡ���ڱ���
	printf("Hatsune Miku System Command-line Mode [Version 2.0c]\nCopyright (c) 2007 Crypton Media Future.\n\nType 'h' for help.\n\n");
restart://���¿�ʼ����˼�����³������������
	printf("A:\\>");
	gets(commands);/*���һ���ַ���*/
//--------------��������----------------------
	if(!strcmp(commands,"version")) _ver();
	else if(!strcmp(commands,"Melody.exe")) Melody();
	else if(!strcmp(commands,"exit"))goto sysend;
	else if(!strcmp(commands,"download")) _download();
	else if(!strcmp(commands,"dir")) _dir();
	else if(!strcmp(commands,"cls")) _cls();
	else if(!strcmp(commands,"install")) _install();
	else if(!strcmp(commands,"testcmd")) _testcmd();
	else if(!strcmp(commands,"badapple")) _badapple();
	else if(!strcmp(commands,"auto")) _auto();
	else if(!strcmp(commands,"h")) _help();
	else if(!strcmp(commands,"����")) _ldouble();
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

return 0;
}
//==========���ǥ��`==========
void Melody()
{
	int i;
	SetConsoleTitle(L"A:\\Melody.exe"); // ��ȡ���ڱ���
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
void _ldouble()//���Ĳ���������֧������
{
	long double b,c,d,e;
	int i;
	char a[5];
	printf("���й��������ȷ����������������(��/��)��");//��ʾ��Ϣ�����
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
	system("cls");//����ϵͳ��������
}
//===========�ļ��鿴����========
void _dir()
{//Ŀ¼dir���溯��
	printf(" Volume in drive A is Hatsune Miku\n");
	printf(" Volume Serial Number is MIKU-1039\n");
	printf("\n");
	printf(" Directory of A:\\\n");
	printf("\n");
	printf("2007/08/31  16:21    <DIR>          Hatsune Miku\n");
	printf("2010/03/09  19:32               951 201039.mro\n");
	printf("2010/03/09  19:32              2039 Melody.exe\n");
	printf("               2 File(s)           2990 Ybytes\n");
	printf("               1 Dir(s)  39,200,255,390 Ybytes free\n");
	printf("\n");
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
	printf("] OK\nDownloaded:A:\\Hatsune Miku\\download\\voice.mod\n");
	printf("Please run 'install' command to install.\n");
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
	unsigned int i;
	for(;Delay>0;Delay--)	
	{ 
		for(i=0;i<65535;i++){;}/*רҵռ��ʱ��(^ ^)Y*/
	}
}
//==============BADAPPLE========
void _badapple()
{
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
CONSOLE_SCREEN_BUFFER_INFO bInfo; // ���ڻ�������Ϣ
COORD size = {121, 3000};
SetConsoleScreenBufferSize(hOut,size); // �������û�������С
	char  buffer[128];
	system(".\\rena2\\badapple.mp3");//��һ��Ԥ�������������������֣���ֹ��
	//_timer(15000);//�ȴ�������Ԥ�����
		for(int i=1;i<=75;i++)//��֡����ؼ�֡
	{
		sprintf(buffer, "cls&type .\\rena2\\%d.bin", i);//��ȡ�ؼ�֡
		//printf("%s\n",buffer);
		system(buffer);
		_timer(250);//��ʱ���ں���Ƶͬ��
		//Ԥ������ʹ��������
		printf("ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\nǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�ǰ75֡ΪԤ�ȣ�\n");
	}
	system(".\\rena2\\badapple.mp3");//������������������
	//_timer(1000);
	for(int i=1;i<=2594;i++)//��֡����ؼ�֡
	{
		sprintf(buffer, "cls&type .\\rena2\\%d.bin", i);//��ȡ�ؼ�֡
		//printf("%s\n",buffer);
		system(buffer);
		_timer(250);
	}
	//system("taskkill /im wmplayer.exe /f");//����WMP������
	_badappleform();//��ԭ����
}
void _badappleform()//���ڻ�ԭ����
{
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
CONSOLE_SCREEN_BUFFER_INFO bInfo; // ���ڻ�������Ϣ
COORD size = {80, 300};
SetConsoleScreenBufferSize(hOut,size); // �������û�������С
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
	printf("commands:auto,download,install,dir,cls,����\nprograms:Melody.exe\n\n");
}
//=======FORTEST===============
void _testcmd()//ϵͳ��������
{
//	char  buffer[128];
//	for(int i=96;i<=100;i++)
//	{
//		_cls();
//		sprintf(buffer, "E:\\%d.txt", i);
//		ifstream in(buffer);
//		for(string s;getline(in,s);)
//			cout<<s<<endl;
//	}
	system("cmd");
}
//by dfc643
//date 09/10/2011 teachers' day