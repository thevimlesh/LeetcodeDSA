#include<iostream>
#include<string.h>
using namespace std;

int reverseChararray(char name[]){
    int i=0;
    int n=getlength(name);
    int j=n-1;

    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }

}

int main()
{
    char name[100];
    cin >> name;
    cout<<"length is:"<<getLength(name)<<endl;
    cout<<"Length is"<< strlen(name)<<endl;

    cout<<"Initially:"<<name<<endl;
    reverseChararray(name);
    cout<<"After reversal process:"<< name<<endl;
    return 0;
}