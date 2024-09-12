<h2><a href="https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list">Doubly linked list Insertion at given position</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a doubly-linked list, a&nbsp;position <strong style="user-select: auto;">p,</strong>&nbsp;and an integer <strong style="user-select: auto;">x.</strong> The task is to add a&nbsp;new node with value <strong style="user-select: auto;">x</strong> at the position just after <strong style="user-select: auto;">p<sup style="user-select: auto;">th</sup></strong> node&nbsp;in the doubly linked list.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 2&lt;-&gt;4&lt;-&gt;5
p = 2, x = 6 
<strong style="user-select: auto;">Output: </strong>2 4 5 6<strong style="user-select: auto;">
Explanation: </strong>p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).</span>
</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
p = 0, x = 44
<strong style="user-select: auto;">Output: </strong>1 44 2 3 4<strong style="user-select: auto;">
Explanation: </strong>p = 0, and x = 44 . So, 44
is inserted after p, i.e, at position 1
(0-based indexing).</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">The task is to complete the function <strong style="user-select: auto;">addNode</strong>() which head reference, position and data to be inserted as the arguments, with no return type.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(N)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(1)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">0 &lt;= p &lt; N</span></p>
<p style="user-select: auto;">&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>doubly-linked-list</code>&nbsp;<code>Data Structures</code>&nbsp;