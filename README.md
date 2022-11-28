# Where's My Book

#### User Manual
	
This program helps search for books online. Click the ‘Where’s My Book.exe’ and you will be asked to input the title of the book you are search for. After pressing enter, the authors will need to be input. Enter the authors first name last name and separated by commas. Finally, the ISBN can be input, you should be able to enter this exactly as it is shown, but please limit yourself to three dashes if by any chance there are more.   The output is a query that can be used for searching for your book in online databases.  

#### System Manual 

This program is all string based. The three inputs are all strings and then using length and find functions, the correct outputs are found. The program can handle almost anything the user throws at it. It can handle a title of superfluous proportions, as well as multiple authors and an ISBN containing up to three dashes. Using common string manipulators the first name of the title is extracted from the input, as well as the last name of the first author and the ISBN without any dashes. This all is then output as an in query format which can easily be used by an online text lookup service.

#### Test Log

Believe it or not I only ran into one major error during the process of building this program. I never realized that the substring command looks for a starting place and a length; I thought that it looked for an starting location and an ending location, so that took me a while to figure out.

Jasen Carroll\
CS171-064\
1/25/2010