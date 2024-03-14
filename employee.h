void clearbuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
}
void rmnewline(char *str){
    str[strcspn(str,"\n")] = '\0';
}