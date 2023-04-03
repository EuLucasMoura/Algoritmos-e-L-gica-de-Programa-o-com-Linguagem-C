int main(void){
    char str[] = "vetor";
    char *strx = "ponteiro";
    printf("%s\n", str);
    printf("%s", strx);
   return 0;
}

int main()
{
    char s[] = "geeksquiz";
    printf("%lu", sizeof(s));
    s[0] = 'j';
    printf("\n%s", s);
    return 0;
}