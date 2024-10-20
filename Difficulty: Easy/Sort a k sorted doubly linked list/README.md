<h2><a href="https://www.geeksforgeeks.org/problems/sort-a-k-sorted-doubly-linked-list/1">Sort a k sorted doubly linked list</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a doubly linked list, each node is at most k-indices away from its target position</span><span style="font-size: 18px; user-select: auto;">. The problem is to sort the given doubly linked list. The distance can be assumed in either of the directions (left and right).</span></p>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Examples :</span></strong></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>Doubly Linked List :<strong style="user-select: auto;"> </strong>3 &lt;-&gt; 2 &lt;-&gt; 1 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 4 , k</span><span style="font-size: 18px; user-select: auto;"> = 2<strong style="user-select: auto;">
Output: </strong>1 &lt;-&gt; 2 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6<br style="user-select: auto;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/710293/Web/Other/blobid0_1721194663.png" width="400" height="120" style="user-select: auto;"><strong style="user-select: auto;">
Explanation: </strong></span><span style="font-size: 18px; user-select: auto;">After sorting the given 2-sorted </span><span style="font-size: 18px; user-select: auto;">list is 1 &lt;-&gt; 2 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6.</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>Doubly Linked List :<strong style="user-select: auto;"> </strong></span><span style="font-size: 18px; user-select: auto;">5 &lt;-&gt; 6 &lt;-&gt; 7 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 4</span><span style="font-size: 18px; user-select: auto;"> , </span><span style="font-size: 18px; user-select: auto;">k = 3<strong style="user-select: auto;">
Output: </strong>3 &lt;-&gt; 4 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 7<br style="user-select: auto;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/710293/Web/Other/blobid1_1721194681.png" width="400" height="120" style="user-select: auto;"><strong style="user-select: auto;">
Explanation: </strong>After sorting the given 3-sorted list is 3 &lt;-&gt; 4 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 7.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n*logk)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(k)<br style="user-select: auto;"></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">1 &lt;= k &lt; number of nodes<br style="user-select: auto;">1 &lt;= node-&gt;data &lt;= 10<sup style="user-select: auto;">9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;