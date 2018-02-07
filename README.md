# Movie-Archive-2015

Project Description
* Attached is the "DVD_list.txt" file including detailed information belonging to a number of movies.
* There are 7 columns in the dataset. The column names are "DVD_Title", "Status", "Price", "Year", "Genre", "DVD_ReleaseDate", and "ID", respectively.
* For example, the first row of the file includes the following values O (Miramax Echo Bridge) Discontinued $6.99 2001 Suspense/Thriller 5/3/2011 202504
Here, "O (Miramax Echo Bridge)" is the value of "DVD_Title" field, "Discontinued" of "Status" field, "$6.99" of "Price" field, "2001" of "Year" field, "Suspense/Thriller" of "Genre" field, "5/3/2011" of "DVD_ReleaseDate" field in the form of Month/Day/Year, and "202504" of "ID" field.
* Your program will consist of two classes: "Movie" and "Date".
* Declare a class called "Movie" which includes the following data members: DVD_Title: Name of the movie
Status: "Out", "Discontinued", or "Cancelled"
Price: Price of the DVD of the movie
Year: The release year
Genre: Type of the movie
DVD_ReleaseDate: The release date of the DVD of the movie ID: Unique ID of the DVD
* Decide on the constructor(s), set and get functions, member functions, etc. that should be implemented according to the requirements of the project given below. You should take the OOP principles into account while implementing the classes in this project. The better and more comprehensive classes you implement, the higher score you get.
* In "Movie" class, choose appropriate data types for each data member. However, you should declare a new class called "Date" in the project and keep "DVD_ReleaseDate" field of "Movie" class as a "Date" object.
* "Date" class should include day, month, and year data members and should be developed by following the encapsulation principle of OOP.
* Read the "DVD_list.txt" file line by line and set each movie to an element of a movie object array.
* Design the following user interface: (1) Search and display a movie by
(1) DVD_Title
(2) ID
(2) Compare two movies based on their price information (3) List movies based on following genres
(1) Suspense (2) Foreign (3) Comedy (4) Western (5) Music
(6) Drama (4) Display Statistics
(1) Display number of each genres
(2) Display average price
(3) Display the number of movies whose price is greater than an input (4) Display average price of "Discontinued" movies
(5) Display average price of "Out" movies
(6) Display average price of "Cancelled" movies
(5) Display movies after an input date (0) Exit
* The program will be controlled through the above given user interface (menu). The specifications and implementation details of each menu item are given below. Read carefully to get full credits:
(1) Search and display a movie by (1) DVD_Title

(2) ID
- When "1" is chosen from the main menu by the user, the sub-options which are "DVD_Title" and "ID" will be displayed. If the user chooses "1" in the sub-menu, the user will enter the title of DVD and the object array will be searched based on the entered value. If "2" is chosen in the sub-menu, the movie will be searched based on the entered ID value.
- The '*' character can be used to search a movie by DVD_Title or ID. For example, if the user searches a movie by DVD_Title and enter "Overcom*", the movies whose DVD_Title field begins with " Overcom" will be listed.
- To print a movie object, overload "cout" operator and use it.
(2) Compare two movies based on their price information
- When this option (2) is chosen from the main menu, the program will ask the user to enter the ID of two movies. If both of the entered ID are valid, the program will compare the prices of the movies and accordingly display a message. For example, if 38734 and 4353 are entered, following message will be displayed:
-"On Golden Pond (Artisan/ Special Edition/ Old Version)" (ID: 4353) is more expensive than "On Edge" (ID: 38734)
- To compare the movies, overload "greater than" (>) and "is equal to" operators (==) separately that compares if the prices of the movies are exactly same or left object is more expensive than that of right object and use these operators to implement the above comparison task.
(3) List movies based on following genres
- When this option is chosen from the main menu, the following sub-menu will be displayed:
(1) Suspense (2) Foreign (3) Comedy (4) Western (5) Music
(6) Drama

- The user will get a genre type from the sub-menu and all of the movies belonging to the entered genre will be displayed.
- (4) Display Statistics
- When this option is chosen from the main menu, the sub-menu items that will be displayed and their specifications are given below:
(1) Display number of each genres
- Display number of each different genre type
(2) Display average price
- Display the average price of all movies
(3) Display the number of movies whose price is greater than an input
- Get an input price from the user and compare the price of each movie with the input value. For comparison operation, overload "greater than" operator as a global function that compares a double value and a Movie object, and use this operator.
(4) Display average price of "Discontinued" movies
- Display the average price of all movies whose "Status" field is "Discontinued".
(5) Display average price of "Out" movies
- Display the average price of all movies whose "Status" field is "Out".
(6) Display average price of "Cancelled" movies
- Display the average price of all movies whose "Status" field is "Cancelled".
- (5) Display movies after an input date
- The user will enter a date input like "7/19/2001" and the movies whose DVD have been released after this date will be displayed.
-(0) Exit
- The program will be terminated and close.

