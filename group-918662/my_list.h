#ifndef my_list
#define my_list

typedef struct linked_list {
    int key;
    char *value;
    struct linked_list *next;
} linked_list_t;

void my_putchar(char c);
void my_putstr(const char *str);
int my_getnbr(const char *str);
void my_putnbr(int nb);
int my_strcmp(const char *s1, const char *s2);
linked_list_t *my_push_front_to_list(char **tab, linked_list_t *list);
linked_list_t *my_delete_node(char **tab, linked_list_t *list);
linked_list_t *my_print_value(char **tab, linked_list_t *list);
int my_strlen(const char *str);
char *my_readline(void);
int is_num(char *str);
char **my_str_to_word_array(const char *str);

#endif