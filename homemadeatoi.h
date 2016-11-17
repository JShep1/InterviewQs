typedef enum {ERROR, NO_ERROR} is_error_type;

int are_same(char *name1, char *name2, int name_len);
void printString(char *string);
char *populateString(int size);
is_error_type allocString(char **string, int size);
int homemadeatoi(char* string);

