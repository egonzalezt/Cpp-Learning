# C strings

How to represent strings

1. Array of characters (can use it on C and C++)

2. C++ String class

char x = 'A'; store only 1 character

char x = 'Hello'; does not work

char S[10]="Hello"; -> |H|e|l|l|o|\0|||||

**The \0 represents the null character or the string delimitation**

The problem with this method is the size of the character because the array is size 10 but it only use 5 spaces. so we are wasting memory

this way is better because we can dynamically create the size deppend on the size of the word

char S[] = "Hello"; -> |H|e|l|l|o|\0|

char S[]={'H','e','l','l','o','\0'}; -> |H|e|l|l|o|\0|

char S[]={65,66,67,68,'\0'}; (the numbers are the ascii code for the word)

## Using pointers

char *S ="Hello"; -> |H|e|l|l|o|\0| 

pointer have the string inside the heap

### To store in:

1. Heap: char *S ="Hello";
2. Stack: char S[] = "Hello";


## CSTRING

is a **library** with build in function that gives to the user to work with strings or character array

- strlen(str) -> gives the lenght of the string (number of chars that string contains)

- strcat(dest,src); for concatenate two strings

- strncat(dest,src,lenght); for concatenate two strings and choose how many chars you are going to concat from the src string

- strcopy(dest,src); copy one string to another string

- strncpy(dest,src,lenght); copy one string to another string but the src string copy a specific lenght

- strcopy and strncpy information on dest are deleted

- strstr(main,sub); using to find a substring in a main string

if the substring is found it returns the combination of the two strings

mainstr= "programming";
substr="gram";

using strstr it returns gramming

- strchr(main,char);

it returns the position of a specific char that could be in the main string

char c1="Programming";

strchr(c1,'m');

returns 

mming

- strrchr(main,char);

it returns the position of a specific char that could be in the main string but check in the right hand side

char c1="Programming";

strrchr(c1,'m');

returns 

ming

- strcmp(s1,s2); used to compare strings to check if they are the same to made that c++ uses the ascii table
interpretanting that a=97 and A=65

so using this functions the if you compare hello vs Hello c++ made this 

|h|e|l|l|o|
|104|101|108|108|111|

|H|e|l|l|o|
|72|101|108|108|111|



|104|101|108|108|111|-|72|101|108|108|111| = 32  0   0   0   0

so it returns 32 that means that hello is higher than Hello and the reason is because lower case has a higher ascii code 

there is a 32 of difference if you want to go from A to a

now in modern c++ only return -1 if str 1 are lower than str 2 or 0 if they are the same or 1 if str1 are higher than str2

- strtol(str1) => string to long convert string to long integer number

    long int x =strtol(s1,NULL,10);//number 10 is the base of the number in this case decimal numbers

- strtof(str1,NULL) => string to float number, null is the end of the string

- strtok(str1,"=;"); => string tokenizer using some sintax that we declare the code will separe the values different of =; (in this case)
