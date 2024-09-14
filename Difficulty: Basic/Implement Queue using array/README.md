<h2><a href="https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-queue-using-array">Implement Queue using array</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Implement a Queue using an Array. Queries in the Queue are of the following type:<br style="user-select: auto;"><strong style="user-select: auto;">(i)</strong>&nbsp;1 x&nbsp; &nbsp;(a query of this type means&nbsp;&nbsp;pushing&nbsp;<strong style="user-select: auto;">'x'</strong>&nbsp;into the queue)<br style="user-select: auto;"><strong style="user-select: auto;">(ii)</strong> 2 &nbsp; &nbsp; (a query of this type means to pop an element from the queue and print the popped element)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">We just have to implement the functions <strong style="user-select: auto;">push </strong>and <strong style="user-select: auto;">pop </strong>and the driver code will handle the output. </span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>Q = 5, Queries = 1 2 1 3 2 1 4 2
<strong style="user-select: auto;">Output: </strong>2&nbsp;3<strong style="user-select: auto;">
Explanation:
</strong>In the first test case for query&nbsp;
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2 &nbsp; poped element will be 2 the 
    queue will be {3}
1 4 the queue will be {3 4}
2 &nbsp; poped element will be 3&nbsp;</span>
</pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>Q = 4, Queries = 1 3 2 2 1 4 &nbsp; 
<strong style="user-select: auto;">Output: </strong>3 -1<strong style="user-select: auto;">
Explanation:
</strong>In the second testcase for query&nbsp;
1 3 the queue will be {3}
2&nbsp; &nbsp;poped element will be 3 the
&nbsp;   queue will be empty
2&nbsp; &nbsp;there is no element in the
&nbsp;   queue and hence -1
1 4 the queue will be {4}.&nbsp;</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(1) for both&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">pop()</strong>.<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1) for both&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">pop()</strong>.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ Q ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">0 ≤ x<strong style="user-select: auto;"> </strong>≤ 10<sup style="user-select: auto;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Queue</code>&nbsp;<code>Data Structures</code>&nbsp;