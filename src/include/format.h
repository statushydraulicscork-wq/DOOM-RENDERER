/// @brief 
/// Gets the length of an array of characters
/// @param string Array of characters
/// @return 
int len(char *string){
    int strLen = 0;

    for (int index = 0;string[index] != '\0';index++){
        strLen++;
    }
    return strLen;
}