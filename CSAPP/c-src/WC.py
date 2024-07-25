# A python version of WC.c
#  This isn't necessarily idomatic Python as it tries to
#  keep to the design of WC.c.

MAXLINE = 200

def wordCount(line):
    """
    Counts the number of words in line. A word is determined
    by the presense of a blank. (So we're just counting how many
    ' ' substrings occur in line)
    param: line
      string. the line in question.
    return:
      integer. number of words/blanks

    """
    nBlanks = 0
    for i in range(0,len(line)):
        if line[i] == ' ':
            nBlanks += 1
    if len(line) > 1:
        return nBlanks+1
    else:
        return 0

def updateCounts(line,nChars,nWords,nLines):
    newNChars = nChars + len(line)  + 1 #add 1 for \n
    newNWords = nWords + wordCount(line)
    return (newNChars,newNWords,nLines+1)

def main():
    nChars = 0
    nWords = 0
    nLines = 0
    hasLines = True
    while hasLines:
        try:
            line = input()
        except EOFError:
            hasLines = False
        if hasLines:
            nChars,nWords,nLines = updateCounts(line,nChars,nWords,nLines)            
    print("{} {} {}".format(nLines,nWords,nChars))
    
if __name__ == '__main__':
    main()
