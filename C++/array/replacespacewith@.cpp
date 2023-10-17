#include<iostream>
#include<string.h>
using namespace std;

int replacespaces(char sentences[]){
    int i=0;
    int n=strlen(sentence);
   for (int i=0;i<n;i++){
    if(sentence[i]==''){
        sentence[i]='@';
    }
   }
    }

int main()
{
    char sentence[100];
    cin.getline(sentence,100);

    replacespaces(sentences);
    cout<<"printing sentences"<<endl<<sentences<<endl;
    
    return 0;
}