A movie reviewer is a person who watches a film, rates how good it is, and provides comments.

Write a C++ program which could be used to efficiently store these reviews. Implement this in a linked list.

You'll need to write code that adds nodes to the tail of the linked list. The sample code in this module contains the code to add notes to the head of the linked list.

At program startup, ask the user which mode to use, new nodes at the head or the tail of the linked list.

Obtain two pieces of data from the user, the rating and the comments. Store these in the linked list.

After all reviews have been input, traverse the linked list to output the data and calculate/output the average review.

Sample Output
Which linked list method should we use?
    [1] New nodes are added at the head of the linked list
    [2] New nodes are added at the tail of the linked list
    Choice: 2
Enter review rating 0-5: 4.8
Enter review comments: Oscar contender
Enter another review? Y/N: y
Enter review rating 0-5: 4.1
Enter review comments: Brilliant lead acting
Enter another review? Y/N: n
Outputting all reviews:
    > Review #1: 4.8: Oscar contender
    > Review #2: 4.1: Brilliant lead acting
    > Average: 2.96667
