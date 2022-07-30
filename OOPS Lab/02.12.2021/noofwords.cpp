#include<iostream.h>
#include<fstream.h>
 
int main()
{
ifstream fin("a.txt"); 
int i=0; 
char ch;
fin.seekg(0,ios::end); 
size=fin.tellg(); 
fin.seekg(0,ios::beg); 
if(ch==EOF)
    break;
  if(i%2==0)
  {
   printf("%c",ch);
  }
  i++;
 }
while(fin)
{
  fin.get(ch);
  if(ch==' '||ch=='n')
   word++;
  
}
cout<<"nWords="<<word<<"nSize="<<size<<"n";
fin.close(); 
return 0;
}