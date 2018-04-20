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
	 cout<<"一共有:"<<STRING<<"个字符,"<<WORD<<"个单词,"<<SENTENCE<<"句子"<<endl;
}

int main()
{
  if((fp=fopen("D:\\Documents\\C-Free\\Temp\\file.txt","r"))==NULL)
 {
   printf("根本没文件好不好\n");
   return 0;
 }
	 Counting();
 	 fclose(fp);
}
