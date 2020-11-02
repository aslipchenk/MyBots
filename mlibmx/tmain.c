#include "libmx.h"
#include <stdlib.h>
#include <stdio.h>


int main () {
   mx_printstr(" **********************\n *\tUTILS PACK    *\n **********************\n\n");
   mx_printstr("------------------------------------------PRINTSTR-------------------------------\n\n\n");


        // mx_printstr("-----------------------------------MX_strchr_before--------------------------------------\n");
        // char *str_before_chr = "Hello-world\n";
        // printf("%s", mx_before_strchr(str_before_chr, '-'));
//    mx_printstr("-----------------------------------------MX_Strchr---------------------------------------\n");
//    char *str_strchar = "Hello-worldn\n";
//     printf("%s", mx_strchr(str_strchar, '-'));    

//     mx_printstr("----------------------------------------------------------------MX_PrintUnicode---------------------------------------------------------------------\n");
//         mx_print_unicode(1122);
//         mx_printchar('\n');
//         mx_print_unicode(128054);
//         mx_printchar('\n');
//         mx_print_unicode(129418);
//         mx_printchar('\n');
//         mx_print_unicode(2046);
//         mx_printchar('\n');
//         mx_print_unicode(2050);
//         mx_printchar('\n');
//         mx_print_unicode(162);
//         mx_printchar('\n');
//         mx_print_unicode(4053);
//         mx_printchar('\n');

//     mx_printstr("------------------------------------------Mx_Printchar----------------------------\n");
//     mx_printchar('c');
//     mx_printchar('\n');
//     mx_printchar('f');
//     mx_printchar('\n');
//     mx_printchar('e');
//     mx_printstr("\n\n");


//     mx_printstr("----------------------------------------Mx_Printint--------------------------------\n");
//     mx_printint(2333);
//     mx_printchar('\n');
//     mx_printint(-23);
//     mx_printchar('\n');
//     mx_printint(543);
//     mx_printchar('\n');
//     mx_printint(-2147483648);
//     mx_printchar('\n');
//     mx_printint(432);
//     mx_printstr("\n\n");




//     mx_printstr("------------------------------------------------Mx_sqrt--------------------------------------\n");
//     printf ("%d\t", mx_sqrt(21));   printf("21\n");
//     printf ("%d\t", mx_sqrt(121));  printf("121\n");
//     printf ("%d\t", mx_sqrt(4));    printf("4\n");
//     printf ("%d\t", mx_sqrt(6));    printf("6\n");
//     printf ("%d\t", mx_sqrt(9));    printf("9\n");
//     printf ("%d\t", mx_sqrt(4832)); printf("4832\n");
//     printf ("%d\t", mx_sqrt(16));   printf("16\n");
//     printf ("%d\t", mx_sqrt(3));    printf("3\n");
//     printf ("%d\t", mx_sqrt(2));    printf("2\n");
//     printf ("%d\t", mx_sqrt(144));  printf("144\n");
//      mx_printstr("\n");

//     mx_printstr("---------------------------------------------Mx_Pow--------------------------------------------\n");
//     printf("3, 5\t");   printf("%f\n", mx_pow(3, 5));
//     printf("2.5, 3\t"); printf("%f\n", mx_pow(2.5, 3));
//     printf("9, 3\t");   printf("%f\n", mx_pow(9, 3));
//     mx_printstr("\n");


//     mx_printstr("-----------------------------------------------Mx_Print_Strarr------------------------------------\n");
//     char *str_arr[] = {"eqwed", "4gfgytr", "start", "fadrwe", "sfhre", NULL};
//     char *delim = " ";
//     mx_print_strarr(str_arr, delim);
//     mx_printstr("\n");
//     mx_print_strarr(NULL, NULL);
//     mx_print_strarr(NULL, " ");
//     mx_print_strarr(str_arr, NULL);
//          mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(NULL, NULL); mx_printstr("\n");
//         mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(NULL, " "); mx_printstr("\n");
//     mx_printstr("---------------------------------------------Mx_Nbr_To_Hex----------------------------------------\n");
//     printf("1000 - %s\n", mx_nbr_to_hex(1000));
//     printf("255 -%s\n", mx_nbr_to_hex(255));
//     printf("1023 -%s\n", mx_nbr_to_hex(1023));
//     printf("52 - %s\n", mx_nbr_to_hex(52));
//     printf("11 - %s\n", mx_nbr_to_hex(11));
//     printf("10 -%s\n", mx_nbr_to_hex(10));
//     printf("9223372036854775807 - %s\n", mx_nbr_to_hex(9223372036854775807));
    

//     mx_printstr("----------------------------------------------Mx_Hex_To_Nbr----------------------------------------\n");
//     printf("1015F - %lu\n", mx_hex_to_nbr("1015F"));
//     printf("F34 - %lu\n", mx_hex_to_nbr("F34"));
//     printf("FADE - %lu\n", mx_hex_to_nbr("FADE"));
//     printf("A - %lu\n", mx_hex_to_nbr("A"));
//     printf("21d - %lu\n", mx_hex_to_nbr("21d"));
//     printf("5g - %lu\n", mx_hex_to_nbr("5g"));
//     printf("GG - %lu\n", mx_hex_to_nbr("GG"));

//     mx_printstr ("-----------------------------------Mx_Itoa-----------------------------------------------------------\n");
//     printf ("%s\n", mx_itoa(32));
//     printf ("%s\n", mx_itoa(56436));
//     printf ("%s\n", mx_itoa(34234));
//     printf ("%s\n", mx_itoa(542));
//     printf ("%s\n", mx_itoa(-32));
//     printf ("%s\n", mx_itoa(0));


//     mx_printstr("--------------------------------------Mx_ForEach-----------------------------------------------------------\n");
//     int arr_each[5] = {5,3,6,9,10};
//     mx_printstr("536910 - ");
//     mx_foreach(arr_each, 5, mx_printint);
//     mx_printchar('\n');


//     mx_printstr("--------------------------------------------------Mx_Binary_Search----------------------------------------\n");
//     char *arr_bin[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count_bin = 0;
//     printf("%d\n", mx_binary_search(arr_bin, 6, "aBz", &count_bin));

//     char *arr_bin1[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count_bin1 = 0;
//     printf("%d\n", mx_binary_search(arr_bin1, 6, "aBc", &count_bin1));

//     mx_printstr("---------------------------------------------------Mx_Bubble_Sort-------------------------------------------\n");
//     char *arr_buble[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d\n", mx_bubble_sort(arr_buble, 4));

//     char *arr1_buble[] = {"abc", "acb", "a"};
//     printf("%d\n", mx_bubble_sort(arr1_buble, 3));

   // mx_printstr("-------------------------------------------------------------Mx_QuickSort----------------------------------------------------------\n");


//     char *arr_quick[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     int count_quick = mx_quicksort(arr_quick, 0, 3);
//     printf("%d\n", count_quick);
//     for (int i = 0; i < 4; i++)
//         printf("%s\n", arr_quick[i]);
    
//     char *arr1_quick[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Biff Tannen"};
//     int count1_quick = mx_quicksort(arr1_quick, 0, 5);
//     printf("%d\n", count1_quick);
//     for (int i = 0; i < 6; i++)
//         printf("%s\n", arr1_quick[i]);

//     char *arr_x[] = {"sh1 2cmHHB8sLNW6",
//                  "mzzaT6euQk",
//                  " 1QPp TrHdJ",
//                  "Rp3yM9ULFo2tIx",
//                  "2a I0rOnF1fPEhx8",
//                  " pPlALd2nv",
//                  "dPA4tD WNMP",
//                  "s5oVwbyY5AGfn18nk",
//                  "YtoTeo2ZsvPatqkPd 5",
//                     "Gwoj13RsP54 8O",
//                     "T8m V0jeMY1Uj7GX",
//                     "QznGCNEc4o",
//                     "d4g3ogpmCM2NWyfBUa",
//                     "U L9aitSY8SqNW",
//                     "nImrhTZ6VX2ccD2",
//                     "dS90H3wbPRZiWCDvofxf",
//                     "KUTaUPXRIfeWyKS",
//                     "D9DuyiPmhn",
//                     "N2h0fv8A3KvDuR6",
//                     "GGKBJTtWJhfJ8y0g",
//                     "Zdmy2 kqIYov7mg517",
//                     " 8MjhlX lbse",
//                     "d gd tdfK 15Oc O9z6G",
//                     "wbUj67zdEaHFwTLf",
//                     "GyeL0Dphbj9TDkulc",
//                     "t0 C26SUTGW1NF Ow7AH",
//                     " I8wXo2AH9x",
//                     "biTXR4x3MM4Jn",
//                     "BSJ2gbZ7ngWyKLPh4WG",
//                     " PAW1tm j7pPZ",
//                     "FRLx6 eG0xxF11 TZ",
//                     "zMfFYH 0 1",
//                     "iUYJZMd9AY9Rn",
//                     "JpEGFgo nw",//34
//                     "JGz 1GoR4sT8vo",
//                     "zP3YaZ2YhS70KWuAl",
//                     "dY5s5G0 IBbAJf2WtUu",
//                     "4fhwxKNI9ZUzvT",
//                     "iLKeq VRBS",
//                     "2kEkMk3trwy Ddeic G",
//                     "vF5iBXg21 mMy5r",
//                     "f k a0s33mh0 ZQ",
//                     "b 1gHsw3MUgHniKh",
//                     "yyLMylI1eqm SoOu6uxG",
//                     "nxFhzHEmUa7Blo",
//                     "WcIHu36RwQAvxb1VQ",
//                     "toIF0Lo6dil9y2XO0",
//                     "g8pRaAf4x35H9",
//                     "dc0sEDcsxJYn6",
//                     "v 3ilYe4tq9H",
//                     "t yBJnea J ",
//                     " baCr CGDC775R",
//                     "G6ZpwQ3MKWbi xW",
//                     " ",
//                     "WKkCjOYkyzAUfILsIdHg",
//                     "v41MQ9Y xrYG4Ot",
//                     "hcj OrVsE5",
//                     "AXCs9giIZ93 giC ons",
//                     " OHmyRuN6JUa2o",
//                     " J sM Ow MF z2Ht",
//                     "BCqRcwwSr3",
//                     "sJOOonVJMBAblJM ",
//                     "9nXhS72u9Ap RKX",
//                     "9PsPtfyIE XHevg",
//                     "qann6ywHfbX",
//                     "NKxbStcEwBG",
//                     "QpAUp7NzPbJcRzHexx ",
//                     "45rXr ATF2VEsn",
//                     "pEg47yOqQX O1R",
//                     "VL UOYcTiy9Rrp1nFc1",
//                     "zSZHqte1v2sfe",
//                     "pR4hjTQFJtElUoe BC",
//                     "8Da KNB1TP3mc",
//                     "iSXXMiwU IFSPcqb17oM",
//                     "PY2INvibcpF",
//                     "q9CNYOEYxvCB",
//                     "we ugIeWWP7RX8G",
//                     "Ac1f kSYkcBfj9ll",
//                     "TuweyM FWHDM0M28C",
//                     "W0qKPDH9 NanR",
//                     " 0 WPc4R9PfMU5l",
//                     " vkFwWCKMoS",
//                     "gdRTYp9Ah4I2JV",
//                     "ttjXKrYs9kYwyo",
//                     "7IoLCoABlQwS1m",
//                     "yrJ8IP7Xn W dCI ozK",
//                     "1ZdN45zdcCKBiu4",
//                     "R4pCwi8XGaGxB",
//                     "Tib1L0CX5gvKACC5",
//                     "LWMOw4BbC5Nx",
//                     "OOZx6TD cl9MbPGOAqS",
//                     "l 1wtjbE3p80",
//                     "GbwhhKxKkq",
//                     "kax4N ZB9XKG",
//                     "pFeWRk70J98UuD ",
//                     "VXdkB65e MHRKiT rI",
//                     "7b57MsawFn4mJ",
//                     "4WExjCDhAZ",
//                     "cH 4UdsS8A7yzL8ec",
//                     "4XfIyKnrwi7F",
//                     "H6zacnow0F5vP "};
// //int size1 = 6;
// printf("\nswap = %d\n", mx_quicksort(arr_x, 2, 100));

// for (int i = 0; i < 101; i++)
//     printf("%s\n", arr_x[i]);


//     mx_printstr(" **********************\n *\tSTRING PACK    *\n **********************\n\n");

//      mx_printstr("---------------------------------------------Mx_Strlen------------------------------------\n");
//     printf("%d\n", mx_strlen("SAsa"));
//     printf("%d\n", mx_strlen("fasfafeaf43524sdvdfx dgd sfg"));
//     printf("%d\n", mx_strlen("glfhljuiewrywrwegre"));
//     printf("%d\n", mx_strlen("SAsfdgjfhdugdifuga"));
//     printf("%d\n", mx_strlen("SAsayojiyvzsdf`dkmhs4 34 36 ts f"));
//     printf("%d\n", mx_strlen("SAsakhjgf reu9h  8437 hfj sg"));
//     printf("%d\n", mx_strlen("SAsa rdib ethhr t2"));
//     mx_printstr("\n");

//     mx_printstr("--------------------------------------------------Mx_Swap_Char--------------------------------------------------\n");
//     char str_swap[] = "ONE";
//     mx_swap_char(&str_swap[0], &str_swap[1]);
//     printf("%s\n", str_swap);
//     mx_swap_char(&str_swap[1], &str_swap[2]);
//     printf("%s\n", str_swap);
//     mx_swap_char(NULL, NULL);
//     printf("%s\n", str_swap);


//     mx_printstr("-----------------------------------------------------Mx_Str_Reverse-----------------------------------------------------------\n");
//     char str_reverse[] = "game over";
//     mx_str_reverse(str_reverse);
//     printf("%s\n", str_reverse);
//     char str1_reverse[] = "Antoha The Best"; 
//     mx_str_reverse(str1_reverse);
//     printf("%s\n", str1_reverse);

//    mx_printstr("----------------------------------------------------------Mx_Strdel---------------------------------------------------------------\n");
//     char *str_del[] = {"23fa", "gfdj", "gdffd"};
//     for (int i = 0; i < 3; i++) {
//         mx_printstr(str_del[i]);
//         mx_printchar(' ');
//     }
//     *str_del = mx_strnew(4);
//     mx_printstr("\nAFTER");
//     mx_strdel(str_del);
//     printf("\n%s\n", *str_del);



//     mx_printstr("----------------------------------------------------Mx_Del_Strarr-------------------------------------------------------------------\n");
//             char **strarr = (char **)malloc(sizeof(char *) * 3);
//         strarr[0] = strdup("abc"); strarr[1] = strdup("xyz"); strarr[2] = NULL;
//         mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]); 
//         mx_del_strarr(&strarr);
//         mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr);
//     mx_printchar('\n');


//     mx_printstr("---------------------------------------------------------Mx_Get_Char_Index-----------------------------------------------------------\n");
//     char str_index[] = "The best";
//     printf("7 - %d\n", mx_get_char_index(str_index, 't'));
//     char *str1_index = NULL;
//     printf("Not exist - %d\n", mx_get_char_index(str1_index, 'e')); 
//     char str2_index[] = "the best";
//     printf("Dont found - %d\n", mx_get_char_index(str2_index, 'q'));


//     mx_printstr("----------------------------------------------------------Mx_Strdup------------------------------------------------------------------------\n");
//     char *str1_dup  = "dasdasgefea";
//     printf("my own %s\n", mx_strdup(str1_dup));
//     printf("original %s\n", strdup(str1_dup));


// mx_printstr("--------------------------------------------------------------Mx_Strndup----------------------------------------------------------------------------\n");
// char *str1_ndup = "Antoha";
// char *str2_ndup = "ANTON";
// printf("my - %s\n", mx_strndup(str1_ndup, 3));
// printf("orig - %s\n", strndup(str1_ndup, 3));

// printf("my - %s\n", mx_strndup(str2_ndup, -3));
// printf("orig - %s\n", strndup(str2_ndup, -3));

// mx_printstr("---------------------------------------------------------------Mx_Strcpy--------------------------------------------------------------------------------\n");
// const char *src_cpy = "Hello Neo";
// char dst_cpy[] = "";
// printf("input Hello Neo - ");
// printf("output %s\n", mx_strcpy(dst_cpy, src_cpy));

// mx_printstr("------------------------------------------------------------------Mx_Strncpy---------------------------------------------------------------------------\n");
// const char *src_ncpy = "Hello My Bro";
// char dst_ncpy[] = "";
// printf("Intput Hello My Bro n = 4 \n");
// printf("Output %s\n", mx_strncpy(dst_ncpy, src_ncpy, 4));

// printf("Intput Hello My Bro n = 100 \n");
// const char *src1_ncpy = "Hello My Bro";
// char dst1_ncpy[] = "";
// printf("Output %s\n", mx_strncpy(dst1_ncpy, src1_ncpy, 100));

// mx_printstr("------------------------------------------------------------------Mx_Strcat------------------------------------------------------------------------------\n");
// char str1_cat[] = "Best ";
// printf("1-st str - Best\n");
// const char *str2_cat = "library";
// printf("2-nd str - library\n");
// printf("%s\n", mx_strcat(str1_cat, str2_cat));

//     mx_printstr("-------------------------------------------------------------------Mx_strstr--------------------------------------------------------------------------\n");
//     char str1_str[] = "hello Neo bro";
//     printf ("str1 = hello Neo bro\n");
//     char str2_str[] = "Neo";    
//     printf("delim Neo\n");
//     printf("result - %s\n", mx_strstr(str1_str, str2_str));

//     mx_printstr("-------------------------------------------------------------------Mx_get_substr_index--------------------------------------------------------------------\n");

//     printf("%d\t", mx_get_substr_index("McDonalds", "Don")); printf("return 2\n");
//     printf("%d\t", mx_get_substr_index("McDonalds Donuts", "on")); printf("return 3\n");
//     printf("%d\t", mx_get_substr_index("McDonalds", "Donatello")); printf("return -1\n");
//     printf("%d\t", mx_get_substr_index("McDonalds", NULL)); printf("return -2\n");
//     printf("%d\t\n", mx_get_substr_index(NULL, "Don")); printf("return -2 \n");


//     mx_printstr("---------------------------------------------------------------------Mx_Count_Substr-----------------------------------------------------------------------\n");
//     char str_substr[] = "yo, yo, yo Neo";
//     char sub_substr[] = "yo ";
//     printf("%d\t", mx_count_substr(str_substr, sub_substr)); printf("returns 3\n"); 
//     printf("%d\t", mx_count_substr(str_substr, NULL)); printf("returns -1\n");
//     printf("%d\t", mx_count_substr(NULL, sub_substr)); printf("returns -1\n");

//     mx_printstr("--------------------------------------------------------------------Mx_count_words---------------------------------------------------------------------------\n");
//     char str_count_words[]= "  follow  *   the  white rabbit ";
//     printf("%d\t", mx_count_words(str_count_words, '*')); printf("return - 2\n");
//     printf("%d\t", mx_count_words(str_count_words, ' ')); printf("return - 5\n");
//     printf("%d\t", mx_count_words(NULL, ' ')); printf("return - -1\n");


//         mx_printstr("-----------------------------------------------------------------Mx_print_strtrim-------------------------------------------------------------------------\n");
//         char *name_trim = "My name... is Neo     \t                   \n";
//         char *name3_trim = mx_strtrim(name_trim);
//         printf("%s\n", name3_trim); 
//         char *name1_trim = "\f                      \t                  \n";
//         printf("%s\n", mx_strtrim(name1_trim)); 
//         char *name2_trim = "\f     My name        ...      is         Neo  \t\n";
//         printf("%s\n", mx_strtrim(name2_trim));

//         mx_printstr("----------------------------------------------------------------------------Mx_Del_Extra_White_spaces------------------------------------------------------\n");
//         char *name_spaces = "\f     My name\n\t    \r       \n...       \nis\n       \nNeo  \t\n";
//         char *name2_spaces = mx_del_extra_spaces(name_spaces);
//         printf("%s\n", name2_spaces);



//         mx_printstr("-----------------------------------------------------------------------------Mx_strsplit-------------------------------------------------------------------------------------\n");
//         char **str_split = mx_strsplit("sdadasa * dasd ***** dadssd", '*');
//         if (str_split != NULL)
//         for (int i = 0; str_split[i]; i++)
//             printf("%s\n", str_split[i]);
//         char *s_split = "**Good bye,**Mr.*Anderson.****";
//         char **res_split;
//         char delimetr_split = '*';

//         res_split = mx_strsplit(s_split, delimetr_split);
//         for(int i = 0; i < mx_count_words(s_split, delimetr_split); i++) 
//             printf("%s\n", res_split[i]);

//         mx_printstr("--------------------------------------------------------------------------Mx_Strjoin------------------------------------------------------------------------------\n");
//         char *str1 = "Hello ";
//         char *str2 = "World";
//         char *str3 = NULL;
//         printf("%s\n", mx_strjoin(str1, str2));
//         printf ("%s\n", mx_strjoin(str2, str3));
//         printf("%s\n", mx_strjoin(str3, str3));

//        mx_printstr ("----------------------------------------------------------------------Mx_Replace_Substr--------------------------------------------------------------------------\n");

        // printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts"));
        // printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta"));
        // printf("%s\n", mx_replace_substr("Ururu turu", "r", "t"));
        // printf("%s\n", mx_replace_substr("Ururu turu", "ru", "i")); //returns "Uii tui"
        // printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ata")); //returns "Uataata tuata"
//         printf("%d\n", mx_strncmp("Aruru turu", "B", -1));
//         printf("%d\n", mx_strncmp("Aruru turu", "B", -2));
//         mx_replace_substr("Ururu turu", "ru", "ta");
//         mx_printchar('\n');

        // mx_printstr("----------------------------------------------------------------------Mx_File_to_str-----------------------------------------------------------------------------------\n");
        // char *s_file = mx_file_to_str("fragment");
        // printf("%s", s_file);

        // mx_printstr("\n\n----------------MX_READ_LINE-------------------\n"); // CORRECT IT !!!!!!
        // int fd = open("fragment", O_RDONLY);
        // // int fd = -1;
        // char *lineptr1 = NULL;
        // int res1;
        // res1 = mx_read_line(&lineptr1, 20, 'f', fd);
        // printf("\nres1 = %d\nlineptr1 = %s|\n\n", res1, lineptr1);
        // printf("==============================================\n");
        // char *lineptr2 = NULL;
        // int res2;
        // res2 = mx_read_line(&lineptr2, 35, 't', fd);
        // printf("\nres2 = %d\nlineptr2 = %s|\n\n", res2, lineptr2);
        // printf("==============================================\n");
        // char *lineptr3 = NULL;
        // int res3;
        // res3 = mx_read_line(&lineptr3, 4, '.', fd);
        // printf("\nres3 = %d\nlineptr3 = %s|\n\n", res3, lineptr3);
        // printf("==============================================\n");
        // char *lineptr4 = NULL;
        // int res4;
        // // printf("\nlineptr4 = %s|\n\n", lineptr4);
        // res4 = mx_read_line(&lineptr4, 4, '5', fd);
        // printf("\nres4 = %d\nlineptr4 = %s|\n\n", res4, lineptr4);
        // printf("==============================================\n");
        // char *lineptr5 = NULL;
        // int res5;
        // res5 = mx_read_line(&lineptr5, 4, 'a', fd);
        // printf("\nres5 = %d\nlineptr5 = %s|\n\n", res5, lineptr5);
        // printf("==============================================\n");
        // close(fd);
        // // system("leaks -q a.out");
        // mx_printstr("\n");

//         mx_printstr(" **********************\n *\tMEMORY PACK    *\n **********************\n\n");

//         mx_printstr("--------------------------------------------------------------------------Mx_memset-------------------------------------------------------------------------------\n");
//         unsigned char src_memset[15] = "1234567890";
//         memset(src_memset, '1', 10);
//         printf("orig - %s\n", src_memset);
//         unsigned char src1_memset[15] = "1234567890";
//         mx_memset(src1_memset, '1', 10);
//         printf("my - %s\n", src1_memset);


//         mx_printstr("---------------------------------------------------------------------------------Mx_Memcpy----------------------------------------------------------------------------\n");
//         char src_memcpy[] = "Hello World";
//         char *dest_memcpy = NULL;
//         dest_memcpy = mx_strnew(mx_strlen(src_memcpy));
//         mx_memcpy(dest_memcpy, src_memcpy, strlen(src_memcpy)+1);
//         printf(" MY - The copied string is %s\n", dest_memcpy);
//         char src1_memcpy[] = "Hello World";
//         char dest1_memcpy[100];
//         memcpy(dest1_memcpy, src1_memcpy, strlen(src1_memcpy)+1);
//         printf(" Orig - The copied string is %s\n", dest1_memcpy);
//         int arr_memcpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//         int n_memcpy = sizeof(arr_memcpy)/sizeof(arr_memcpy[0]);
//         int dest_arr_memecpy[n_memcpy], i;
//         mx_memcpy(dest_arr_memecpy, arr_memcpy, sizeof(arr_memcpy));
//         printf("The copied array is MY ");
//         for (i = 0; i < n_memcpy; i++)
//             printf("%d ", dest_arr_memecpy[i]);

//         int arr1_memcpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//         int n1_memcpy = sizeof(arr1_memcpy)/sizeof(arr1_memcpy[0]);
//         int dest_arr1_memcpy[n1_memcpy], i1_memcpy;
//         mx_memcpy(dest_arr1_memcpy, arr1_memcpy, sizeof(arr1_memcpy));
//         printf("\nThe copied array is ORIG ");
//         for (i1_memcpy = 0; i1_memcpy < n1_memcpy; i1_memcpy++)
//             printf("%d ", dest_arr1_memcpy[i1_memcpy]);
//         mx_printchar('\n');

//         mx_printstr("---------------------------------------------------------------------------------Mx_MemCcpy----------------------------------------------------------------------------\n");
        // char src_memccpy[] = "Hello World";
        // char dest_memccpy[100];
        // mx_memccpy(dest_memccpy, src_memccpy, 'l', strlen(src_memccpy)+1);
        // printf(" MY - The copied string is %s\n", dest_memccpy);

        // char src1_memccpy[] = "Hello World";
        // char dest1_memccpy[100];
        // memccpy(dest1_memccpy, src1_memccpy, 'l', strlen(src1_memccpy)+1);
        // printf(" Orig - The copied string is %s\n", dest1_memccpy);

        // int arr_memccpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
        // int n_memccpy = sizeof(arr_memccpy)/sizeof(arr_memccpy[0]);
        // int dest_arr_memccpy[n_memccpy], i_memccpy;
        // mx_memccpy(dest_arr_memccpy, arr_memccpy, 50, sizeof(arr_memccpy));
        // printf("The copied array is MY ");
        // for (i_memccpy = 0; i_memccpy < n_memccpy; i_memccpy++)
        //     printf("%d ", dest_arr_memccpy[i_memccpy]);

        // int arr1_memccpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
        // int n1_memccpy = sizeof(arr1_memccpy)/sizeof(arr1_memccpy[0]);
        // int dest_arr1_memccpy[n1_memccpy], i1_memccpy;
        // memccpy(dest_arr1_memccpy, arr1_memccpy, 50, sizeof(arr1_memccpy));
        // printf("\nThe copied array is ORIG ");
        // for (i1_memccpy = 0; i1_memccpy < n1_memccpy; i1_memccpy++)
        //     printf("%d ", dest_arr1_memccpy[i1_memccpy]);
        // mx_printchar('\n');


        //  char memccpy_dest1[10] = "123456789";
        // char memccpy_dest2[10] = "123456789";
        // mx_printstr("memccpy    return\t    | "); mx_printstr(memccpy(memccpy_dest1, "54321", '3', 8));
        // mx_printstr("|\nmx_memccpy return the same? | "); mx_printstr(mx_memccpy(memccpy_dest2, "54321", '3', 8)); mx_printstr("|\n");
        // printf("dst after memccpy    is | %s|\ndst after mx_memccpy is | %s|\n", memccpy_dest1, memccpy_dest2);
        // printf("memccpy    return\t    | %s|\n", memccpy(memccpy_dest1, "54321", 'a', 8));
        // printf("mx_memccpy return the same? | %s|\n", mx_memccpy(memccpy_dest2, "54321", 'a', 8));

        // mx_printstr("------------------------------------------------------------------------------------Mx_Memcmp----------------------------------------------------------------------------------\n");
        // char src_memcmp[] = "BBCBABAS";
        // char dest_memcmp[] = "BBCBASBAS";
        // printf("My - %d\n", mx_memcmp(dest_memcmp, src_memcmp, 20));


        // char src1_memcmp[] = "BBCBABAS";
        // char dest1_memcmp[] = "BBCBASBAS";
        // printf("Orig - %d\n", memcmp(dest1_memcmp, src1_memcmp, 20));

//         mx_printstr("----------------------------------------------------------------------------------------Mx_Memchr-----------------------------------------------------------------------------------\n");
//         char src_memchr[] = "Hello World";
//         //char dest[100];
//         char *d_memchr = (char *) mx_memchr(src_memchr, 'l', -2);
//         printf(" MY - Str is %s\n", d_memchr);

//         char src1_memchr[] = "Hello World";
//         //char dest[100];
//         char *d1_memchr = (char *) memchr(src1_memchr, 'l', -2);
//         printf(" Original - Str is %s\n", d1_memchr);


//         mx_printstr ("----------------------------------------------------------------------------------------Mx_memrchr-------------------------------------------------------------------------------\n");
//         char src_memrchr[] = "Hello World";
//         //char dest[100];
//         char *d_memrchr = (char *) mx_memrchr(src_memrchr, 'o', 10);
//         printf(" MY - Str is %s\n", d_memrchr);

//          char src1_memrchr[] = "Trinity";
//         //char dest[100];
//         char *d1_memrchr = (char *) mx_memrchr(src1_memrchr, 'i', 7);
//         printf(" MY - Str is %s\n", d1_memrchr);

//         char src2_memrchr[] = "Trinity";
//         //char dest[100];
//         char *d2_memrchr = (char *) mx_memrchr(src2_memrchr, 'M', 7);
//         printf(" MY - Str is %s\n", d2_memrchr);

        // mx_printstr("--------------------------------------------------------------------------------------Mx_memmem-------------------------------------------------------------------------------------\n");
        // char *big_memem = "Hello my name is Neo";
        // char *little_memem = "my";
        // char *res_memem = (char *) mx_memmem(big_memem, mx_strlen(big_memem), little_memem, mx_strlen(little_memem));
        // printf("My res - %s\n", res_memem);

        // char *big1_memem = "Hello my name is Neo";
        // char *little1_memem = "my";
        // char *res1_memem = (char *) memmem(big1_memem, mx_strlen(big1_memem), little1_memem, mx_strlen(little1_memem));
        // printf("Orig res - %s\n", res1_memem);


//         mx_printstr("-------------------------------------------------------------------------------------Mx_Memmove-------------------------------------------------------------------------------------------\n");
//             unsigned char src_memmove[10] = "1234567890";
//             printf ("src old: %s\n",src_memmove);
//             mx_memmove (&src_memmove[4], &src_memmove[3], 3);
//             printf ("src new: %s\n",src_memmove);

//             unsigned char src1_memmove[10] = "1234567890";
//             printf ("src old: %s\n",src1_memmove);
//             mx_memmove (&src1_memmove[4], &src1_memmove[3], 3);
//             printf ("src new: %s\n",src1_memmove);

//         mx_printstr("-----------------------------------------------------------------------------------Mx_Realloc---------------------------------------------------------------------------------------------------\n");
//            char *ptr1 = NULL;
//          ptr1 = (char *) malloc(17);
//          strcpy(ptr1, "This is 16 chars");
//          printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address %lu\n", ptr1, (long int)ptr1);
//          ptr1 = realloc(ptr1, 10);
//          printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);

//          char *ptr2 = NULL;
//          ptr2 = (char *) malloc(17);
//          strcpy(ptr2, "This is 16 chars");
//          printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr2, (long int)ptr2);
//          ptr2 = mx_realloc(ptr2, 10);
//          printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr2, (long int)ptr2);

//          char *ptr3 = NULL;
//          ptr3 = (char *) malloc(10);
//          strcpy(ptr3, "123456789");
//          printf("Ptr3 result after use LIBC realloc:  |%s| \t\t\t    Pointer address|%lu|\n", ptr3, (long int)ptr3);
//          ptr3 = realloc(ptr3, 34);
//          mx_strcat(ptr3, "+Added 25 more characters");
//          printf("Ptr3 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr3, (long int)ptr3);

//          char *ptr4 = NULL;
//          ptr4 = (char *) malloc(10);
//          strcpy(ptr4, "123456789");
//          printf("Ptr4 result after use MY mx_realloc: |%s| \t\t\t    Pointer address|%lu|\n", ptr4, (long int)ptr4);
//          ptr4 = mx_realloc(ptr4, 34);
//          mx_strcat(ptr4, "+Added 25 more characters");
//          printf("Ptr4 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr4, (long int)ptr4);

//          char *ptr5 = NULL;
//          ptr5 = (char *) malloc(10);
//          printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
//          ptr5 = realloc(ptr5, 17);
//          printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);

//          char *ptr6 = NULL;
//          ptr6 = (char *) malloc(10);
//          printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr6, (long int)ptr6);
//          ptr6 = realloc(ptr6, 17);
//          printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr6, (long int)ptr6);

//          char *ptr7 = NULL;
//          ptr7 = (char *) malloc(10);
//          strcpy(ptr7, "XXXXXXXXX");
//          printf("Ptr7 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr7, (long int)ptr7);
//          ptr7 = realloc(ptr7, 0);
//          printf("Ptr7 result after use LIBC realloc:  |%s|   \t   Pointer address|%lu|\n", ptr7, (long int)ptr7);

//          char *ptr8 = NULL;
//          ptr8 = (char *) malloc(10);
//          strcpy(ptr8, "XXXXXXXXX");
//          printf("Ptr8 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr8, (long int)ptr8);
//          ptr8 = mx_realloc(ptr8, 0);
//          printf("Ptr8 result after use MY mx_realloc: |%s|   \t   Pointer address|%lu|\n\n", ptr8, (long int)ptr8);

//          char *ptr9 = NULL;
//          ptr9 = (char *) malloc(10);
//          strcpy(ptr9, "123456789");
//          printf("Ptr9 result after use LIBC realloc:   |%s|  Pointer address|%lu|\n", ptr9, (long int)ptr9);
//          ptr9 = realloc(ptr9, -1);
//          printf("Ptr9 result after use LIBC realloc:   |%s|     Pointer address|%lu|\n", ptr9, (long int)ptr9);

//          char *ptr10 = NULL;
//          ptr10 = (char *) malloc(10);
//          strcpy(ptr10, "123456789");
//          printf("Ptr10 result after use MY mx_realloc: |%s|  Pointer address|%lu|\n", ptr10, (long int)ptr10);
//          ptr10 = mx_realloc(ptr10, -1);
//          printf("Ptr10 result after use MY mx_realloc: |%s|     Pointer address|%lu|\n\n", ptr10, (long int)ptr10);


//        mx_printstr(" **********************\n *\tLIST PACK    *\n **********************\n\n");

//             mx_printstr("---------------------------------------------------------------------Mx_Create_Node---------------------------------------------------------------------------------------------------------\n");
//             char *str_node = "Hello List World";
//             t_list *new_list_node = mx_create_node(str_node);
//             printf("%s\n", new_list_node->data);
//             if(!new_list_node->next)
//             printf("(null)\n");

//             mx_printstr("------------------------------------------------------------------------------------Mx_Push_Front------------------------------------------------------------------------------------------\n");
//              char *str_front = "Matrix Push Front";
//             char *str2_front = "Not Matrix";
//             char *str3_front = "Hello neo";
//             t_list *new_list_push_front = mx_create_node(str_front);
//             mx_push_front(&new_list_push_front, str2_front);
//             mx_push_front(&new_list_push_front, str3_front);
//             mx_printlist(new_list_push_front);


//             mx_printstr("------------------------------------------------------------------------------------Mx_Push_Back------------------------------------------------------------------------------------------\n");
//             char *str_push_back = "Matrix Push Back";
//             char *str2_push_back = "Not Matrix";
//             char *str3_push_back = "Hello neo";
//             t_list *new_list_push_back = mx_create_node(str_push_back);
//             mx_push_back(&new_list_push_back, str2_push_back);
//             mx_push_back(&new_list_push_back, str3_push_back);
//             mx_printlist(new_list_push_back);

//             mx_printstr("-------------------------------------------------------------------------------------Mx_Pop_Front----------------------------------------------------------------------------------------\n");
//             char *str_pop_front = "Matrix Push Back";
//             char *str2_pop_front = "Not Matrix";
//             char *str3_pop_front = "Hello neo";
//             t_list *new_list_pop_front = mx_create_node(str_pop_front);
//             mx_push_back(&new_list_pop_front, str2_pop_front);
//             mx_push_back(&new_list_pop_front, str3_pop_front);
//             mx_printlist(new_list_pop_front);
//             mx_printstr("AFTER POP FRONT\n\n");
//             mx_pop_front(&new_list_pop_front);
            
//             mx_printlist(new_list_pop_front);


//             mx_printstr("-------------------------------------------------------------------------------------Mx_Pop_Back----------------------------------------------------------------------------------------\n");
//             char *str_pop_back = "Matrix Push Back";
//             char *str2_pop_back = "Not Matrix";
//             char *str3_pop_back = "Hello neo";
//             t_list *new_list_pop_back = mx_create_node(str_pop_back);
//             mx_push_back(&new_list_pop_back, str2_pop_back);
//             mx_push_back(&new_list_pop_back, str3_pop_back);
//             mx_printlist(new_list_pop_back);
//             mx_printstr("AFTER POP BACK\n\n");
//             mx_pop_back(&new_list_pop_back);
            
//             mx_printlist(new_list_pop_back);

//             mx_printstr("----------------------------------------------------------------------------------Mx_List_Size-------------------------------------------------------------------------------------------------\n");
//             char *str_list_size = "Matrix Push Back";
//             char *str2_list_size = "Not Matrix";
//             char *str3_list_size = "Hello neo";
//             t_list *new_list_list_size = mx_create_node(str_list_size);
//             mx_push_back(&new_list_list_size, str2_list_size);
//             mx_push_back(&new_list_list_size, str3_list_size);
//             mx_printlist(new_list_list_size);
//             mx_printchar('\n');
//             printf("List size - %d\n", mx_list_size(new_list_list_size));


//              mx_printstr("------------------------------------------------------------------------------------Mx_Sort_List-------------------------------------------------------------------------------------------------\n");
//             t_list *new_list_sort = mx_create_node((void *)10);
//             mx_push_front(&new_list_sort, (void *) 3);
//             mx_push_front(&new_list_sort, (void *) 2);
//             mx_push_front(&new_list_sort, (void *) 1);
//             mx_push_front(&new_list_sort, (void *) 5);
//             mx_push_front(&new_list_sort, (void *) 95);
//             mx_push_front(&new_list_sort, (void *) 81);
//             mx_push_front(&new_list_sort, (void *) 32);
//             mx_push_front(&new_list_sort, (void *) 5);
//             mx_push_front(&new_list_sort, (void *) 8);
//             mx_push_front(&new_list_sort, (void *) 91);
        //     mx_push_front(&new_list_sort, (void *) 45);

        //      mx_printstr("mx_sort_list return 1 2 3 5 5 8 10 32 45 81 91 95?\n\n");

        //     mx_sort_list(new_list_sort, mx_cmp);
        //     while(new_list_sort) {
        //         printf("%d ", (int) new_list_sort->data);
        //         new_list_sort = new_list_sort->next;
        //     }


         //system("leaks -q a.out");
}
