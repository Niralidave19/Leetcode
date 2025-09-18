
bool isValid(char* s) {
    int len = strlen(s);
    if(len == 1 || len%2!=0){return false;}
    char stack[len];
    int top = -1;
    for(int i=0;i<len;i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            stack[++top] = s[i];
        }
        else{
            if(top==-1){
                return false;
            }
            char a=stack[top--];
            if((a!= '[' && s[i] == ']') || (a!= '{' && s[i] == '}') || (a!= '(' && s[i] == ')')){
                return false;
            }
        }
    }
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}