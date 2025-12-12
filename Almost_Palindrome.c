#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        char s[1001];
        int freq[26], odd = 0;
        scanf("%s",s);
        memset(freq,0,sizeof(freq));
        for (int i=0; s[i]; i++)
        {
            freq[s[i]-'a']++;
        }
        for (int i=0; i<26; i++)
        {
            if (freq[i]%2 != 0)
            {
                odd++;
            }
        }
        if (odd > 0)
        {
            printf("%d\n",odd - 1);
        }    
        else
        {
            printf("0\n");
        }     
    }
    return 0;
}
