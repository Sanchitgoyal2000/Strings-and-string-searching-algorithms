   /**
 * @input A : String termination by '\0'
 *
 * @Output Integer
 */
int isPalindrome(char* A)
{
    int j=strlen(A)-1,i=0,h=0;
    if(A[0]=="\"")
    return 1;
    while(i<j)
    {
        if(A[i]<65)
        {
            if(A[i]<=47||A[i]>=57)
            {
            i++;
            continue;
            }
        }
        if(A[j]<65)
        {
            if(A[j]<=47||A[j]>=57)
            {
            j--;
            continue;
            }
        }
        if((A[i]==A[j])||(A[i]-32==A[j])||(A[i]+32==A[j]))
        {
            h=1;
            j--;
            i++;
        }
        else
        {
            return 0;
        }
    }
    if(h==1)
    return 1;
}

// test case "A man, a plan, a canal: Panama" is a palindrome.
// test case 2a2 is palindrome
