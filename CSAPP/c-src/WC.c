/* 
   introductory C program
   implements (a subset of) the Unix wc command  --  reports character,
   word and line counts; in this version, the "file" is read from the
   standard input, since we have not covered C file manipulation yet,
   so that we read a real file can be read by using the Unix `<'
   redirection feature 

   Modified from Norm Matloff's C Introduction
*/

#include <stdio.h> 
#include <stdbool.h> 

#define MAXLINE 200 

/* 
   counts the number of words in the current line, which will be taken
   to be the number of blanks in the line, plus 1 (except in the case
   in which the line is empty, i.e. consists only of the end-of-line
   character); this definition is not completely general, and will be
   refined in another version of this function later on 
   
   param: line 
     c-string constant. the line of text
   param: lineLength
     integer.  The number of characters in line. 
   return: 
     integer.  The number of ' ' characters in line + 1 or 0 if the line is empty. 
*/  
int wordCount(const char *line, int lineLength){  

  int nBlanks = 0;  
  for (int i = 0; i < lineLength; i++){
    if (line[i] == ' ')
      nBlanks++;
  }
  
  if (lineLength > 1){
    return nBlanks+1;
  }
  else{
    return 0;
  }
}

    
/* reads one line of the file, returning also the number of characters
   read (including the end-of-line character); that number will be 0
   if the end of the file was reached 
   param: line
     c-string. The string in which the read line is stored 
   return: 
     integer. The number of characters read in.
   post-condition: 
     line has been assigned the next line of text 
*/
int readLine(char *line){
  
  char c; // variable to store char read from line

  // read on, check for error 
  if (scanf("%c",&c) == -1)
    return 0;

  // no error so assign to first location in line
  line[0] = c;
  if (c == '\n')
    // end if the first character was a newline 
    return 1; 

  bool hasNext = true;
  int i = 1;
  do{
    scanf("%c",&c);
    line[i] = c;
    if (c == '\n'){
      hasNext = false;      
    }
    i++;    
  }while(hasNext);
  return i;
}
  
  
void updateCounts(const char *line,int lineLength,
		  int *nChars, int *nWords, int *nLines){
  *nChars += lineLength;
  *nWords += wordCount(line,lineLength);
  (*nLines)++;
  return;
}
  
  
int main(int argc, char* argv[]){  
  int nChars = 0;  /* number of characters seen so far */
  int nWords = 0;  /* number of words seen so far */
  int nLines = 0;  /* number of lines seen so far */
  int lineLength;  /* length of the current line */
  char line[MAXLINE];  /* one line from the file */

  bool hasLines = true;
  while (hasLines) {
    lineLength = readLine(line);
    if (lineLength == 0){
      hasLines = false;
    }
    else{
      updateCounts(line,lineLength,&nChars, &nWords, &nLines);     
    }
  }
  printf("%d %d %d\n",nLines,nWords,nChars);
}
