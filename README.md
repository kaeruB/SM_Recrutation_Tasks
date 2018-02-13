# SM_Recrutation_Tasks

Task1:

Please post your answer on https://gist.github.com/ or albo http://pastebin.com/ (or similar tool) and paste the link here.
You can use any programming language, but write what the chosen language is (and version, if applicable).

Task:
Write a function that receives two sequences: A and B of integers and returns one sequence C. Sequence C should contain all elements from sequence A (maintaining the order) except those, that are present in sequence B p times, where p is a prime number. 

Example:
A=[2,3,9,2,5,1,3,7,10]
B=[2,1,3,4,3,10,6,6,1,7,10,10,10]
C=[2,9,2,5,7,10]

Task2: 

Problem:
We would like to check what users are actively using one of our web applications and, if so, ask for their opinion. 

Each user enters the application and navigates between pages. For each user, we log whenever he or she opens main page or any other page. Whenever he or she open a page for the first time or after a break of at least 30 minutes, we count it as a new session. We will ask the user for his or her opinion only when for the last three days he or she used the application each day and in total he or she has had six unique sessions.

Task:
Write a function that will receive the log, i.e. a sequence of timestamps in chronological order. Each timestamp denotes single time the user has opened the website. The function should return True if we should ask the user for his or her opinion and False otherwise. Timestamps are strings in the format of 'YYY-MM-DD hh:mm:ss', using user's time zone. You can assume that the last entry is with today's date.

Example:
['2017-03-10 08:13:11', '2017-03-10 19:01:27', '2017-03-11 07:35:55', '2017-03-11 16:15:11', '2017-03-12 08:01:41', '2017-03-12 17:19:08']
Result: True (6 sessions during over 3 days)

['2017-03-10 18:58:11', '2017-03-10 19:01:27', '2017-03-11 07:35:55', '2017-03-11 16:15:11', '2017-03-12 08:01:41', '2017-03-12 17:19:08']
Result: False (user entered the website during each of the three days, but had only 5 sessions)

['2017-03-08 17:11:13', '2017-03-11 17:22:47', '2017-03-11 19:23:51', '2017-03-11 22:03:12', '2017-03-12 08:32:04', '2017-03-12 13:19:08', '2017-03-12 17:19:08']
Result: False (user entered the website during only last two days)
