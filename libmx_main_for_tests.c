#include "libmx.h"

// int main(void){
//     char *name = "\f  My name...     is  \r Neo  \t\n ";
//     printf("%s\n",mx_del_extra_spaces(name));
//     return 0;            
// }

// int main(void){
//     char *str = mx_file_to_str("ty.txt");
//     printf("%s", str);
// }

// int main(void){
//     printf("%s", mx_itoa(1));
//     return 0;
// }

// int main(void){
//     char *name = "\f  My name... is Neo  \t\n ";
//     printf("%s\n", mx_strtrim(name));
//     return 0;
// }

// int main (void){    
//    char str1 [11]="0123456789";
//    char str2 [10]="345";
//    char *istr;
//    istr = mx_strstr (str1,str2);
//     printf ("Искомая строка  %s\n",istr);

//    return 0;
// }

// int main(void) {
//     char *s = "**Good bye,**Mr.*Anderson.****";

//     printf("%s", mx_strsplit(s, '*')[2]);
// }

// char *mx_strjoin(char const *s1, char const *s2){
//     if(s1 != NULL && s2 != NULL){
//         return mx_strcat(mx_strdup(s1), mx_strdup(s2));
//     }
//     if(s1 != NULL && s2 == NULL){
//         return mx_strdup(s1);
//     }
//     if(s1 == NULL && s2 != NULL){
//         return mx_strdup(s2);
//     }
//     return NULL;
// }

// int main(){
//     char *str = malloc(sizeof(char*));
//     for (int i=0;i< 7;i++){
//     	str[i] = 'a';
//     }
// 	    str[7] = '\0';	  
//         mx_strdel(&str);
//         printf("%s", str);	
// }

// int main(void){
//     wchar_t c = 0xf5;
//     mx_print_unicode(c);
//     return 0;
// }

// int main(void){
//     char *arr[]={"IV", "5e2c9Z      haAq", "55\nNYGum20eWj", "5AtBW\n0BQWjISZ","5dl1\nEMaGBdwCa", 
//     "5QX glt7dtVYE", "F", "5   hnVXXYj AmfbmT", "5vRFt9Ht9PLH", "5IEk1CDAgfc\nsH", "59Qa       ", 
//     "ybrXrw", "5NlU5xUUlhks x", "5zJFf2rEj4A r", NULL};
//     char *delim = "х";
//     mx_print_strarr(arr, delim);
//     write(1, "\n", 1);
//     mx_print_strar(arr, delim);
//     return 0;
// }

// int main(void){
//     t_list *list = malloc(sizeof(t_list));
//     list->data = "1";
//     list->next = malloc(sizeof(t_list));
//     list->next->data = "2";
//     list->next->next = malloc(sizeof(t_list));
//     list->next->next->data = "3";
//     list->next->next->next = NULL;
//     mx_pop_front(&list);
//     while(list != NULL){
//         printf("%s\n", list->data);
//         free(list);
//         list = list->next;
//     }
//     //free(list);
//     system("leaks -q main");
// }

// int main(void){
//     t_list *list = malloc(sizeof(t_list));
//     list->data = "1";
//     list->next = malloc(sizeof(t_list));
//     list->next->data = "2";
//     list->next->next = malloc(sizeof(t_list));
//     list->next->next->data = "3";
//     list->next->next->next = NULL;
//     mx_pop_back(&list);
//     while(list != NULL){
//         printf("%s\n", list->data);
//         free(list);
//         list = list->next;
//     }
//     //free(list);
//     system("leaks -q main");
// }

// int main(void){
//     unsigned char src[15]="1234567890";
//     mx_memset (src, '1', 10);
//     printf ("src: %s\n",src);
//     return 0;
// }

// int main (void){
//    unsigned char src[10]="123456";
//    unsigned char dst[10]="";
//    // Копируем 6 байт из массива src в массив dst
//    mx_memcpy (dst, src, 6);
//    printf ("dst: %s\n",dst);
//    return 0;
// }

// int main (void){
//     unsigned char src[]="7jkjkjkjkj";
//     unsigned char dst[15]="1234567890";
//     if (memcmp (src, dst, 35) == 0)
//        puts ("Области памяти идентичные.");
//     else
//        printf("%d\n", memcmp (src, dst, 10));
//     return 0;
// }

// int main (void){
//    unsigned char src[]="u1Nch8d824oC3jDX29Nj   m KJMNetFIzE8V  3";
//    unsigned char dst[44]="";
//    memccpy (dst, src,'3', 38);
//    printf ("dst: %s\n",dst);
//    return 0;
// }
