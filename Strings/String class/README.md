## Class string

to use this class you need to import the library
```C++
#include <string>
```
string str; -> object initialization

cin>>str; -> to read string by user keyboard input the problem is that only read one word so for that reason you need to use 

getline(cin,str); cin means the maximun of chars that you need to store

remember that string works like arraylist it create a regular array with size x but if you need more space if will create a copy of that array but with 2x size.

see what happens if you use cin 

with no spaces

PS F:\Desktop\C++\Strings\String class> .\demo1.exe
Enter string
ssssssssssssssssssssssdfsdfasfsdfasfasdfasdfasfdfd
You write: ssssssssssssssssssssssdfsdfasfsdfasfasdfasdfasfdfd

with spaces
```Powershell
PS F:\Desktop\C++\Strings\String class> .\demo1.exe
Enter string
asdf asasdf  
You write: asdf (see it only store the first word)
```
**using getline(cin,str);**
```Powershell
PS F:\Desktop\C++\Strings\String class> .\demo1.exe
Enter string
sasfasdfasdf asdfasd fasdfasd
You write: sasfasdfasdf asdfasd fasdfasd 
```
**it works store all the words**

## String build in functions

1. s.length() -> the length of the string only
for example 

string s1 = "Hello";
string s2 = "world";

s1.length(); -> returns 5
s2.length(); -> returns 5

2. s.size()

for example 

string s1 = "Hello";
string s2 = "world";

s1.size(); -> returns 5
s2.size(); -> returns 5

**remember handle errors because if size or length are NULL or nullptr C++ returns an error**

3. s.capacity()

Gives the capacity of the string array (in other words the size of the array)

|h|e|l|l|o|\0||||||||||
|0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|

this string has 15 of capacity

4. s.resize(30)

resize is maded for capacity because helps us to increase the capacity of the string

example

|h|e|l|l|o|\0||||||||||
|0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|

this string has 15 of capacity but lets see how we can solve that 

for example we only need to save hello so the other blank spaces are no needed so we can made resize(6)
|h|e|l|l|o|\0|
|0|1|2|3|4|5|6|

and thats if folks.

5. s.max_size()

depends of the compiler it gives you the maximun size that you can store in a string

6. s.clear()

clears the string

7. s.empty()

finds if a string is empty or not

8. s.append("world")
9. s.insert(3,"test")

s.insert(index,"test")

position on the array to insert the new string
|h|e|l|l|o|\0||||||||||
string s = "hello";
s.insert(index,"test")
|h|e|l|t|e|s|t|l|o|\0|||||

9.1 s.insert(3,"Apple",2)

|h|e|l|l|o|\0||||||||||
string s = "hello";
s.insert(3,"Apple",2)
|h|e|l|A|p|l|o|\0|||||

this variant of insert mades that if you want to insert Apple but not the entire word only a portion you can indicate that 
i want to insert apple but i only need the two first words

10. s.replace(3,5,"aa")

s.replace(start,chars_to_replace,word_to_replace)

string s = "programming";

|p|r|o|g|r|a|m|m|i|n|g|

using replace
s.replace(3,4,"aa")

|0|1|2|3|4|5|6|7|8|9|10|

start in 3 and replace from 3,4,5,6 (that is 4)

|p|r|o|aa|m|i|n|g|


11. s.erase()

the same as clear string

12. s.push_back('z')

insert a single character at the end of the string

string s = "programming";
s.push_back('z')

s is converted to programmingz

13. s.pop_back()

remove the last element or char in the list

string s = "programming";
s.pop_back()

s is converted to programmin


**these operations only works as single character it cannot add or delete more than 1 char also is the same as stack operations**

14. s1.swap(s2)

As the name says it swap two strings so if i have string 1 and string 2 the value of 1 became to 2 and 2 became to 1

string s1="programming";
string s2="languaje";

s1.swap(s2);

cout<<s1<<endl; -> languaje
cout<<s2<<endl; -> programming

15. s.copy(char des[])

the function of copy is to copy an string to an array that we stablish and also we need to specify how many characters
we need to copy

string s="Welcome";

char str[10];
s.copy(str,s.length())

16. s.find(str) or char

used to find an string or char inside on a string and returns the possition where the char or string start

17. s.rfind(str)

used to find an string or char inside on a string and returns the possition where the char or string start
but finds the word in the right hand side

18. s.find_first_of()

find a string first occurrence 

string s = "Hello world maincra";

s.find_first_of('d');
s.find_first_of('d',5); //finding starting on the position 5 of the string
s1.find_first_of("le"); // finds the first occurence so finds if l or e appears first 

19. s.find_last_of()

find a string last occurrence 

cout<<s1.find_last_of("le")<<endl; // finds the last occurence so finds if l or e appears first 

20. s.substr(start,number)

substr this function create a substring base of the index that you gives and the number of characters that you want to copy

string s = "Hello world maincra";
s.substr(3,8)->lo world
s.substr(3)->lo world maincra

21. s.compare(str)

compare two strings and if the strings are equal returns 0 and if there is possitive or negative means that one of the strings are greather that the other or lower than the other

string str1 = "Hello";
string str2 = "World";

cout<<str1.compare(str2)<<endl;

returns -15 which means that Hello is smaller than World (remember as we seen before about ASCII TABLE)

22. s.at()

returns the char that is located in that position

s= "world";
s.at(2); // returns r

23. []

just like if we hace a array of chars

s= "world";
s[2]; //returns r

but string is a class how it is possible that an array [] can be used on a class

because [] is a order lower operator functions for operator

24. front()

gives the first letter of the string

25. back()

gives the last letter of the string

26. +

string str = "Hello ";
string str2 = "World";

string str3 =str+str2 -> "Hello world"

str1 = str+" world";

27. =

str1+=" world"; -> "Hello world"

### Class string iterator

```C++
string::iterator 
```

28. begin()

beggining index of the string

29. end()

end index of the string

30. reverse_iterator

31. rbegin()

32. rend()