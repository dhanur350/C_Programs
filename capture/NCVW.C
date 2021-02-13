main()
     {
     char words[200];
     int vowels=0, letters=0, word=0, digits=0, spaces=0;
     int flag=0, i;
     clrscr();
     printf("\n Enter a line of Text : ");
     gets(words);
     for(i=0;words[i]!='\0';++i)
     {
     if(words[i]=='a' || words[i]=='e' || words[i]=='i' || words[i]=='o'
     ||   words[i]=='u'|| words[i]=='A' || words[i]=='E' || words[i]=='I'
     || words[i]=='O' || words[i]=='U')
     ++vowels;
     else
     if((words[i]>='a'&& words[i]<='z') || (words[i]>='A'&& words[i]<='Z'))
     ++letters;
     else
     if(words[i] >='0' && words[i] <='9')
     ++digits;
     else
     if (words[i]==' ')
     {
     ++spaces;
     flag=0;
     }
     if (words[i] !=' '&& flag==0)
     {
     ++word;
     flag=1;
     }
     }
     letters =letters + vowels;
     printf("\n\n Number of words:  %d", word);
     printf("\n Number of Digits:  %d", digits);
     printf("\n Number of Consonants:  %d", letters);
     //Alphabetic letters
     printf("\n Number of Vowels:  %d", vowels);
     printf("\n Number of White spaces:  %d", spaces);
     printf("\n Number of Characters:  %d", i);
     getch();
    }