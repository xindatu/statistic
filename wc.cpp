#include <iostream>
using namespace std; 
FILE *fp;

void Counting()
{
	 long long CHAR=0,STRING=0,WORD=0,SENTENCE=0;
	 do
	 {
		STRING++;
		CHAR=fgetc(fp);
	    if(CHAR==' ')
		 {
			
			WORD++;
			
	   	 }
		if(CHAR=='.'||CHAR=='!'||CHAR=='?')
		 {
			SENTENCE++;
		 }
	 }
	 while(CHAR!=EOF);
	 WORD++;
	 cout<<"һ����:"<<STRING<<"���ַ�,"<<WORD<<"������,"<<SENTENCE<<"����"<<endl;
}

int main()
{
  if((fp=fopen("D:\\Documents\\C-Free\\Temp\\file.txt","r"))==NULL)
 {
   printf("����û�ļ��ò���\n");
   return 0;
 }
	 Counting();
 	 fclose(fp);
}