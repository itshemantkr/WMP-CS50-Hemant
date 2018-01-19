#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(int argc,string argv[])
{
    if(argc!=2)
    return 1;
    int pass=atoi(argv[1]);
    printf("plaintext:");
    string s=get_string();
    for(int i=0,n=strlen(s);i<n;i++)
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
            {
                s[i]=s[i]-'A';
                s[i]=(s[i]+pass)%26;
                s[i]=s[i]+'A';
            }
            if(islower(s[i]))
            {
                s[i]=s[i]-'a';
                s[i]=(s[i]+pass)%26;
                s[i]=s[i]+'a';
            }

        }
    }
    printf("ciphertext:%s\n",s);
    return 0;


}
