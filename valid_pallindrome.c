/* Leetcode 9. Pallindrome Number 
   Given an integer, find it it is a pallindrome or not.*/

bool isPalindrome(int x) {
    unsigned int new_num = 0;
    unsigned int num_check = x;
    if(x<0){
        return false;
    }
    /* 121 
       121%10 = 1 = digit
       121/10 = 12
       new_num = new_num*10 + digit*/
    while(x!=0){
        int digit = x%10;
        new_num = new_num*(10) + digit;
        printf("%d %d\n",new_num,digit);
        x=x/10;
    }
    if(new_num == num_check){
        return true;
    }
    else{
        return false;
    }
}