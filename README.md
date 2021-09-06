# 42SchoolCHeader

42SchoolCHeader OOP and Template Library in C. 

The 42SchoolCHeader library is inspired by the 42 school library libft and is a logical continuation of the latter.

The 42 School C Header library is implemented in the programming language C. The 42 School C Header library can be divided into 4 parts.

	1․  C is easy.
        A set of functions based on the principles of procedural programming, which are considered
	    the analogs of functions available in the standard library of the C programming language, 
	    more secure versions or the ones that extend the functionality of the library. 
	2․  The data processing tools implemented in OOP style and concept. In particular, the 
	    tools with the likes of c_string for char, c_vector_string and c_file_editor for making 
	    the working process on file contents more convenient operation are available. 
 	3․  The data structures developed using the principles of metaprogramming, which store 
        information in the void* type and manage it through Preprocesor macro and the c_type_ctrl 
	    sub-library from 42SchoolCHeader library.
	4․  Other tools, sub-libraries, testers.
  
The basic structure of the 42SchoolCHeader library․

	1.    libft (library contents are private).
	2․    c_string char's managment tools․
          a.  c_sstring (c static string). A string tool, implemented in the C programming language, 
	  	  which works in static memory and is functionally analogous to the C++ string tool.
	      b.  c_dstring (c dynamic string). Astring tool, implemented in the C programming language, 
	     	  which works in dynamic memory and is functionally analogous to the C++ string tool.
          c.  c_string (c string). A string tool, implemented in the C programming language, which 
	     	  works both in static and dynamic memory and is functionally analogous to the C++ string 
	     	  tool.
 	3.    c_array_int int array management tools ․
	      a.  c_sarray_int (c static array int). An array tool, implemented in the C programming 
	      	  language, which stores int values, works in static memory անդ is functionally similar
		  to the C++ array<int> tool.
	      b.  c_darray_int (c dynamic array int). An array tool, implemented in the C programming 
	          language, which stores int values, works in dynamic memory and is functionally similar
		  to the C++ vector<int> tool.
	      c.  c_vector_int (c vector int). An array tool, implemented in the C programming language, 
	      	  which stores int values, works both in static and dynamic memory and is functionally 
		  similar to the C++ vector<int> tool. 
	4․    c_array_string tools for working with two-dimensional arrays of the char type
	      a.  c_sarray_string (c static array string). An array tool, implemented in the C 
	          programming language, that stores c_string values, works in static memory and from the
		  poinտ of view of functionality, it is the analog of the C++ sarray<string> tool.
	      b.  c_darray_string (c dynamic array string). An array tool, implemented in the C programming
	          language, that stores c_string values, works in dynamic memory and from the point of view 
		  of functionality, it is the analog of the C++ darray<string> tool.
	      c.  c_vector_string (c vector string). An array tool, implemented in the C programming language,
	          that stores c_string values, works both in static and dynamic memory and from the point of 
	          view of functionality, it is the analog of the C++ vector<string> tool.
	5․    c_file, file content management tools
          a.  get_next_line ․ (the software implementation of the tool is private).
	      b.  c_file․ a tool for primitive work with the contents of the intended file: "open", "close", 
	      	  "input", "output", "get the number of lines in the file". It is implemented in the C 
		  language and its file descriptors.
          c.  c_file_editor ․ A tool for working with the contents of a file. The tool allows you to "crawl
	  	  the contents of the file", "make changes to the index string", "save the contents of the file
		  in the specified location", "duplicate the file" , etc. It is implemented in C using the
		  tools of the stdio library, which are part of the standard library of the C language.
	6․    c_file, file content management tools
          a.  c_varray (c void * array). An array tool, based on metaprogramming principles, that works in
	          static memory.
	      b.  c_vvector (c void * vector). An array tool, based on metaprogramming principles, that works
	          in dynamic memory.
	      c.  c_vlist (c void * list). An list tool, based on metaprogramming principles, that works in
	          dynamic memory.
	7․    c_is_easy library, which is a more secure version of the libft library.
          A number of actions are automated և make the further "code generation" process faster.

With the 42SchoolCHeader library software, there are testers who check the effectiveness of the tools.

Disadvantages.

	1․  Software implementations could definitely be better. There was no task to implement it as
	    efficiently as possible, the task was to study OOP, meta-programming macro work at C level.
	    The author of the project believes that those who will be able to implement the concepts of OOP
	    in the C programming language will have a clearer idea of OOP in C++. With the software 
	    implementation of the 42SchoolCHeader library, the author has acquired a lot of new knowledge 
	    and considers the task more than completed.
	2․  Despite the fact that a lot of testing has been done, it should be taken into consideration
	    that the author of the 42 School CHeader library does not like to test code, and assures that 
	    there are many bugs in the code. It does not apply to a dynamic memory leak.The author has 
	    repeatedly checked and tested the software implementation and believes that if the tools are
	    used correctly, there should be no leakage of dynamic memory.

  Sincerely, 
  V. Gishyan.
  
  05․09․2021 
