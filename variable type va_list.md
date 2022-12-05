# VARIABLE TYPE VA_LIST
va_list is a complete object type suitable for holding the information needed by the macros
va_start, va_copy, va_arg, and va_end. If a va_list instance is created, 
passed to another function, and used via va_arg in that function, 
then any subsequent use in the calling function should be preceded by a call to va_end.

In the most usual stack-based situation, 
the va_list is merely a pointer to the arguments sitting on the stack (in this case “ap”), 
and va_arg increments the pointer, casts it and dereferences it to a value. 
Then va_start initializes that pointer by some simple arithmetic (and inside knowledge) and va_end does nothing.
