#include<stdio.h>
#include<string.h>
int converttokey(char ch){
 return ch-'a';
}
char converttovalue(int key){
	return key+'a';
}
int main()
{
	int i,key;
char ch,str[1000];
scanf("%s",str);
int hash[26]={0};
for(i=0;i<strlen(str);i++)
{
	char ch=str[i];
	 key=converttokey(ch);
	hash[key]++;
}
for(key=0;key<26;key++)
printf("%c %d\n",converttovalue(key),hash[key]);
}

