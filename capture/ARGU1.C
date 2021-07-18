main(int argc,char *argv[]) //Commandline arguments
{
int i=0,sum=0;
clrscr();
printf("\n Total no. of arguments %d ",argc);
for(i=1;i<argc;i++)
{
argv[i]=atoi (argv[i]);
sum=sum+argv[i];
}
printf("  %d  ",sum);
getch();
}
