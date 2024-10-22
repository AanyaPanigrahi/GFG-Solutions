<h2><a href="https://www.geeksforgeeks.org/problems/sub-arrays-with-equal-number-of-occurences3901/1">Sub-arrays with equal number of occurences</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[] </strong>and two integers say, <strong style="user-select: auto;">x&nbsp;</strong>and <strong style="user-select: auto;">y</strong>, find the number of sub-arrays in which the number of occurrences of <strong style="user-select: auto;">x</strong> is equal to the number of occurrences of <strong style="user-select: auto;">y</strong>.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [1, 2, 1] , x= 1 , y = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation: </strong>The possible sub-arrays have same equal number of occurrences of x and y are:
1) [1, 2], x and y have same occurrence(1).
2) [2, 1], x and y have same occurrence(1).<br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [1, 2, 1] , x = 4 , y = 6
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation: </strong>The possible sub-arrays have same equal number of occurrences of x and y are:
1) [1], x and y have same occurrence(0).
2) [2], x and y have same occurrence(0).
3) [1], x and y have same occurrence(0).
4) [1, 2], x and y have same occurrence(0).
5) [2, 1], x and y have same occurrence(0).
6) [1, 2, 1], x and y have same occurrence(0).<br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [1, 2, 1] , x= 1 , y = 4
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>The possible sub-array have same equal number of occurrences of x and y is: [2], x and y have same occurrence(0)</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:&nbsp;</strong><br style="user-select: auto;">1 &lt;= arr.size() &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">1 &lt;= arr[i], x, y&lt;=10<sup style="user-select: auto;">6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;