# Libft
My own library with a set of standard fucntions remade by me.

<div align = "center">
     <img src = "https://www.vangproperties.com/media/3830/42lisboa.jpg?preset=imageWithTextInsideText" alt = "42 lisbon img">
</div>

## About
The goal of this project is to create a personal static library. To do this, it will be necessary to create a makefile and remake a set of standard functions from scratch.

## Mandatory
The project's mandatory functions are related to the manipulation of characters, strings, numbers and memory, with a total of 34 functions.

### Check and manipulate characters:
| Function | Description |
| :- | :- |
| ft_isalpha | Checks if the character is alphabetic. |
| ft_isdigit | Checks if the character is a dicima digit. |
| ft_isalnum | Checks if the character is alphanumeric. |
| ft_isascii | Checks if the character elongs to the ascci table. |
| ft_toupper | Converts characters from lower case to upper case. |
| ft_tolower | Converts characters from upper case to lower case. |

### Manipulate strings:
| Function | Description |
| :- | :- |
| ft_strlen   | Find the length of the string. |
| ft_strlcpy  | Copies an n number of characters from the source string to the destination. |
| ft_strlcat  | Concatenates an n number of characters from the source string to the destination. |
| ft_strchr   | Locate the character in the string (first occurrence). |
| ft_strrchr  | Locate the character in the string (last occurrence). |
| ft_strncmp  | Compares the first n characters of a string. |
| ft_strnstr  | Locate a substring in a string (size-bounded) |
| ft_substr   | Extract substring from a string. |
| ft_strjoin  | Concatenate two strings into a new one and allocate space for the new string. |
| ft_strtrim  | Trim the beginning and end of the string with the specified characters. |
| ft_split    | Split string, with specified character as delimiter, into an array of strings. |
| ft_strmapi  | Create a new string by modifying the string with a specified function. |
| ft_striteri | Iterates through a string, enabling character and index manipulation. |

### Manipulate memory:
| Function | Description |
| :- | :- |
| ft_calloc  | Dynamically allocate memory to n elements all initialized to zero. |
| ft_memset  | Write a byte to a byte string. |
| ft_bzero   | Write zeroes to a byte string. |
| ft_memcpy  | Copy memory area. |
| ft_memmove | Copy byte string. |
| ft_memchr  | Locate byte in byte string. |
| ft_memcmp  | Compare byte string. |
| ft_strdup  | Save a copy of a string with memory allocation. |

### Manipulate numbers:
| Function | Description |
| :- | :- |
| ft_atoi | Convert the ASCII string to an integer. |
| ft_itoa | Convert integer to ASCII string. |

#### Write to a file descriptor:
| Function | Description |
| :- | :- |
| ft_putchar_fd | Output a character to the given file. |
| ft_putstr_fd  | Output string to the given file. |
| ft_putendl_fd | Output string to given file with newline. |
| ft_putnbr_fd  | Output integer to the given file. |

## BONUS

Bonus functions are related to list manipulation.


| Function | Description |
| :- | :- |
| ft_lstnew       | Create new list. |
| ft_lstadd_front | Add a new element at the beginning of the list. |
| ft_lstadd_back  | Add a new element at the end of the list. |
| ft_lstsize      | Count elements of a list. |
| ft_lstlast      | Find the last element of the list. |
| ft_lstdelone    | Delete element from the list. |
| ft_lstclear     | Delete the sequence of elements of the list from a starting point. |
| ft_lstiter      | Apply function to the content of all list elements. |
| ft_lstmap       | Apply function to the content of all list elements into a new list. |